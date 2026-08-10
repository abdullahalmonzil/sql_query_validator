%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
#include "sql_parser.tab.h"

int yycolumn = 1;
extern int g_show_tokens;

#define YY_USER_ACTION \
    if (g_show_tokens) { \
        printf("[TOKEN] Lexeme: '%-15s' Line: %d Col: %d\n", \
               yytext, yylineno, yycolumn); \
    } \
    yycolumn += yyleng;

static char* clean_string(const char *str) {
    size_t len = strlen(str);
    if (len >= 2 && ((str[0] == '\'' && str[len-1] == '\'') || (str[0] == '"' && str[len-1] == '"'))) {
        char *cleaned = (char *)malloc(len - 1);
        strncpy(cleaned, str + 1, len - 2);
        cleaned[len - 2] = '\0';
        return cleaned;
    }
    return strdup(str);
}

%}

%option noyywrap
%option yylineno
%option case-insensitive

%%

[ \t\r\xc2\xa0]+          { /* Skip whitespace including non-breaking spaces */ }
\n                      { yycolumn = 1; }

"--".*                  { /* Skip single-line comments */ }

\/\*([^*]|\*+[^/*])*\*+\/ { 
                            for (int i = 0; yytext[i] != '\0'; i++) {
                                if (yytext[i] == '\n') {
                                    yylineno++;
                                    yycolumn = 1;
                                }
                            }
                          }

    /* Keywords */
"SELECT"                { return SELECT; }
"FROM"                  { return FROM; }
"WHERE"                 { return WHERE; }
"GROUP"                 { return GROUP; }
"BY"                    { return BY; }
"HAVING"                { return HAVING; }
"ORDER"                 { return ORDER; }
"ASC"                   { return ASC; }
"DESC"                  { return DESC; }
"LIMIT"                 { return LIMIT; }
"OFFSET"                { return OFFSET; }
"AS"                    { return AS; }
"DISTINCT"              { return DISTINCT; }
"ALL"                   { return ALL; }

"INSERT"                { return INSERT; }
"INTO"                  { return INTO; }
"VALUES"|"VALUE"        { return VALUES; }
"UPDATE"                { return UPDATE; }
"SET"                   { return SET; }
"DELETE"                { return DELETE; }

"CREATE"                { return CREATE; }
"TABLE"                 { return TABLE; }
"ALTER"                 { return ALTER; }
"ADD"                   { return ADD; }
"MODIFY"                { return MODIFY; }
"DROP"                  { return DROP; }
"TRUNCATE"              { return TRUNCATE; }
"RENAME"                { return RENAME; }
"TO"                    { return TO; }
"COLUMN"                { return COLUMN; }
"INDEX"                 { return INDEX; }
"IF"                    { return IF_KW; }

"PRIMARY"               { return PRIMARY; }
"KEY"                   { return KEY; }
"FOREIGN"               { return FOREIGN; }
"REFERENCES"            { return REFERENCES; }
"NOT"                   { return NOT_KW; }
"NULL"                  { return NULL_KW; }
"UNIQUE"                { return UNIQUE; }
"DEFAULT"               { return DEFAULT; }
"CHECK"                 { return CHECK; }
"CONSTRAINT"            { return CONSTRAINT; }
"AUTO_INCREMENT"        { return AUTO_INCREMENT; }

"INT"|"INTEGER"         { return INT_TYPE; }
"BIGINT"                { return BIGINT_TYPE; }
"SMALLINT"              { return SMALLINT_TYPE; }
"TINYINT"               { return TINYINT_TYPE; }
"NUMBER"                { return NUMBER_TYPE; }
"NUMERIC"               { return NUMERIC_TYPE; }
"VARCHAR2"              { return VARCHAR2_TYPE; }
"VARCHAR"               { return VARCHAR_TYPE; }
"CHAR"                  { return CHAR_TYPE; }
"TEXT"                  { return TEXT_TYPE; }
"FLOAT"                 { return FLOAT_TYPE; }
"DOUBLE"                { return DOUBLE_TYPE; }
"REAL"                  { return REAL_TYPE; }
"DECIMAL"               { return DECIMAL_TYPE; }
"BOOL"|"BOOLEAN"        { return BOOLEAN_TYPE; }
"DATE"                  { return DATE_TYPE; }
"DATETIME"              { return DATETIME_TYPE; }
"TIMESTAMP"             { return TIMESTAMP_TYPE; }
"BLOB"                  { return BLOB_TYPE; }
"CLOB"                  { return CLOB_TYPE; }

"JOIN"                  { return JOIN; }
"INNER"                 { return INNER; }
"LEFT"                  { return LEFT; }
"RIGHT"                 { return RIGHT; }
"FULL"                  { return FULL; }
"OUTER"                 { return OUTER; }
"CROSS"                 { return CROSS; }
"ON"                    { return ON; }
"USING"                 { return USING; }

"UNION"                 { return UNION; }
"INTERSECT"             { return INTERSECT; }
"EXCEPT"                { return EXCEPT; }

"AND"                   { return AND; }
"OR"                    { return OR; }
"LIKE"                  { return LIKE; }
"IN"                    { return IN; }
"BETWEEN"               { return BETWEEN; }
"IS"                    { return IS; }
"EXISTS"                { return EXISTS; }
"CASE"                  { return CASE; }
"WHEN"                  { return WHEN; }
"THEN"                  { return THEN; }
"ELSE"                  { return ELSE; }
"END"                   { return END; }

"BEGIN"                 { return BEGIN_KW; }
"TRANSACTION"           { return TRANSACTION; }
"COMMIT"                { return COMMIT; }
"ROLLBACK"              { return ROLLBACK; }
"SAVEPOINT"             { return SAVEPOINT; }

"COUNT"                 { return COUNT; }
"SUM"                   { return SUM; }
"AVG"                   { return AVG; }
"MIN"                   { return MIN; }
"MAX"                   { return MAX; }

    /* Operators */
"="                     { return EQ; }
"!="|"<>"               { return NE; }
"<="                    { return LE; }
">="                    { return GE; }
"<"                     { return LT; }
">"                     { return GT; }
"+"                     { return PLUS; }
"-"                     { return MINUS; }
"*"                     { return STAR; }
"/"                     { return SLASH; }
"%"                     { return MOD; }
"||"                    { return CONCAT; }

    /* Delimiters */
","                     { return COMMA; }
";"                     { return SEMICOLON; }
"("                     { return LPAREN; }
")"                     { return RPAREN; }
"."                     { return DOT; }

    /* Identifiers */
[a-zA-Z_][a-zA-Z0-9_]*  {
    yylval.str = strdup(yytext);
    return IDENTIFIER;
}

    /* Numeric Literals */
[0-9]+                  {
    yylval.str = strdup(yytext);
    return INT_LITERAL;
}

[0-9]+\.[0-9]+          {
    yylval.str = strdup(yytext);
    return FLOAT_LITERAL;
}

    /* String Literals */
'([^'\\]|\\.)*'         {
    yylval.str = clean_string(yytext);
    return STRING_LITERAL;
}

\"([^"\\]|\\.)*\"       {
    yylval.str = clean_string(yytext);
    return STRING_LITERAL;
}

.                       {
    printf("[LEX ERROR] Line %d, Column %d: Unrecognized character '%s'\n", yylineno, yycolumn - (int)yyleng, yytext);
    return yytext[0];
}

%%
