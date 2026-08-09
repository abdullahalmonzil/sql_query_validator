%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

extern int yylex(void);
extern int yylineno;
extern char *yytext;
extern int yycolumn;
extern FILE *yyin;

void yyerror(const char *s);

ASTNode *g_ast_root = NULL;
int g_syntax_error = 0;
char g_last_error[512] = "";
int g_error_line = 0;
int g_error_column = 0;

%}

%code requires {
    #include "ast.h"
}

%union {
    char *str;
    ASTNode *node;
}

/* Tokens: Keywords */
%token <str> SELECT FROM WHERE GROUP BY HAVING ORDER ASC DESC LIMIT OFFSET AS DISTINCT ALL
%token <str> INSERT INTO VALUES UPDATE SET DELETE
%token <str> CREATE TABLE ALTER ADD DROP TRUNCATE RENAME TO COLUMN INDEX
%token <str> PRIMARY KEY FOREIGN REFERENCES NULL_KW UNIQUE DEFAULT CHECK CONSTRAINT AUTO_INCREMENT
%token <str> INT_TYPE VARCHAR_TYPE CHAR_TYPE TEXT_TYPE FLOAT_TYPE DOUBLE_TYPE DECIMAL_TYPE BOOLEAN_TYPE DATE_TYPE TIMESTAMP_TYPE
%token <str> JOIN INNER LEFT RIGHT FULL OUTER CROSS ON USING
%token <str> UNION INTERSECT EXCEPT
%token <str> AND OR NOT_KW LIKE IN BETWEEN IS EXISTS CASE WHEN THEN ELSE END IF_KW
%token <str> BEGIN_KW TRANSACTION COMMIT ROLLBACK SAVEPOINT
%token <str> COUNT SUM AVG MIN MAX

/* Tokens: Literals & Identifiers */
%token <str> IDENTIFIER STRING_LITERAL INT_LITERAL FLOAT_LITERAL

/* Tokens: Operators & Punctuation */
%token <str> EQ NE LT GT LE GE PLUS MINUS STAR SLASH MOD CONCAT
%token <str> COMMA SEMICOLON LPAREN RPAREN DOT

/* Non-terminal types */
%type <node> query_script statement_list statement
%type <node> select_stmt insert_stmt update_stmt delete_stmt create_table_stmt alter_table_stmt drop_table_stmt truncate_table_stmt transaction_stmt
%type <node> select_expr target_list target_item opt_from from_clause table_ref_list table_ref join_type
%type <node> opt_where opt_group_by opt_having opt_order_by order_item_list order_item opt_asc_desc opt_limit
%type <node> expr expr_list opt_expr_list case_expr when_then_list when_then_clause opt_else func_call aggregate_func
%type <node> insert_values_list tuple_list tuple assignment_list assignment
%type <node> column_def_list column_def data_type opt_column_constraints column_constraint

/* Precedence Rules */
%left UNION EXCEPT INTERSECT
%left OR
%left AND
%right NOT_KW
%left EQ NE LT GT LE GE LIKE IN BETWEEN IS
%left PLUS MINUS CONCAT
%left STAR SLASH MOD
%nonassoc UNARY

%%

query_script:
    statement_list opt_semicolon {
        g_ast_root = $1;
        $$ = $1;
    }
    | /* empty */ {
        g_ast_root = NULL;
        $$ = NULL;
    }
    ;

opt_semicolon:
    SEMICOLON
    | /* empty */
    ;

statement_list:
    statement_list SEMICOLON statement {
        if ($3) {
            ast_add_child($1, $3);
        }
        $$ = $1;
    }
    | statement {
        ASTNode *stmt_list = ast_create_node(AST_STMT_LIST, "STATEMENT_LIST", NULL);
        if ($1) {
            ast_add_child(stmt_list, $1);
        }
        $$ = stmt_list;
    }
    ;

statement:
    select_stmt { $$ = $1; }
    | insert_stmt { $$ = $1; }
    | update_stmt { $$ = $1; }
    | delete_stmt { $$ = $1; }
    | create_table_stmt { $$ = $1; }
    | alter_table_stmt { $$ = $1; }
    | drop_table_stmt { $$ = $1; }
    | truncate_table_stmt { $$ = $1; }
    | transaction_stmt { $$ = $1; }
    ;

/* ==================== SELECT STATEMENT ==================== */

