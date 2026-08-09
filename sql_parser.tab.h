/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SQL_PARSER_TAB_H_INCLUDED
# define YY_YY_SQL_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 23 "sql_parser.y"

    #include "ast.h"

#line 53 "sql_parser.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SELECT = 258,                  /* SELECT  */
    FROM = 259,                    /* FROM  */
    WHERE = 260,                   /* WHERE  */
    GROUP = 261,                   /* GROUP  */
    BY = 262,                      /* BY  */
    HAVING = 263,                  /* HAVING  */
    ORDER = 264,                   /* ORDER  */
    ASC = 265,                     /* ASC  */
    DESC = 266,                    /* DESC  */
    LIMIT = 267,                   /* LIMIT  */
    OFFSET = 268,                  /* OFFSET  */
    AS = 269,                      /* AS  */
    DISTINCT = 270,                /* DISTINCT  */
    ALL = 271,                     /* ALL  */
    INSERT = 272,                  /* INSERT  */
    INTO = 273,                    /* INTO  */
    VALUES = 274,                  /* VALUES  */
    UPDATE = 275,                  /* UPDATE  */
    SET = 276,                     /* SET  */
    DELETE = 277,                  /* DELETE  */
    CREATE = 278,                  /* CREATE  */
    TABLE = 279,                   /* TABLE  */
    ALTER = 280,                   /* ALTER  */
    ADD = 281,                     /* ADD  */
    DROP = 282,                    /* DROP  */
    TRUNCATE = 283,                /* TRUNCATE  */
    RENAME = 284,                  /* RENAME  */
    TO = 285,                      /* TO  */
    COLUMN = 286,                  /* COLUMN  */
    INDEX = 287,                   /* INDEX  */
    PRIMARY = 288,                 /* PRIMARY  */
    KEY = 289,                     /* KEY  */
    FOREIGN = 290,                 /* FOREIGN  */
    REFERENCES = 291,              /* REFERENCES  */
    NULL_KW = 292,                 /* NULL_KW  */
    UNIQUE = 293,                  /* UNIQUE  */
    DEFAULT = 294,                 /* DEFAULT  */
    CHECK = 295,                   /* CHECK  */
    CONSTRAINT = 296,              /* CONSTRAINT  */
    AUTO_INCREMENT = 297,          /* AUTO_INCREMENT  */
    INT_TYPE = 298,                /* INT_TYPE  */
    VARCHAR_TYPE = 299,            /* VARCHAR_TYPE  */
    CHAR_TYPE = 300,               /* CHAR_TYPE  */
    TEXT_TYPE = 301,               /* TEXT_TYPE  */
    FLOAT_TYPE = 302,              /* FLOAT_TYPE  */
    DOUBLE_TYPE = 303,             /* DOUBLE_TYPE  */
    DECIMAL_TYPE = 304,            /* DECIMAL_TYPE  */
    BOOLEAN_TYPE = 305,            /* BOOLEAN_TYPE  */
    DATE_TYPE = 306,               /* DATE_TYPE  */
    TIMESTAMP_TYPE = 307,          /* TIMESTAMP_TYPE  */
    JOIN = 308,                    /* JOIN  */
    INNER = 309,                   /* INNER  */
    LEFT = 310,                    /* LEFT  */
    RIGHT = 311,                   /* RIGHT  */
    FULL = 312,                    /* FULL  */
    OUTER = 313,                   /* OUTER  */
    CROSS = 314,                   /* CROSS  */
    ON = 315,                      /* ON  */
    USING = 316,                   /* USING  */
    UNION = 317,                   /* UNION  */
    INTERSECT = 318,               /* INTERSECT  */
    EXCEPT = 319,                  /* EXCEPT  */
    AND = 320,                     /* AND  */
    OR = 321,                      /* OR  */
    NOT_KW = 322,                  /* NOT_KW  */
    LIKE = 323,                    /* LIKE  */
    IN = 324,                      /* IN  */
    BETWEEN = 325,                 /* BETWEEN  */
    IS = 326,                      /* IS  */
    EXISTS = 327,                  /* EXISTS  */
    CASE = 328,                    /* CASE  */
    WHEN = 329,                    /* WHEN  */
    THEN = 330,                    /* THEN  */
    ELSE = 331,                    /* ELSE  */
    END = 332,                     /* END  */
    IF_KW = 333,                   /* IF_KW  */
    BEGIN_KW = 334,                /* BEGIN_KW  */
    TRANSACTION = 335,             /* TRANSACTION  */
    COMMIT = 336,                  /* COMMIT  */
    ROLLBACK = 337,                /* ROLLBACK  */
    SAVEPOINT = 338,               /* SAVEPOINT  */
    COUNT = 339,                   /* COUNT  */
    SUM = 340,                     /* SUM  */
    AVG = 341,                     /* AVG  */
    MIN = 342,                     /* MIN  */
    MAX = 343,                     /* MAX  */
    IDENTIFIER = 344,              /* IDENTIFIER  */
    STRING_LITERAL = 345,          /* STRING_LITERAL  */
    INT_LITERAL = 346,             /* INT_LITERAL  */
    FLOAT_LITERAL = 347,           /* FLOAT_LITERAL  */
    EQ = 348,                      /* EQ  */
    NE = 349,                      /* NE  */
    LT = 350,                      /* LT  */
    GT = 351,                      /* GT  */
    LE = 352,                      /* LE  */
    GE = 353,                      /* GE  */
    PLUS = 354,                    /* PLUS  */
    MINUS = 355,                   /* MINUS  */
    STAR = 356,                    /* STAR  */
    SLASH = 357,                   /* SLASH  */
    MOD = 358,                     /* MOD  */
    CONCAT = 359,                  /* CONCAT  */
    COMMA = 360,                   /* COMMA  */
    SEMICOLON = 361,               /* SEMICOLON  */
    LPAREN = 362,                  /* LPAREN  */
    RPAREN = 363,                  /* RPAREN  */
    DOT = 364,                     /* DOT  */
    UNARY = 365                    /* UNARY  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "sql_parser.y"

    char *str;
    ASTNode *node;

#line 185 "sql_parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SQL_PARSER_TAB_H_INCLUDED  */
