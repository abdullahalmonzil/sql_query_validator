#ifndef AST_H
#define AST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    AST_ROOT,
    AST_STMT_LIST,
    AST_SELECT,
    AST_INSERT,
    AST_UPDATE,
    AST_DELETE,
    AST_CREATE_TABLE,
    AST_ALTER_TABLE,
    AST_DROP_TABLE,
    AST_TRUNCATE_TABLE,
    AST_CREATE_INDEX,
    AST_DROP_INDEX,
    AST_TRANSACTION,
    
    AST_TARGET_LIST,
    AST_FIELD,
    AST_FROM_CLAUSE,
    AST_TABLE_REF,
    AST_JOIN,
    AST_WHERE_CLAUSE,
    AST_GROUP_BY,
    AST_HAVING,
    AST_ORDER_BY,
    AST_ORDER_ITEM,
    AST_LIMIT_CLAUSE,
    AST_UNION,
    
    AST_VALUES_LIST,
    AST_TUPLE,
    AST_ASSIGN_LIST,
    AST_ASSIGNMENT,
    AST_COL_DEF_LIST,
    AST_COL_DEF,
    AST_CONSTRAINT,
    
    AST_BINARY_EXPR,
    AST_UNARY_EXPR,
    AST_FUNC_CALL,
    AST_IDENTIFIER,
    AST_LITERAL,
    AST_SUBQUERY,
    AST_CASE_EXPR,
    AST_WHEN_THEN,
    AST_OTHER
} ASTNodeType;

typedef struct ASTNode {
    ASTNodeType type;
    char *label;
    char *value;
    struct ASTNode **children;
    int num_children;
    int capacity;
} ASTNode;

/* Function declarations */
ASTNode *ast_create_node(ASTNodeType type, const char *label, const char *value);
void ast_add_child(ASTNode *parent, ASTNode *child);
void ast_print(ASTNode *node, int indent_level);
void ast_free(ASTNode *node);

#endif /* AST_H */