select_stmt:
    select_expr { $$ = $1; }
    | select_stmt UNION opt_all select_expr {
        ASTNode *union_node = ast_create_node(AST_UNION, "UNION", "UNION");
        ast_add_child(union_node, $1);
        ast_add_child(union_node, $4);
        $$ = union_node;
    }
    | select_stmt EXCEPT select_expr {
        ASTNode *except_node = ast_create_node(AST_UNION, "EXCEPT", "EXCEPT");
        ast_add_child(except_node, $1);
        ast_add_child(except_node, $3);
        $$ = except_node;
    }
    | select_stmt INTERSECT select_expr {
        ASTNode *intersect_node = ast_create_node(AST_UNION, "INTERSECT", "INTERSECT");
        ast_add_child(intersect_node, $1);
        ast_add_child(intersect_node, $3);
        $$ = intersect_node;
    }
    ;

opt_all:
    ALL
    | /* empty */
    ;

select_expr:
    SELECT opt_distinct target_list opt_from opt_where opt_group_by opt_having opt_order_by opt_limit {
        ASTNode *select_node = ast_create_node(AST_SELECT, "SELECT_STMT", NULL);
        ast_add_child(select_node, $3);
        if ($4) ast_add_child(select_node, $4);
        if ($5) ast_add_child(select_node, $5);
        if ($6) ast_add_child(select_node, $6);
        if ($7) ast_add_child(select_node, $7);
        if ($8) ast_add_child(select_node, $8);
        if ($9) ast_add_child(select_node, $9);
        $$ = select_node;
    }
    ;

opt_distinct:
    DISTINCT
    | ALL
    | /* empty */
    ;

target_list:
    target_list COMMA target_item {
        ast_add_child($1, $3);
        $$ = $1;
    }
    | target_item {
        ASTNode *tlist = ast_create_node(AST_TARGET_LIST, "TARGET_LIST", NULL);
        ast_add_child(tlist, $1);
        $$ = tlist;
    }
    ;

target_item:
    STAR {
        $$ = ast_create_node(AST_FIELD, "FIELD", "*");
    }
    | expr opt_alias {
        $$ = $1;
    }
    ;

opt_alias:
    AS IDENTIFIER { free($2); }
    | IDENTIFIER { free($1); }
    | /* empty */
    ;

opt_from:
    FROM from_clause { $$ = $2; }
    | /* empty */ { $$ = NULL; }
    ;

from_clause:
    table_ref_list {
        ASTNode *from_node = ast_create_node(AST_FROM_CLAUSE, "FROM_CLAUSE", NULL);
        ast_add_child(from_node, $1);
        $$ = from_node;
    }
    ;

table_ref_list:
    table_ref_list COMMA table_ref {
        ast_add_child($1, $3);
        $$ = $1;
    }
    | table_ref {
        ASTNode *list = ast_create_node(AST_OTHER, "TABLE_LIST", NULL);
        ast_add_child(list, $1);
        $$ = list;
    }
    ;

table_ref:
    IDENTIFIER opt_alias {
        ASTNode *tref = ast_create_node(AST_TABLE_REF, "TABLE", $1);
        free($1);
        $$ = tref;
    }
    | LPAREN select_stmt RPAREN AS IDENTIFIER {
        ASTNode *subq = ast_create_node(AST_SUBQUERY, "SUBQUERY_TABLE", $5);
        ast_add_child(subq, $2);
        free($5);
        $$ = subq;
    }
    | table_ref join_type table_ref ON expr {
        ASTNode *jnode = ast_create_node(AST_JOIN, "JOIN", $2 ? $2->label : "INNER JOIN");
        ast_add_child(jnode, $1);
        ast_add_child(jnode, $3);
        ast_add_child(jnode, $5);
        if ($2) ast_free($2);
        $$ = jnode;
    }
    ;

join_type:
    JOIN { $$ = ast_create_node(AST_OTHER, "JOIN", NULL); }
    | INNER JOIN { $$ = ast_create_node(AST_OTHER, "INNER JOIN", NULL); }
    | LEFT JOIN { $$ = ast_create_node(AST_OTHER, "LEFT JOIN", NULL); }
    | LEFT OUTER JOIN { $$ = ast_create_node(AST_OTHER, "LEFT OUTER JOIN", NULL); }
    | RIGHT JOIN { $$ = ast_create_node(AST_OTHER, "RIGHT JOIN", NULL); }
    | RIGHT OUTER JOIN { $$ = ast_create_node(AST_OTHER, "RIGHT OUTER JOIN", NULL); }
    | FULL JOIN { $$ = ast_create_node(AST_OTHER, "FULL JOIN", NULL); }
    | FULL OUTER JOIN { $$ = ast_create_node(AST_OTHER, "FULL OUTER JOIN", NULL); }
    | CROSS JOIN { $$ = ast_create_node(AST_OTHER, "CROSS JOIN", NULL); }
    ;

