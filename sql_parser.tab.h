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
    MODIFY = 282,                  /* MODIFY  */
    DROP = 283,                    /* DROP  */
    TRUNCATE = 284,                /* TRUNCATE  */
    RENAME = 285,                  /* RENAME  */
    TO = 286,                      /* TO  */
    COLUMN = 287,                  /* COLUMN  */
    INDEX = 288,                   /* INDEX  */
    PRIMARY = 289,                 /* PRIMARY  */
    KEY = 290,                     /* KEY  */
    FOREIGN = 291,                 /* FOREIGN  */
    REFERENCES = 292,              /* REFERENCES  */
    NULL_KW = 293,                 /* NULL_KW  */
    UNIQUE = 294,                  /* UNIQUE  */
    DEFAULT = 295,                 /* DEFAULT  */
    CHECK = 296,                   /* CHECK  */
    CONSTRAINT = 297,              /* CONSTRAINT  */
    AUTO_INCREMENT = 298,          /* AUTO_INCREMENT  */
    INT_TYPE = 299,                /* INT_TYPE  */
    BIGINT_TYPE = 300,             /* BIGINT_TYPE  */
    SMALLINT_TYPE = 301,           /* SMALLINT_TYPE  */
    TINYINT_TYPE = 302,            /* TINYINT_TYPE  */
    NUMBER_TYPE = 303,             /* NUMBER_TYPE  */
    NUMERIC_TYPE = 304,            /* NUMERIC_TYPE  */
    VARCHAR_TYPE = 305,            /* VARCHAR_TYPE  */
    VARCHAR2_TYPE = 306,           /* VARCHAR2_TYPE  */
    CHAR_TYPE = 307,               /* CHAR_TYPE  */
    TEXT_TYPE = 308,               /* TEXT_TYPE  */
    FLOAT_TYPE = 309,              /* FLOAT_TYPE  */
    DOUBLE_TYPE = 310,             /* DOUBLE_TYPE  */
    REAL_TYPE = 311,               /* REAL_TYPE  */
    DECIMAL_TYPE = 312,            /* DECIMAL_TYPE  */
    BOOLEAN_TYPE = 313,            /* BOOLEAN_TYPE  */
    DATE_TYPE = 314,               /* DATE_TYPE  */
    DATETIME_TYPE = 315,           /* DATETIME_TYPE  */
    TIMESTAMP_TYPE = 316,          /* TIMESTAMP_TYPE  */
    BLOB_TYPE = 317,               /* BLOB_TYPE  */
    CLOB_TYPE = 318,               /* CLOB_TYPE  */
    JOIN = 319,                    /* JOIN  */
    INNER = 320,                   /* INNER  */
    LEFT = 321,                    /* LEFT  */
    RIGHT = 322,                   /* RIGHT  */
    FULL = 323,                    /* FULL  */
    OUTER = 324,                   /* OUTER  */
    CROSS = 325,                   /* CROSS  */
    ON = 326,                      /* ON  */
    USING = 327,                   /* USING  */
    UNION = 328,                   /* UNION  */
    INTERSECT = 329,               /* INTERSECT  */
    EXCEPT = 330,                  /* EXCEPT  */
    AND = 331,                     /* AND  */
    OR = 332,                      /* OR  */
    NOT_KW = 333,                  /* NOT_KW  */
    LIKE = 334,                    /* LIKE  */
    IN = 335,                      /* IN  */
    BETWEEN = 336,                 /* BETWEEN  */
    IS = 337,                      /* IS  */
    EXISTS = 338,                  /* EXISTS  */
    CASE = 339,                    /* CASE  */
    WHEN = 340,                    /* WHEN  */
    THEN = 341,                    /* THEN  */
    ELSE = 342,                    /* ELSE  */
    END = 343,                     /* END  */
    IF_KW = 344,                   /* IF_KW  */
    BEGIN_KW = 345,                /* BEGIN_KW  */
    TRANSACTION = 346,             /* TRANSACTION  */
    COMMIT = 347,                  /* COMMIT  */
    ROLLBACK = 348,                /* ROLLBACK  */
    SAVEPOINT = 349,               /* SAVEPOINT  */
    COUNT = 350,                   /* COUNT  */
    SUM = 351,                     /* SUM  */
    AVG = 352,                     /* AVG  */
    MIN = 353,                     /* MIN  */
    MAX = 354,                     /* MAX  */
    IDENTIFIER = 355,              /* IDENTIFIER  */
    STRING_LITERAL = 356,          /* STRING_LITERAL  */
    INT_LITERAL = 357,             /* INT_LITERAL  */
    FLOAT_LITERAL = 358,           /* FLOAT_LITERAL  */
    EQ = 359,                      /* EQ  */
    NE = 360,                      /* NE  */
    LT = 361,                      /* LT  */
    GT = 362,                      /* GT  */
    LE = 363,                      /* LE  */
    GE = 364,                      /* GE  */
    PLUS = 365,                    /* PLUS  */
    MINUS = 366,                   /* MINUS  */
    STAR = 367,                    /* STAR  */
    SLASH = 368,                   /* SLASH  */
    MOD = 369,                     /* MOD  */
    CONCAT = 370,                  /* CONCAT  */
    COMMA = 371,                   /* COMMA  */
    SEMICOLON = 372,               /* SEMICOLON  */
    LPAREN = 373,                  /* LPAREN  */
    RPAREN = 374,                  /* RPAREN  */
    DOT = 375,                     /* DOT  */
    UNARY = 376                    /* UNARY  */
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

#line 196 "sql_parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SQL_PARSER_TAB_H_INCLUDED  */