opt_where:
    WHERE expr {
        ASTNode *wnode = ast_create_node(AST_WHERE_CLAUSE, "WHERE_CLAUSE", NULL);
        ast_add_child(wnode, $2);
        $$ = wnode;
    }
    | /* empty */ { $$ = NULL; }
    ;

opt_group_by:
    GROUP BY expr_list {
        ASTNode *gnode = ast_create_node(AST_GROUP_BY, "GROUP_BY", NULL);
        ast_add_child(gnode, $3);
        $$ = gnode;
    }
    | /* empty */ { $$ = NULL; }
    ;

opt_having:
    HAVING expr {
        ASTNode *hnode = ast_create_node(AST_HAVING, "HAVING", NULL);
        ast_add_child(hnode, $2);
        $$ = hnode;
    }
    | /* empty */ { $$ = NULL; }
    ;

opt_order_by:
    ORDER BY order_item_list {
        ASTNode *onode = ast_create_node(AST_ORDER_BY, "ORDER_BY", NULL);
        ast_add_child(onode, $3);
        $$ = onode;
    }
    | /* empty */ { $$ = NULL; }
    ;

order_item_list:
    order_item_list COMMA order_item {
        ast_add_child($1, $3);
        $$ = $1;
    }
    | order_item {
        ASTNode *olist = ast_create_node(AST_OTHER, "ORDER_LIST", NULL);
        ast_add_child(olist, $1);
        $$ = olist;
    }
    ;

order_item:
    expr opt_asc_desc {
        ASTNode *item = ast_create_node(AST_ORDER_ITEM, "ORDER_ITEM", $2 ? $2->value : "ASC");
        ast_add_child(item, $1);
        if ($2) ast_free($2);
        $$ = item;
    }
    ;

opt_asc_desc:
    ASC { $$ = ast_create_node(AST_OTHER, "DIR", "ASC"); }
    | DESC { $$ = ast_create_node(AST_OTHER, "DIR", "DESC"); }
    | /* empty */ { $$ = NULL; }
    ;

opt_limit:
    LIMIT INT_LITERAL {
        ASTNode *lnode = ast_create_node(AST_LIMIT_CLAUSE, "LIMIT", $2);
        free($2);
        $$ = lnode;
    }
    | LIMIT INT_LITERAL OFFSET INT_LITERAL {
        char buf[128];
        snprintf(buf, sizeof(buf), "%s OFFSET %s", $2, $4);
        ASTNode *lnode = ast_create_node(AST_LIMIT_CLAUSE, "LIMIT", buf);
        free($2); free($4);
        $$ = lnode;
    }
    | /* empty */ { $$ = NULL; }
    ;

/* ==================== INSERT STATEMENT ==================== */

insert_stmt:
    INSERT INTO IDENTIFIER VALUES insert_values_list {
        ASTNode *inode = ast_create_node(AST_INSERT, "INSERT_STMT", $3);
        ast_add_child(inode, $5);
        free($3);
        $$ = inode;
    }
    | INSERT INTO IDENTIFIER LPAREN expr_list RPAREN VALUES insert_values_list {
        ASTNode *inode = ast_create_node(AST_INSERT, "INSERT_STMT", $3);
        ast_add_child(inode, $5);
        ast_add_child(inode, $8);
        free($3);
        $$ = inode;
    }
    | INSERT INTO IDENTIFIER select_stmt {
        ASTNode *inode = ast_create_node(AST_INSERT, "INSERT_SELECT_STMT", $3);
        ast_add_child(inode, $4);
        free($3);
        $$ = inode;
    }
    ;

insert_values_list:
    tuple_list { $$ = $1; }
    ;

tuple_list:
    tuple_list COMMA tuple {
        ast_add_child($1, $3);
        $$ = $1;
    }
    | tuple {
        ASTNode *vlist = ast_create_node(AST_VALUES_LIST, "VALUES_LIST", NULL);
        ast_add_child(vlist, $1);
        $$ = vlist;
    }
    ;

tuple:
    LPAREN expr_list RPAREN {
        ASTNode *t = ast_create_node(AST_TUPLE, "TUPLE", NULL);
        ast_add_child(t, $2);
        $$ = t;
    }
    ;

/* ==================== UPDATE STATEMENT ==================== */

update_stmt:
    UPDATE IDENTIFIER SET assignment_list opt_where {
        ASTNode *unode = ast_create_node(AST_UPDATE, "UPDATE_STMT", $2);
        ast_add_child(unode, $4);
        if ($5) ast_add_child(unode, $5);
        free($2);
        $$ = unode;
    }
    ;

assignment_list:
    assignment_list COMMA assignment {
        ast_add_child($1, $3);
        $$ = $1;
    }
    | assignment {
        ASTNode *alist = ast_create_node(AST_ASSIGN_LIST, "ASSIGNMENT_LIST", NULL);
        ast_add_child(alist, $1);
        $$ = alist;
    }
    ;

assignment:
    IDENTIFIER EQ expr {
        ASTNode *assign = ast_create_node(AST_ASSIGNMENT, "ASSIGN", $1);
        ast_add_child(assign, $3);
        free($1);
        $$ = assign;
    }
    ;

/* ==================== DELETE STATEMENT ==================== */

delete_stmt:
    DELETE FROM IDENTIFIER opt_where {
        ASTNode *dnode = ast_create_node(AST_DELETE, "DELETE_STMT", $3);
        if ($4) ast_add_child(dnode, $4);
        free($3);
        $$ = dnode;
    }
    ;

/* ==================== CREATE TABLE STATEMENT ==================== */

create_table_stmt:
    CREATE TABLE IDENTIFIER LPAREN column_def_list RPAREN {
        ASTNode *cnode = ast_create_node(AST_CREATE_TABLE, "CREATE_TABLE_STMT", $3);
        ast_add_child(cnode, $5);
        free($3);
        $$ = cnode;
    }
    | CREATE TABLE IF_KW NOT_KW EXISTS IDENTIFIER LPAREN column_def_list RPAREN {
        ASTNode *cnode = ast_create_node(AST_CREATE_TABLE, "CREATE_TABLE_IF_NOT_EXISTS", $6);
        ast_add_child(cnode, $8);
        free($6);
        $$ = cnode;
    }
    ;

column_def_list:
    column_def_list COMMA column_def {
        ast_add_child($1, $3);
        $$ = $1;
    }
    | column_def {
        ASTNode *cdlist = ast_create_node(AST_COL_DEF_LIST, "COLUMN_DEF_LIST", NULL);
        ast_add_child(cdlist, $1);
        $$ = cdlist;
    }
    ;

column_def:
    IDENTIFIER data_type opt_column_constraints {
        ASTNode *cdef = ast_create_node(AST_COL_DEF, "COLUMN", $1);
        ast_add_child(cdef, $2);
        if ($3) ast_add_child(cdef, $3);
        free($1);
        $$ = cdef;
    }
    | PRIMARY KEY LPAREN IDENTIFIER RPAREN {
        ASTNode *pk = ast_create_node(AST_CONSTRAINT, "PRIMARY_KEY", $4);
        free($4);
        $$ = pk;
    }
    | FOREIGN KEY LPAREN IDENTIFIER RPAREN REFERENCES IDENTIFIER LPAREN IDENTIFIER RPAREN {
        char buf[256];
        snprintf(buf, sizeof(buf), "(%s) REFERENCES %s(%s)", $4, $7, $9);
        ASTNode *fk = ast_create_node(AST_CONSTRAINT, "FOREIGN_KEY", buf);
        free($4); free($7); free($9);
        $$ = fk;
    }
    ;

data_type:
    INT_TYPE { $$ = ast_create_node(AST_OTHER, "TYPE", "INT"); }
    | VARCHAR_TYPE LPAREN INT_LITERAL RPAREN {
        char buf[64];
        snprintf(buf, sizeof(buf), "VARCHAR(%s)", $3);
        free($3);
        $$ = ast_create_node(AST_OTHER, "TYPE", buf);
    }
    | CHAR_TYPE LPAREN INT_LITERAL RPAREN {
        char buf[64];
        snprintf(buf, sizeof(buf), "CHAR(%s)", $3);
        free($3);
        $$ = ast_create_node(AST_OTHER, "TYPE", buf);
    }
    | TEXT_TYPE { $$ = ast_create_node(AST_OTHER, "TYPE", "TEXT"); }
    | FLOAT_TYPE { $$ = ast_create_node(AST_OTHER, "TYPE", "FLOAT"); }
    | DOUBLE_TYPE { $$ = ast_create_node(AST_OTHER, "TYPE", "DOUBLE"); }
    | DECIMAL_TYPE LPAREN INT_LITERAL COMMA INT_LITERAL RPAREN {
        char buf[64];
        snprintf(buf, sizeof(buf), "DECIMAL(%s,%s)", $3, $5);
        free($3); free($5);
        $$ = ast_create_node(AST_OTHER, "TYPE", buf);
    }
    | BOOLEAN_TYPE { $$ = ast_create_node(AST_OTHER, "TYPE", "BOOLEAN"); }
    | DATE_TYPE { $$ = ast_create_node(AST_OTHER, "TYPE", "DATE"); }
    | TIMESTAMP_TYPE { $$ = ast_create_node(AST_OTHER, "TYPE", "TIMESTAMP"); }
    ;

opt_column_constraints:
    opt_column_constraints column_constraint {
        if ($1) {
            ast_add_child($1, $2);
            $$ = $1;
        } else {
            ASTNode *clist = ast_create_node(AST_OTHER, "CONSTRAINTS", NULL);
            ast_add_child(clist, $2);
            $$ = clist;
        }
    }
    | /* empty */ { $$ = NULL; }
    ;

column_constraint:
    PRIMARY KEY { $$ = ast_create_node(AST_CONSTRAINT, "CONSTRAINT", "PRIMARY KEY"); }
    | NOT_KW NULL_KW { $$ = ast_create_node(AST_CONSTRAINT, "CONSTRAINT", "NOT NULL"); }
    | UNIQUE { $$ = ast_create_node(AST_CONSTRAINT, "CONSTRAINT", "UNIQUE"); }
    | AUTO_INCREMENT { $$ = ast_create_node(AST_CONSTRAINT, "CONSTRAINT", "AUTO_INCREMENT"); }
    | DEFAULT expr {
        ASTNode *dnode = ast_create_node(AST_CONSTRAINT, "DEFAULT", NULL);
        ast_add_child(dnode, $2);
        $$ = dnode;
    }
    ;

/* ==================== ALTER / DROP / TRUNCATE / TCL ==================== */

alter_table_stmt:
    ALTER TABLE IDENTIFIER ADD COLUMN column_def {
        ASTNode *anode = ast_create_node(AST_ALTER_TABLE, "ALTER_TABLE_ADD", $3);
        ast_add_child(anode, $6);
        free($3);
        $$ = anode;
    }
    | ALTER TABLE IDENTIFIER DROP COLUMN IDENTIFIER {
        ASTNode *anode = ast_create_node(AST_ALTER_TABLE, "ALTER_TABLE_DROP", $3);
        ast_add_child(anode, ast_create_node(AST_IDENTIFIER, "COLUMN", $6));
        free($3); free($6);
        $$ = anode;
    }
    ;

drop_table_stmt:
    DROP TABLE IDENTIFIER {
        ASTNode *dnode = ast_create_node(AST_DROP_TABLE, "DROP_TABLE", $3);
        free($3);
        $$ = dnode;
    }
    | DROP TABLE IF_KW EXISTS IDENTIFIER {
        ASTNode *dnode = ast_create_node(AST_DROP_TABLE, "DROP_TABLE_IF_EXISTS", $5);
        free($5);
        $$ = dnode;
    }
    ;

truncate_table_stmt:
    TRUNCATE TABLE IDENTIFIER {
        ASTNode *tnode = ast_create_node(AST_TRUNCATE_TABLE, "TRUNCATE_TABLE", $3);
        free($3);
        $$ = tnode;
    }
    ;

transaction_stmt:
    BEGIN_KW opt_transaction { $$ = ast_create_node(AST_TRANSACTION, "TRANSACTION", "BEGIN"); }
    | COMMIT { $$ = ast_create_node(AST_TRANSACTION, "TRANSACTION", "COMMIT"); }
    | ROLLBACK { $$ = ast_create_node(AST_TRANSACTION, "TRANSACTION", "ROLLBACK"); }
    | SAVEPOINT IDENTIFIER {
        ASTNode *snode = ast_create_node(AST_TRANSACTION, "SAVEPOINT", $2);
        free($2);
        $$ = snode;
    }
    ;

opt_transaction:
    TRANSACTION
    | /* empty */
    ;

/* ==================== EXPRESSION GRAMMAR ==================== */

expr_list:
    expr_list COMMA expr {
        ast_add_child($1, $3);
        $$ = $1;
    }
    | expr {
        ASTNode *elist = ast_create_node(AST_OTHER, "EXPR_LIST", NULL);
        ast_add_child(elist, $1);
        $$ = elist;
    }
    ;

expr:
    expr OR expr {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "OR");
        ast_add_child(bnode, $1);
        ast_add_child(bnode, $3);
        $$ = bnode;
    }
    | expr AND expr {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "AND");
        ast_add_child(bnode, $1);
        ast_add_child(bnode, $3);
        $$ = bnode;
    }
    | NOT_KW expr {
        ASTNode *unode = ast_create_node(AST_UNARY_EXPR, "OPERATOR", "NOT");
        ast_add_child(unode, $2);
        $$ = unode;
    }
    | expr EQ expr {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "=");
        ast_add_child(bnode, $1);
        ast_add_child(bnode, $3);
        $$ = bnode;
    }
    | expr NE expr {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "!=");
        ast_add_child(bnode, $1);
        ast_add_child(bnode, $3);
        $$ = bnode;
    }
    | expr LT expr {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "<");
        ast_add_child(bnode, $1);
        ast_add_child(bnode, $3);
        $$ = bnode;
    }
    | expr GT expr {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", ">");
        ast_add_child(bnode, $1);
        ast_add_child(bnode, $3);
        $$ = bnode;
    }
    | expr LE expr {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "<=");
        ast_add_child(bnode, $1);
        ast_add_child(bnode, $3);
        $$ = bnode;
    }
    | expr GE expr {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", ">=");
        ast_add_child(bnode, $1);
        ast_add_child(bnode, $3);
        $$ = bnode;
    }
    | expr LIKE expr {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "LIKE");
        ast_add_child(bnode, $1);
        ast_add_child(bnode, $3);
        $$ = bnode;
    }
    | expr IN LPAREN expr_list RPAREN {
        ASTNode *inode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "IN");
        ast_add_child(inode, $1);
        ast_add_child(inode, $4);
        $$ = inode;
    }
    | expr IN LPAREN select_stmt RPAREN {
        ASTNode *inode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "IN_SUBQUERY");
        ast_add_child(inode, $1);
        ast_add_child(inode, $4);
        $$ = inode;
    }
    | expr BETWEEN expr AND expr {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "BETWEEN");
        ast_add_child(bnode, $1);
        ast_add_child(bnode, $3);
        ast_add_child(bnode, $5);
        $$ = bnode;
    }
    | expr IS NULL_KW {
        ASTNode *unode = ast_create_node(AST_UNARY_EXPR, "OPERATOR", "IS NULL");
        ast_add_child(unode, $1);
        $$ = unode;
    }
    | expr IS NOT_KW NULL_KW {
        ASTNode *unode = ast_create_node(AST_UNARY_EXPR, "OPERATOR", "IS NOT NULL");
        ast_add_child(unode, $1);
        $$ = unode;
    }
    | expr PLUS expr {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "+");
        ast_add_child(bnode, $1);
        ast_add_child(bnode, $3);
        $$ = bnode;
    }
    | expr MINUS expr {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "-");
        ast_add_child(bnode, $1);
        ast_add_child(bnode, $3);
        $$ = bnode;
    }
    | expr STAR expr {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "*");
        ast_add_child(bnode, $1);
        ast_add_child(bnode, $3);
        $$ = bnode;
    }
    | expr SLASH expr {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "/");
        ast_add_child(bnode, $1);
        ast_add_child(bnode, $3);
        $$ = bnode;
    }
    | MINUS expr %prec UNARY {
        ASTNode *unode = ast_create_node(AST_UNARY_EXPR, "OPERATOR", "NEGATE");
        ast_add_child(unode, $2);
        $$ = unode;
    }
    | LPAREN expr RPAREN { $$ = $2; }
    | LPAREN select_stmt RPAREN {
        ASTNode *subq = ast_create_node(AST_SUBQUERY, "SUBQUERY", NULL);
        ast_add_child(subq, $2);
        $$ = subq;
    }
    | func_call { $$ = $1; }
    | case_expr { $$ = $1; }
    | IDENTIFIER {
        ASTNode *id = ast_create_node(AST_IDENTIFIER, "IDENTIFIER", $1);
        free($1);
        $$ = id;
    }
    | IDENTIFIER DOT IDENTIFIER {
        char buf[256];
        snprintf(buf, sizeof(buf), "%s.%s", $1, $3);
        free($1); free($3);
        $$ = ast_create_node(AST_IDENTIFIER, "COLUMN_REF", buf);
    }
    | STRING_LITERAL {
        ASTNode *lit = ast_create_node(AST_LITERAL, "STRING", $1);
        free($1);
        $$ = lit;
    }
    | INT_LITERAL {
        ASTNode *lit = ast_create_node(AST_LITERAL, "INT", $1);
        free($1);
        $$ = lit;
    }
    | FLOAT_LITERAL {
        ASTNode *lit = ast_create_node(AST_LITERAL, "FLOAT", $1);
        free($1);
        $$ = lit;
    }
    | NULL_KW {
        $$ = ast_create_node(AST_LITERAL, "NULL", "NULL");
    }
    ;

func_call:
    aggregate_func LPAREN opt_distinct expr RPAREN {
        ASTNode *fnode = ast_create_node(AST_FUNC_CALL, "AGGREGATE_FUNC", $1->label);
        ast_add_child(fnode, $4);
        ast_free($1);
        $$ = fnode;
    }
    | aggregate_func LPAREN STAR RPAREN {
        ASTNode *fnode = ast_create_node(AST_FUNC_CALL, "AGGREGATE_FUNC", $1->label);
        ast_add_child(fnode, ast_create_node(AST_FIELD, "FIELD", "*"));
        ast_free($1);
        $$ = fnode;
    }
    | IDENTIFIER LPAREN opt_expr_list RPAREN {
        ASTNode *fnode = ast_create_node(AST_FUNC_CALL, "FUNC_CALL", $1);
        if ($3) ast_add_child(fnode, $3);
        free($1);
        $$ = fnode;
    }
    ;

opt_expr_list:
    expr_list { $$ = $1; }
    | /* empty */ { $$ = NULL; }
    ;

aggregate_func:
    COUNT { $$ = ast_create_node(AST_OTHER, "COUNT", NULL); }
    | SUM { $$ = ast_create_node(AST_OTHER, "SUM", NULL); }
    | AVG { $$ = ast_create_node(AST_OTHER, "AVG", NULL); }
    | MIN { $$ = ast_create_node(AST_OTHER, "MIN", NULL); }
    | MAX { $$ = ast_create_node(AST_OTHER, "MAX", NULL); }
    ;

case_expr:
    CASE when_then_list opt_else END {
        ASTNode *cnode = ast_create_node(AST_CASE_EXPR, "CASE_EXPR", NULL);
        ast_add_child(cnode, $2);
        if ($3) ast_add_child(cnode, $3);
        $$ = cnode;
    }
    ;

when_then_list:
    when_then_list when_then_clause {
        ast_add_child($1, $2);
        $$ = $1;
    }
    | when_then_clause {
        ASTNode *wtlist = ast_create_node(AST_OTHER, "WHEN_THEN_LIST", NULL);
        ast_add_child(wtlist, $1);
        $$ = wtlist;
    }
    ;

when_then_clause:
    WHEN expr THEN expr {
        ASTNode *wt = ast_create_node(AST_WHEN_THEN, "WHEN_THEN", NULL);
        ast_add_child(wt, $2);
        ast_add_child(wt, $4);
        $$ = wt;
    }
    ;

opt_else:
    ELSE expr {
        ASTNode *enode = ast_create_node(AST_OTHER, "ELSE", NULL);
        ast_add_child(enode, $2);
        $$ = enode;
    }
    | /* empty */ { $$ = NULL; }
    ;

%%

void yyerror(const char *s) {
    g_syntax_error = 1;
    g_error_line = yylineno;
    g_error_column = yycolumn;
    snprintf(g_last_error, sizeof(g_last_error), "%s near '%s'", s, yytext ? yytext : "");
}
