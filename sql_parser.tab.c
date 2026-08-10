/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sql_parser.y"

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


#line 93 "sql_parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "sql_parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SELECT = 3,                     /* SELECT  */
  YYSYMBOL_FROM = 4,                       /* FROM  */
  YYSYMBOL_WHERE = 5,                      /* WHERE  */
  YYSYMBOL_GROUP = 6,                      /* GROUP  */
  YYSYMBOL_BY = 7,                         /* BY  */
  YYSYMBOL_HAVING = 8,                     /* HAVING  */
  YYSYMBOL_ORDER = 9,                      /* ORDER  */
  YYSYMBOL_ASC = 10,                       /* ASC  */
  YYSYMBOL_DESC = 11,                      /* DESC  */
  YYSYMBOL_LIMIT = 12,                     /* LIMIT  */
  YYSYMBOL_OFFSET = 13,                    /* OFFSET  */
  YYSYMBOL_AS = 14,                        /* AS  */
  YYSYMBOL_DISTINCT = 15,                  /* DISTINCT  */
  YYSYMBOL_ALL = 16,                       /* ALL  */
  YYSYMBOL_INSERT = 17,                    /* INSERT  */
  YYSYMBOL_INTO = 18,                      /* INTO  */
  YYSYMBOL_VALUES = 19,                    /* VALUES  */
  YYSYMBOL_UPDATE = 20,                    /* UPDATE  */
  YYSYMBOL_SET = 21,                       /* SET  */
  YYSYMBOL_DELETE = 22,                    /* DELETE  */
  YYSYMBOL_CREATE = 23,                    /* CREATE  */
  YYSYMBOL_TABLE = 24,                     /* TABLE  */
  YYSYMBOL_ALTER = 25,                     /* ALTER  */
  YYSYMBOL_ADD = 26,                       /* ADD  */
  YYSYMBOL_MODIFY = 27,                    /* MODIFY  */
  YYSYMBOL_DROP = 28,                      /* DROP  */
  YYSYMBOL_TRUNCATE = 29,                  /* TRUNCATE  */
  YYSYMBOL_RENAME = 30,                    /* RENAME  */
  YYSYMBOL_TO = 31,                        /* TO  */
  YYSYMBOL_COLUMN = 32,                    /* COLUMN  */
  YYSYMBOL_INDEX = 33,                     /* INDEX  */
  YYSYMBOL_PRIMARY = 34,                   /* PRIMARY  */
  YYSYMBOL_KEY = 35,                       /* KEY  */
  YYSYMBOL_FOREIGN = 36,                   /* FOREIGN  */
  YYSYMBOL_REFERENCES = 37,                /* REFERENCES  */
  YYSYMBOL_NULL_KW = 38,                   /* NULL_KW  */
  YYSYMBOL_UNIQUE = 39,                    /* UNIQUE  */
  YYSYMBOL_DEFAULT = 40,                   /* DEFAULT  */
  YYSYMBOL_CHECK = 41,                     /* CHECK  */
  YYSYMBOL_CONSTRAINT = 42,                /* CONSTRAINT  */
  YYSYMBOL_AUTO_INCREMENT = 43,            /* AUTO_INCREMENT  */
  YYSYMBOL_INT_TYPE = 44,                  /* INT_TYPE  */
  YYSYMBOL_BIGINT_TYPE = 45,               /* BIGINT_TYPE  */
  YYSYMBOL_SMALLINT_TYPE = 46,             /* SMALLINT_TYPE  */
  YYSYMBOL_TINYINT_TYPE = 47,              /* TINYINT_TYPE  */
  YYSYMBOL_NUMBER_TYPE = 48,               /* NUMBER_TYPE  */
  YYSYMBOL_NUMERIC_TYPE = 49,              /* NUMERIC_TYPE  */
  YYSYMBOL_VARCHAR_TYPE = 50,              /* VARCHAR_TYPE  */
  YYSYMBOL_VARCHAR2_TYPE = 51,             /* VARCHAR2_TYPE  */
  YYSYMBOL_CHAR_TYPE = 52,                 /* CHAR_TYPE  */
  YYSYMBOL_TEXT_TYPE = 53,                 /* TEXT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 54,                /* FLOAT_TYPE  */
  YYSYMBOL_DOUBLE_TYPE = 55,               /* DOUBLE_TYPE  */
  YYSYMBOL_REAL_TYPE = 56,                 /* REAL_TYPE  */
  YYSYMBOL_DECIMAL_TYPE = 57,              /* DECIMAL_TYPE  */
  YYSYMBOL_BOOLEAN_TYPE = 58,              /* BOOLEAN_TYPE  */
  YYSYMBOL_DATE_TYPE = 59,                 /* DATE_TYPE  */
  YYSYMBOL_DATETIME_TYPE = 60,             /* DATETIME_TYPE  */
  YYSYMBOL_TIMESTAMP_TYPE = 61,            /* TIMESTAMP_TYPE  */
  YYSYMBOL_BLOB_TYPE = 62,                 /* BLOB_TYPE  */
  YYSYMBOL_CLOB_TYPE = 63,                 /* CLOB_TYPE  */
  YYSYMBOL_JOIN = 64,                      /* JOIN  */
  YYSYMBOL_INNER = 65,                     /* INNER  */
  YYSYMBOL_LEFT = 66,                      /* LEFT  */
  YYSYMBOL_RIGHT = 67,                     /* RIGHT  */
  YYSYMBOL_FULL = 68,                      /* FULL  */
  YYSYMBOL_OUTER = 69,                     /* OUTER  */
  YYSYMBOL_CROSS = 70,                     /* CROSS  */
  YYSYMBOL_ON = 71,                        /* ON  */
  YYSYMBOL_USING = 72,                     /* USING  */
  YYSYMBOL_UNION = 73,                     /* UNION  */
  YYSYMBOL_INTERSECT = 74,                 /* INTERSECT  */
  YYSYMBOL_EXCEPT = 75,                    /* EXCEPT  */
  YYSYMBOL_AND = 76,                       /* AND  */
  YYSYMBOL_OR = 77,                        /* OR  */
  YYSYMBOL_NOT_KW = 78,                    /* NOT_KW  */
  YYSYMBOL_LIKE = 79,                      /* LIKE  */
  YYSYMBOL_IN = 80,                        /* IN  */
  YYSYMBOL_BETWEEN = 81,                   /* BETWEEN  */
  YYSYMBOL_IS = 82,                        /* IS  */
  YYSYMBOL_EXISTS = 83,                    /* EXISTS  */
  YYSYMBOL_CASE = 84,                      /* CASE  */
  YYSYMBOL_WHEN = 85,                      /* WHEN  */
  YYSYMBOL_THEN = 86,                      /* THEN  */
  YYSYMBOL_ELSE = 87,                      /* ELSE  */
  YYSYMBOL_END = 88,                       /* END  */
  YYSYMBOL_IF_KW = 89,                     /* IF_KW  */
  YYSYMBOL_BEGIN_KW = 90,                  /* BEGIN_KW  */
  YYSYMBOL_TRANSACTION = 91,               /* TRANSACTION  */
  YYSYMBOL_COMMIT = 92,                    /* COMMIT  */
  YYSYMBOL_ROLLBACK = 93,                  /* ROLLBACK  */
  YYSYMBOL_SAVEPOINT = 94,                 /* SAVEPOINT  */
  YYSYMBOL_COUNT = 95,                     /* COUNT  */
  YYSYMBOL_SUM = 96,                       /* SUM  */
  YYSYMBOL_AVG = 97,                       /* AVG  */
  YYSYMBOL_MIN = 98,                       /* MIN  */
  YYSYMBOL_MAX = 99,                       /* MAX  */
  YYSYMBOL_IDENTIFIER = 100,               /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 101,           /* STRING_LITERAL  */
  YYSYMBOL_INT_LITERAL = 102,              /* INT_LITERAL  */
  YYSYMBOL_FLOAT_LITERAL = 103,            /* FLOAT_LITERAL  */
  YYSYMBOL_EQ = 104,                       /* EQ  */
  YYSYMBOL_NE = 105,                       /* NE  */
  YYSYMBOL_LT = 106,                       /* LT  */
  YYSYMBOL_GT = 107,                       /* GT  */
  YYSYMBOL_LE = 108,                       /* LE  */
  YYSYMBOL_GE = 109,                       /* GE  */
  YYSYMBOL_PLUS = 110,                     /* PLUS  */
  YYSYMBOL_MINUS = 111,                    /* MINUS  */
  YYSYMBOL_STAR = 112,                     /* STAR  */
  YYSYMBOL_SLASH = 113,                    /* SLASH  */
  YYSYMBOL_MOD = 114,                      /* MOD  */
  YYSYMBOL_CONCAT = 115,                   /* CONCAT  */
  YYSYMBOL_COMMA = 116,                    /* COMMA  */
  YYSYMBOL_SEMICOLON = 117,                /* SEMICOLON  */
  YYSYMBOL_LPAREN = 118,                   /* LPAREN  */
  YYSYMBOL_RPAREN = 119,                   /* RPAREN  */
  YYSYMBOL_DOT = 120,                      /* DOT  */
  YYSYMBOL_UNARY = 121,                    /* UNARY  */
  YYSYMBOL_YYACCEPT = 122,                 /* $accept  */
  YYSYMBOL_query_script = 123,             /* query_script  */
  YYSYMBOL_opt_semicolon = 124,            /* opt_semicolon  */
  YYSYMBOL_statement_list = 125,           /* statement_list  */
  YYSYMBOL_statement = 126,                /* statement  */
  YYSYMBOL_select_stmt = 127,              /* select_stmt  */
  YYSYMBOL_opt_all = 128,                  /* opt_all  */
  YYSYMBOL_select_expr = 129,              /* select_expr  */
  YYSYMBOL_opt_distinct = 130,             /* opt_distinct  */
  YYSYMBOL_target_list = 131,              /* target_list  */
  YYSYMBOL_target_item = 132,              /* target_item  */
  YYSYMBOL_opt_alias = 133,                /* opt_alias  */
  YYSYMBOL_opt_from = 134,                 /* opt_from  */
  YYSYMBOL_from_clause = 135,              /* from_clause  */
  YYSYMBOL_table_ref_list = 136,           /* table_ref_list  */
  YYSYMBOL_table_ref = 137,                /* table_ref  */
  YYSYMBOL_join_type = 138,                /* join_type  */
  YYSYMBOL_opt_where = 139,                /* opt_where  */
  YYSYMBOL_opt_group_by = 140,             /* opt_group_by  */
  YYSYMBOL_opt_having = 141,               /* opt_having  */
  YYSYMBOL_opt_order_by = 142,             /* opt_order_by  */
  YYSYMBOL_order_item_list = 143,          /* order_item_list  */
  YYSYMBOL_order_item = 144,               /* order_item  */
  YYSYMBOL_opt_asc_desc = 145,             /* opt_asc_desc  */
  YYSYMBOL_opt_limit = 146,                /* opt_limit  */
  YYSYMBOL_insert_stmt = 147,              /* insert_stmt  */
  YYSYMBOL_insert_values_list = 148,       /* insert_values_list  */
  YYSYMBOL_tuple_list = 149,               /* tuple_list  */
  YYSYMBOL_tuple = 150,                    /* tuple  */
  YYSYMBOL_update_stmt = 151,              /* update_stmt  */
  YYSYMBOL_assignment_list = 152,          /* assignment_list  */
  YYSYMBOL_assignment = 153,               /* assignment  */
  YYSYMBOL_delete_stmt = 154,              /* delete_stmt  */
  YYSYMBOL_create_table_stmt = 155,        /* create_table_stmt  */
  YYSYMBOL_column_def_list = 156,          /* column_def_list  */
  YYSYMBOL_column_def = 157,               /* column_def  */
  YYSYMBOL_data_type = 158,                /* data_type  */
  YYSYMBOL_opt_column_constraints = 159,   /* opt_column_constraints  */
  YYSYMBOL_column_constraint = 160,        /* column_constraint  */
  YYSYMBOL_alter_table_stmt = 161,         /* alter_table_stmt  */
  YYSYMBOL_opt_column = 162,               /* opt_column  */
  YYSYMBOL_identifier_list = 163,          /* identifier_list  */
  YYSYMBOL_drop_table_stmt = 164,          /* drop_table_stmt  */
  YYSYMBOL_truncate_table_stmt = 165,      /* truncate_table_stmt  */
  YYSYMBOL_transaction_stmt = 166,         /* transaction_stmt  */
  YYSYMBOL_opt_transaction = 167,          /* opt_transaction  */
  YYSYMBOL_expr_list = 168,                /* expr_list  */
  YYSYMBOL_expr = 169,                     /* expr  */
  YYSYMBOL_func_call = 170,                /* func_call  */
  YYSYMBOL_opt_expr_list = 171,            /* opt_expr_list  */
  YYSYMBOL_aggregate_func = 172,           /* aggregate_func  */
  YYSYMBOL_case_expr = 173,                /* case_expr  */
  YYSYMBOL_when_then_list = 174,           /* when_then_list  */
  YYSYMBOL_when_then_clause = 175,         /* when_then_clause  */
  YYSYMBOL_opt_else = 176                  /* opt_else  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   631

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  122
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  193
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  390

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   376


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    75,    75,    79,    86,    87,    91,    97,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   121,   122,   128,
     134,   143,   144,   148,   162,   163,   164,   168,   172,   180,
     183,   189,   190,   191,   195,   196,   200,   208,   212,   220,
     225,   231,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   254,   259,   263,   268,   272,   277,   281,   286,   290,
     294,   302,   311,   312,   313,   317,   322,   329,   335,   341,
     348,   357,   361,   365,   373,   383,   393,   397,   405,   416,
     427,   433,   442,   446,   454,   461,   466,   473,   478,   485,
     490,   499,   500,   501,   502,   503,   504,   510,   516,   517,
     523,   529,   535,   536,   542,   543,   544,   545,   546,   547,
     553,   554,   555,   556,   557,   558,   562,   572,   576,   577,
     578,   579,   580,   585,   590,   596,   601,   611,   617,   623,
     629,   635,   641,   650,   651,   655,   660,   669,   674,   682,
     690,   691,   692,   693,   701,   702,   708,   712,   720,   726,
     732,   737,   743,   749,   755,   761,   767,   773,   779,   785,
     791,   798,   803,   808,   814,   820,   826,   832,   837,   838,
     843,   844,   845,   850,   856,   861,   866,   871,   877,   883,
     889,   898,   899,   903,   904,   905,   906,   907,   911,   920,
     924,   932,   941,   946
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "SELECT", "FROM",
  "WHERE", "GROUP", "BY", "HAVING", "ORDER", "ASC", "DESC", "LIMIT",
  "OFFSET", "AS", "DISTINCT", "ALL", "INSERT", "INTO", "VALUES", "UPDATE",
  "SET", "DELETE", "CREATE", "TABLE", "ALTER", "ADD", "MODIFY", "DROP",
  "TRUNCATE", "RENAME", "TO", "COLUMN", "INDEX", "PRIMARY", "KEY",
  "FOREIGN", "REFERENCES", "NULL_KW", "UNIQUE", "DEFAULT", "CHECK",
  "CONSTRAINT", "AUTO_INCREMENT", "INT_TYPE", "BIGINT_TYPE",
  "SMALLINT_TYPE", "TINYINT_TYPE", "NUMBER_TYPE", "NUMERIC_TYPE",
  "VARCHAR_TYPE", "VARCHAR2_TYPE", "CHAR_TYPE", "TEXT_TYPE", "FLOAT_TYPE",
  "DOUBLE_TYPE", "REAL_TYPE", "DECIMAL_TYPE", "BOOLEAN_TYPE", "DATE_TYPE",
  "DATETIME_TYPE", "TIMESTAMP_TYPE", "BLOB_TYPE", "CLOB_TYPE", "JOIN",
  "INNER", "LEFT", "RIGHT", "FULL", "OUTER", "CROSS", "ON", "USING",
  "UNION", "INTERSECT", "EXCEPT", "AND", "OR", "NOT_KW", "LIKE", "IN",
  "BETWEEN", "IS", "EXISTS", "CASE", "WHEN", "THEN", "ELSE", "END",
  "IF_KW", "BEGIN_KW", "TRANSACTION", "COMMIT", "ROLLBACK", "SAVEPOINT",
  "COUNT", "SUM", "AVG", "MIN", "MAX", "IDENTIFIER", "STRING_LITERAL",
  "INT_LITERAL", "FLOAT_LITERAL", "EQ", "NE", "LT", "GT", "LE", "GE",
  "PLUS", "MINUS", "STAR", "SLASH", "MOD", "CONCAT", "COMMA", "SEMICOLON",
  "LPAREN", "RPAREN", "DOT", "UNARY", "$accept", "query_script",
  "opt_semicolon", "statement_list", "statement", "select_stmt", "opt_all",
  "select_expr", "opt_distinct", "target_list", "target_item", "opt_alias",
  "opt_from", "from_clause", "table_ref_list", "table_ref", "join_type",
  "opt_where", "opt_group_by", "opt_having", "opt_order_by",
  "order_item_list", "order_item", "opt_asc_desc", "opt_limit",
  "insert_stmt", "insert_values_list", "tuple_list", "tuple",
  "update_stmt", "assignment_list", "assignment", "delete_stmt",
  "create_table_stmt", "column_def_list", "column_def", "data_type",
  "opt_column_constraints", "column_constraint", "alter_table_stmt",
  "opt_column", "identifier_list", "drop_table_stmt",
  "truncate_table_stmt", "transaction_stmt", "opt_transaction",
  "expr_list", "expr", "func_call", "opt_expr_list", "aggregate_func",
  "case_expr", "when_then_list", "when_then_clause", "opt_else", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-234)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-150)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     114,   160,    -5,   -56,    66,    70,    75,   106,   122,    22,
    -234,  -234,    48,   164,    43,  -234,   176,  -234,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,   162,    69,
     150,    88,   -61,   112,   -39,   113,  -234,  -234,  -234,  -234,
     114,  -234,   208,   240,   240,  -234,   193,   163,  -234,  -234,
    -234,  -234,  -234,   -60,  -234,  -234,  -234,   193,  -234,     7,
      -2,  -234,    74,  -234,   134,  -234,     1,   167,   263,   192,
     154,   228,   196,  -234,  -234,  -234,  -234,   240,  -234,  -234,
     498,   193,    -3,  -234,   193,   181,  -234,   -32,   221,   -92,
     162,   263,   182,   193,   193,   193,   157,   193,   -15,  -234,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
    -234,    -1,   158,   193,   176,   179,     0,  -234,   193,  -234,
     201,   169,   253,   253,   253,   186,  -234,   392,   193,  -234,
     217,   190,   430,   188,  -234,  -234,  -234,   -11,   240,  -234,
     194,   171,  -234,   302,  -234,   498,   488,   117,     7,   440,
    -234,   271,   117,   117,   117,   117,   117,   117,    89,    89,
    -234,  -234,   195,   193,   193,  -234,   197,  -234,   -48,   193,
     167,  -234,   430,   212,   280,   281,   200,   219,   568,   -21,
    -234,  -234,   -17,    15,   -84,  -234,   193,   430,  -234,   193,
    -234,  -234,   -27,   -92,  -234,   256,   -37,   -34,   -10,   257,
     -92,   315,   316,    53,     4,   193,  -234,  -234,   262,     5,
     158,   304,   430,  -234,   227,   229,   230,   193,   104,  -234,
    -234,  -234,  -234,   232,   233,   234,   235,   238,  -234,  -234,
    -234,  -234,   243,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
     169,  -234,   169,  -234,   169,  -234,  -234,   237,   430,   430,
     321,   171,  -234,  -234,   282,  -234,   298,  -234,   299,  -234,
     155,   193,   193,   355,  -234,  -234,   450,  -234,  -234,  -234,
     158,   169,   265,   276,   278,   342,   343,   261,   290,   291,
     292,   300,   301,   303,   175,  -234,    13,    28,  -234,    54,
     306,  -234,  -234,  -234,   193,   190,   430,   373,   395,  -234,
     126,   285,   289,  -234,   295,   317,   193,   128,   293,   314,
     318,   330,   294,   383,  -234,   193,   332,   320,  -234,   381,
    -234,  -234,  -234,   322,  -234,  -234,   430,   193,   334,  -234,
    -234,  -234,   384,   351,   359,   319,   358,  -234,   360,  -234,
    -234,  -234,   361,  -234,   430,   193,   118,  -234,  -234,   345,
    -234,    86,   421,   364,   346,   347,  -234,   348,   356,   357,
     335,   435,  -234,   372,   193,  -234,  -234,  -234,   375,   374,
    -234,   442,  -234,  -234,  -234,  -234,  -234,   193,  -234,  -234,
     391,   393,   376,   389,   396,  -234,  -234,   394,   399,  -234
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    26,     0,     0,     0,     0,     0,     0,     0,   145,
     141,   142,     0,     0,     5,     7,     8,    17,     9,    10,
      11,    12,    13,    14,    15,    16,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,   144,   140,   143,     1,
       4,     2,    22,     0,     0,   177,     0,     0,   183,   184,
     185,   186,   187,   172,   174,   175,   176,     0,    29,     0,
      35,    28,    33,   170,     0,   171,     0,     0,    52,     0,
       0,     0,     0,   137,   139,     6,    21,     0,    20,    19,
     150,     0,   193,   190,   182,     0,   167,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    26,     0,     0,    70,     0,    52,    77,     0,    79,
       0,     0,   134,   134,   134,     0,    18,     0,     0,   189,
       0,   181,   147,     0,   173,   169,   168,    33,     0,    34,
      36,    38,    27,    54,    31,   149,   148,   157,     0,     0,
     161,     0,   151,   152,   153,   154,   155,   156,   163,   164,
     165,   166,     0,     0,     0,    68,    71,    73,     0,     0,
       0,    75,    51,     0,     0,     0,     0,     0,     0,     0,
      83,   133,     0,     0,     0,   138,     0,   192,   188,     0,
     180,    39,     0,     0,    42,     0,     0,     0,     0,     0,
       0,     0,    56,     0,     0,     0,   162,   179,     0,     0,
       0,     0,    78,    76,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,    98,     0,     0,   102,   104,   105,
     106,   107,   108,   110,   111,   112,   113,   114,   115,   117,
       0,    80,     0,   127,     0,   129,   131,     0,   191,   146,
       0,    37,    43,    44,     0,    46,     0,    48,     0,    50,
       0,     0,     0,    58,   159,   158,   160,   178,    74,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    82,     0,     0,   136,     0,
       0,    45,    47,    49,     0,    53,    55,     0,    67,    69,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   120,     0,     0,     0,   121,     0,
     116,   128,   130,     0,   132,    40,    41,     0,     0,    23,
      81,    85,     0,     0,     0,     0,     0,    96,     0,   100,
     101,   103,     0,   118,   122,     0,     0,   119,   135,    57,
      60,    64,    65,     0,     0,     0,    90,     0,     0,     0,
       0,     0,   126,     0,     0,    62,    63,    61,     0,     0,
      87,     0,    97,    99,   109,   123,   125,     0,    59,    66,
       0,     0,     0,     0,     0,   124,    86,     0,     0,    88
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -234,  -234,  -234,  -234,   473,   -26,  -234,   -22,   404,  -234,
     433,   387,  -234,  -234,  -234,  -107,  -234,   -79,  -234,  -234,
    -234,  -234,   161,  -234,  -234,  -234,   258,  -234,   323,  -234,
    -234,   401,  -234,  -234,  -233,  -176,  -234,  -234,  -234,  -234,
     109,  -234,  -234,  -234,  -234,  -234,  -112,   -28,  -234,  -234,
    -234,  -234,  -234,   483,  -234
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    13,    41,    14,    15,    16,    77,    17,    28,    60,
      61,   110,    91,   139,   140,   141,   200,   119,   202,   263,
     298,   349,   350,   367,   329,    18,   165,   166,   167,    19,
     116,   117,    20,    21,   179,   180,   239,   284,   320,    22,
     182,   289,    23,    24,    25,    37,   131,   132,    63,   133,
      64,    65,    82,    83,   130
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,   168,    89,    92,     1,   118,   243,   245,   137,   286,
       1,   287,   143,    29,    26,    27,   246,   174,    80,   175,
     112,    78,    79,   150,   176,   177,   138,   253,    69,    86,
     255,    88,   254,    87,   247,   256,   204,   171,   300,    70,
     114,    42,    43,    44,    30,    45,    42,    43,    44,   174,
      72,   175,   209,   127,   257,   126,   176,   177,    84,   258,
      85,    73,    62,   151,   285,   145,   146,   147,   189,   149,
      31,   211,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,    81,   178,   128,    46,   251,   135,    92,    99,
     172,    47,   250,   260,    32,   240,   365,   366,   241,    33,
     187,   242,    48,    49,    50,    51,    52,    53,    54,    55,
      56,   162,   192,    36,    90,   178,   170,     1,    57,   113,
     189,   189,   203,   265,   268,    59,    42,    43,    44,   240,
      34,     2,   321,   244,     3,   208,     4,     5,   275,     6,
     276,   212,     7,     8,   240,   277,    35,   322,    38,   295,
      93,    94,   361,    95,    96,    97,    98,   362,   248,   363,
      40,   249,    93,    94,    39,    95,    96,    97,    98,    66,
     323,    67,   264,   324,    99,    26,    27,   266,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    68,   274,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      45,   108,   109,   174,     9,   175,    10,    11,    12,   313,
     176,   177,    71,    74,   314,   315,   316,   317,   318,   194,
     195,   196,   197,   198,    76,   199,   294,   106,   107,   108,
     109,    45,   183,   184,   296,   194,   195,   196,   197,   198,
      46,   199,   240,     1,   336,   330,    47,   337,    81,    42,
      43,    44,   111,   319,   122,   123,   124,    48,    49,    50,
      51,    52,    53,    54,    55,    56,   326,   115,   118,   178,
     120,    46,   121,    57,    58,   148,   164,    47,   335,   125,
      59,   134,   144,   169,   173,   181,   185,   344,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    93,    94,   351,
      95,    96,    97,    98,    57,   188,   189,   190,   201,   206,
     193,    59,   214,   210,   207,   215,   216,   360,   217,   218,
     252,   259,   261,   270,   262,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   290,   351,   288,    93,    94,
     136,    95,    96,    97,    98,   271,   291,   272,   273,   382,
     278,   279,   280,   281,    93,    94,   282,    95,    96,    97,
      98,   283,   292,   293,   297,   301,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   302,   304,   305,   306,
     327,   267,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   307,   308,   309,    93,    94,   303,    95,    96,
      97,    98,   310,   311,   331,   312,   325,   328,   332,   338,
     342,    93,    94,   333,    95,    96,    97,    98,   343,   347,
     346,   353,   348,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   339,   368,   334,   352,   340,   356,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   341,
     345,   354,    93,    94,   375,    95,    96,    97,    98,   355,
     357,   364,   358,   359,   369,   370,   371,   372,    93,    94,
     376,    95,    96,    97,    98,   373,   374,   379,   186,   381,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     377,   383,   380,   384,   388,   385,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    93,    94,   386,    95,
      96,    97,    98,    75,   387,   163,   205,    94,   389,    95,
      96,    97,    98,   142,   191,   378,  -149,  -149,   299,    95,
      96,    97,    98,   269,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    93,   129,     0,    95,    96,    97,
      98,   213,     0,     0,     0,     0,     0,    95,    96,    97,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238
};

static const yytype_int16 yycheck[] =
{
      28,   113,     4,    14,     3,     5,   182,   183,   100,   242,
       3,   244,    91,    18,    15,    16,   100,    34,    46,    36,
      19,    43,    44,    38,    41,    42,   118,    64,    89,    57,
      64,    59,    69,    59,   118,    69,   148,   116,   271,   100,
      66,    73,    74,    75,   100,    38,    73,    74,    75,    34,
      89,    36,   164,    81,    64,    77,    41,    42,   118,    69,
     120,   100,    90,    78,   240,    93,    94,    95,   116,    97,
       4,   119,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    85,   100,    87,    78,   193,   119,    14,   100,
     118,    84,   119,   200,    24,   116,    10,    11,   119,    24,
     128,   118,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   112,   138,    91,   116,   100,   116,     3,   111,   118,
     116,   116,   148,   119,   119,   118,    73,    74,    75,   116,
      24,    17,   119,   118,    20,   163,    22,    23,    34,    25,
      36,   169,    28,    29,   116,    41,    24,   119,   100,   261,
      76,    77,    34,    79,    80,    81,    82,    39,   186,    41,
     117,   189,    76,    77,     0,    79,    80,    81,    82,   100,
     116,    21,   119,   119,   100,    15,    16,   205,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   100,   217,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      38,   112,   113,    34,    90,    36,    92,    93,    94,    34,
      41,    42,   100,   100,    39,    40,    41,    42,    43,    64,
      65,    66,    67,    68,    16,    70,    71,   110,   111,   112,
     113,    38,   123,   124,   262,    64,    65,    66,    67,    68,
      78,    70,   116,     3,   116,   119,    84,   119,    85,    73,
      74,    75,   118,    78,    26,    27,    28,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   294,   100,     5,   100,
      78,    78,   118,   111,   112,   118,   118,    84,   306,    83,
     118,   100,   100,   104,    83,    32,   100,   315,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    76,    77,   327,
      79,    80,    81,    82,   111,    88,   116,   119,     6,    38,
     116,   118,   100,   116,   119,    35,    35,   345,   118,   100,
      64,    64,     7,    19,     8,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    14,   364,   100,    76,    77,
     119,    79,    80,    81,    82,   118,    64,   118,   118,   377,
     118,   118,   118,   118,    76,    77,   118,    79,    80,    81,
      82,   118,    64,    64,     9,   100,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   100,    35,    35,   118,
       7,   119,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   102,   102,   102,    76,    77,   119,    79,    80,
      81,    82,   102,   102,   119,   102,   100,    12,   119,   116,
     116,    76,    77,   118,    79,    80,    81,    82,    35,    38,
     100,    37,   100,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   119,    13,   118,   102,   119,   119,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   119,
     118,   100,    76,    77,   119,    79,    80,    81,    82,   100,
     102,   116,   102,   102,   100,   119,   119,   119,    76,    77,
      35,    79,    80,    81,    82,   119,   119,   102,    86,    37,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     118,   100,   118,   100,   100,   119,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    76,    77,   119,    79,
      80,    81,    82,    40,   118,   111,    76,    77,   119,    79,
      80,    81,    82,    90,   137,   364,    76,    77,   270,    79,
      80,    81,    82,   210,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    76,    82,    -1,    79,    80,    81,
      82,   170,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    17,    20,    22,    23,    25,    28,    29,    90,
      92,    93,    94,   123,   125,   126,   127,   129,   147,   151,
     154,   155,   161,   164,   165,   166,    15,    16,   130,    18,
     100,     4,    24,    24,    24,    24,    91,   167,   100,     0,
     117,   124,    73,    74,    75,    38,    78,    84,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   111,   112,   118,
     131,   132,   169,   170,   172,   173,   100,    21,   100,    89,
     100,   100,    89,   100,   100,   126,    16,   128,   129,   129,
     169,    85,   174,   175,   118,   120,   169,   127,   169,     4,
     116,   134,    14,    76,    77,    79,    80,    81,    82,   100,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     133,   118,    19,   118,   127,   100,   152,   153,     5,   139,
      78,   118,    26,    27,    28,    83,   129,   169,    87,   175,
     176,   168,   169,   171,   100,   119,   119,   100,   118,   135,
     136,   137,   132,   139,   100,   169,   169,   169,   118,   169,
      38,    78,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   112,   130,   118,   148,   149,   150,   168,   104,
     116,   139,   169,    83,    34,    36,    41,    42,   100,   156,
     157,    32,   162,   162,   162,   100,    86,   169,    88,   116,
     119,   133,   127,   116,    64,    65,    66,    67,    68,    70,
     138,     6,   140,   127,   168,    76,    38,   119,   169,   168,
     116,   119,   169,   153,   100,    35,    35,   118,   100,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,   158,
     116,   119,   118,   157,   118,   157,   100,   118,   169,   169,
     119,   137,    64,    64,    69,    64,    69,    64,    69,    64,
     137,     7,     8,   141,   119,   119,   169,   119,   119,   150,
      19,   118,   118,   118,   169,    34,    36,    41,   118,   118,
     118,   118,   118,   118,   159,   157,   156,   156,   100,   163,
      14,    64,    64,    64,    71,   168,   169,     9,   142,   148,
     156,   100,   100,   119,    35,    35,   118,   102,   102,   102,
     102,   102,   102,    34,    39,    40,    41,    42,    43,    78,
     160,   119,   119,   116,   119,   100,   169,     7,    12,   146,
     119,   119,   119,   118,   118,   169,   116,   119,   116,   119,
     119,   119,   116,    35,   169,   118,   100,    38,   100,   143,
     144,   169,   102,    37,   100,   100,   119,   102,   102,   102,
     169,    34,    39,    41,   116,    10,    11,   145,    13,   100,
     119,   119,   119,   119,   119,   119,    35,   118,   144,   102,
     118,    37,   169,   100,   100,   119,   119,   118,   100,   119
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   122,   123,   123,   124,   124,   125,   125,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   127,   127,   127,
     127,   128,   128,   129,   130,   130,   130,   131,   131,   132,
     132,   133,   133,   133,   134,   134,   135,   136,   136,   137,
     137,   137,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   139,   139,   140,   140,   141,   141,   142,   142,   143,
     143,   144,   145,   145,   145,   146,   146,   146,   147,   147,
     147,   148,   149,   149,   150,   151,   152,   152,   153,   154,
     155,   155,   156,   156,   157,   157,   157,   157,   157,   157,
     157,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   159,   159,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   161,   161,   161,
     161,   161,   161,   162,   162,   163,   163,   164,   164,   165,
     166,   166,   166,   166,   167,   167,   168,   168,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   170,   170,
     170,   171,   171,   172,   172,   172,   172,   172,   173,   174,
     174,   175,   176,   176
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       3,     1,     0,     9,     1,     1,     0,     3,     1,     1,
       2,     2,     1,     0,     2,     0,     1,     3,     1,     2,
       5,     5,     1,     2,     2,     3,     2,     3,     2,     3,
       2,     2,     0,     3,     0,     2,     0,     3,     0,     3,
       1,     2,     1,     1,     0,     2,     4,     0,     5,     8,
       4,     1,     3,     1,     3,     5,     3,     1,     3,     4,
       6,     9,     3,     1,     3,     5,    10,     7,    12,     4,
       6,     1,     1,     1,     1,     1,     4,     6,     1,     6,
       4,     4,     1,     4,     1,     1,     1,     1,     1,     6,
       1,     1,     1,     1,     1,     1,     2,     0,     2,     2,
       1,     1,     2,     4,     6,     4,     3,     6,     8,     6,
       8,     6,     8,     1,     0,     3,     1,     3,     5,     3,
       2,     1,     1,     2,     1,     0,     3,     1,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     5,     5,
       5,     3,     4,     3,     3,     3,     3,     2,     3,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     5,     4,
       4,     1,     0,     1,     1,     1,     1,     1,     4,     2,
       1,     4,     2,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* query_script: statement_list opt_semicolon  */
#line 75 "sql_parser.y"
                                 {
        g_ast_root = (yyvsp[-1].node);
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1594 "sql_parser.tab.c"
    break;

  case 3: /* query_script: %empty  */
#line 79 "sql_parser.y"
                  {
        g_ast_root = NULL;
        (yyval.node) = NULL;
    }
#line 1603 "sql_parser.tab.c"
    break;

  case 6: /* statement_list: statement_list SEMICOLON statement  */
#line 91 "sql_parser.y"
                                       {
        if ((yyvsp[0].node)) {
            ast_add_child((yyvsp[-2].node), (yyvsp[0].node));
        }
        (yyval.node) = (yyvsp[-2].node);
    }
#line 1614 "sql_parser.tab.c"
    break;

  case 7: /* statement_list: statement  */
#line 97 "sql_parser.y"
                {
        ASTNode *stmt_list = ast_create_node(AST_STMT_LIST, "STATEMENT_LIST", NULL);
        if ((yyvsp[0].node)) {
            ast_add_child(stmt_list, (yyvsp[0].node));
        }
        (yyval.node) = stmt_list;
    }
#line 1626 "sql_parser.tab.c"
    break;

  case 8: /* statement: select_stmt  */
#line 107 "sql_parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 1632 "sql_parser.tab.c"
    break;

  case 9: /* statement: insert_stmt  */
#line 108 "sql_parser.y"
                  { (yyval.node) = (yyvsp[0].node); }
#line 1638 "sql_parser.tab.c"
    break;

  case 10: /* statement: update_stmt  */
#line 109 "sql_parser.y"
                  { (yyval.node) = (yyvsp[0].node); }
#line 1644 "sql_parser.tab.c"
    break;

  case 11: /* statement: delete_stmt  */
#line 110 "sql_parser.y"
                  { (yyval.node) = (yyvsp[0].node); }
#line 1650 "sql_parser.tab.c"
    break;

  case 12: /* statement: create_table_stmt  */
#line 111 "sql_parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1656 "sql_parser.tab.c"
    break;

  case 13: /* statement: alter_table_stmt  */
#line 112 "sql_parser.y"
                       { (yyval.node) = (yyvsp[0].node); }
#line 1662 "sql_parser.tab.c"
    break;

  case 14: /* statement: drop_table_stmt  */
#line 113 "sql_parser.y"
                      { (yyval.node) = (yyvsp[0].node); }
#line 1668 "sql_parser.tab.c"
    break;

  case 15: /* statement: truncate_table_stmt  */
#line 114 "sql_parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 1674 "sql_parser.tab.c"
    break;

  case 16: /* statement: transaction_stmt  */
#line 115 "sql_parser.y"
                       { (yyval.node) = (yyvsp[0].node); }
#line 1680 "sql_parser.tab.c"
    break;

  case 17: /* select_stmt: select_expr  */
#line 121 "sql_parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 1686 "sql_parser.tab.c"
    break;

  case 18: /* select_stmt: select_stmt UNION opt_all select_expr  */
#line 122 "sql_parser.y"
                                            {
        ASTNode *union_node = ast_create_node(AST_UNION, "UNION", "UNION");
        ast_add_child(union_node, (yyvsp[-3].node));
        ast_add_child(union_node, (yyvsp[0].node));
        (yyval.node) = union_node;
    }
#line 1697 "sql_parser.tab.c"
    break;

  case 19: /* select_stmt: select_stmt EXCEPT select_expr  */
#line 128 "sql_parser.y"
                                     {
        ASTNode *except_node = ast_create_node(AST_UNION, "EXCEPT", "EXCEPT");
        ast_add_child(except_node, (yyvsp[-2].node));
        ast_add_child(except_node, (yyvsp[0].node));
        (yyval.node) = except_node;
    }
#line 1708 "sql_parser.tab.c"
    break;

  case 20: /* select_stmt: select_stmt INTERSECT select_expr  */
#line 134 "sql_parser.y"
                                        {
        ASTNode *intersect_node = ast_create_node(AST_UNION, "INTERSECT", "INTERSECT");
        ast_add_child(intersect_node, (yyvsp[-2].node));
        ast_add_child(intersect_node, (yyvsp[0].node));
        (yyval.node) = intersect_node;
    }
#line 1719 "sql_parser.tab.c"
    break;

  case 23: /* select_expr: SELECT opt_distinct target_list opt_from opt_where opt_group_by opt_having opt_order_by opt_limit  */
#line 148 "sql_parser.y"
                                                                                                      {
        ASTNode *select_node = ast_create_node(AST_SELECT, "SELECT_STMT", NULL);
        ast_add_child(select_node, (yyvsp[-6].node));
        if ((yyvsp[-5].node)) ast_add_child(select_node, (yyvsp[-5].node));
        if ((yyvsp[-4].node)) ast_add_child(select_node, (yyvsp[-4].node));
        if ((yyvsp[-3].node)) ast_add_child(select_node, (yyvsp[-3].node));
        if ((yyvsp[-2].node)) ast_add_child(select_node, (yyvsp[-2].node));
        if ((yyvsp[-1].node)) ast_add_child(select_node, (yyvsp[-1].node));
        if ((yyvsp[0].node)) ast_add_child(select_node, (yyvsp[0].node));
        (yyval.node) = select_node;
    }
#line 1735 "sql_parser.tab.c"
    break;

  case 27: /* target_list: target_list COMMA target_item  */
#line 168 "sql_parser.y"
                                  {
        ast_add_child((yyvsp[-2].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-2].node);
    }
#line 1744 "sql_parser.tab.c"
    break;

  case 28: /* target_list: target_item  */
#line 172 "sql_parser.y"
                  {
        ASTNode *tlist = ast_create_node(AST_TARGET_LIST, "TARGET_LIST", NULL);
        ast_add_child(tlist, (yyvsp[0].node));
        (yyval.node) = tlist;
    }
#line 1754 "sql_parser.tab.c"
    break;

  case 29: /* target_item: STAR  */
#line 180 "sql_parser.y"
         {
        (yyval.node) = ast_create_node(AST_FIELD, "FIELD", "*");
    }
#line 1762 "sql_parser.tab.c"
    break;

  case 30: /* target_item: expr opt_alias  */
#line 183 "sql_parser.y"
                     {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1770 "sql_parser.tab.c"
    break;

  case 31: /* opt_alias: AS IDENTIFIER  */
#line 189 "sql_parser.y"
                  { free((yyvsp[0].str)); }
#line 1776 "sql_parser.tab.c"
    break;

  case 32: /* opt_alias: IDENTIFIER  */
#line 190 "sql_parser.y"
                 { free((yyvsp[0].str)); }
#line 1782 "sql_parser.tab.c"
    break;

  case 34: /* opt_from: FROM from_clause  */
#line 195 "sql_parser.y"
                     { (yyval.node) = (yyvsp[0].node); }
#line 1788 "sql_parser.tab.c"
    break;

  case 35: /* opt_from: %empty  */
#line 196 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 1794 "sql_parser.tab.c"
    break;

  case 36: /* from_clause: table_ref_list  */
#line 200 "sql_parser.y"
                   {
        ASTNode *from_node = ast_create_node(AST_FROM_CLAUSE, "FROM_CLAUSE", NULL);
        ast_add_child(from_node, (yyvsp[0].node));
        (yyval.node) = from_node;
    }
#line 1804 "sql_parser.tab.c"
    break;

  case 37: /* table_ref_list: table_ref_list COMMA table_ref  */
#line 208 "sql_parser.y"
                                   {
        ast_add_child((yyvsp[-2].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-2].node);
    }
#line 1813 "sql_parser.tab.c"
    break;

  case 38: /* table_ref_list: table_ref  */
#line 212 "sql_parser.y"
                {
        ASTNode *list = ast_create_node(AST_OTHER, "TABLE_LIST", NULL);
        ast_add_child(list, (yyvsp[0].node));
        (yyval.node) = list;
    }
#line 1823 "sql_parser.tab.c"
    break;

  case 39: /* table_ref: IDENTIFIER opt_alias  */
#line 220 "sql_parser.y"
                         {
        ASTNode *tref = ast_create_node(AST_TABLE_REF, "TABLE", (yyvsp[-1].str));
        free((yyvsp[-1].str));
        (yyval.node) = tref;
    }
#line 1833 "sql_parser.tab.c"
    break;

  case 40: /* table_ref: LPAREN select_stmt RPAREN AS IDENTIFIER  */
#line 225 "sql_parser.y"
                                              {
        ASTNode *subq = ast_create_node(AST_SUBQUERY, "SUBQUERY_TABLE", (yyvsp[0].str));
        ast_add_child(subq, (yyvsp[-3].node));
        free((yyvsp[0].str));
        (yyval.node) = subq;
    }
#line 1844 "sql_parser.tab.c"
    break;

  case 41: /* table_ref: table_ref join_type table_ref ON expr  */
#line 231 "sql_parser.y"
                                            {
        ASTNode *jnode = ast_create_node(AST_JOIN, "JOIN", (yyvsp[-3].node) ? (yyvsp[-3].node)->label : "INNER JOIN");
        ast_add_child(jnode, (yyvsp[-4].node));
        ast_add_child(jnode, (yyvsp[-2].node));
        ast_add_child(jnode, (yyvsp[0].node));
        if ((yyvsp[-3].node)) ast_free((yyvsp[-3].node));
        (yyval.node) = jnode;
    }
#line 1857 "sql_parser.tab.c"
    break;

  case 42: /* join_type: JOIN  */
#line 242 "sql_parser.y"
         { (yyval.node) = ast_create_node(AST_OTHER, "JOIN", NULL); }
#line 1863 "sql_parser.tab.c"
    break;

  case 43: /* join_type: INNER JOIN  */
#line 243 "sql_parser.y"
                 { (yyval.node) = ast_create_node(AST_OTHER, "INNER JOIN", NULL); }
#line 1869 "sql_parser.tab.c"
    break;

  case 44: /* join_type: LEFT JOIN  */
#line 244 "sql_parser.y"
                { (yyval.node) = ast_create_node(AST_OTHER, "LEFT JOIN", NULL); }
#line 1875 "sql_parser.tab.c"
    break;

  case 45: /* join_type: LEFT OUTER JOIN  */
#line 245 "sql_parser.y"
                      { (yyval.node) = ast_create_node(AST_OTHER, "LEFT OUTER JOIN", NULL); }
#line 1881 "sql_parser.tab.c"
    break;

  case 46: /* join_type: RIGHT JOIN  */
#line 246 "sql_parser.y"
                 { (yyval.node) = ast_create_node(AST_OTHER, "RIGHT JOIN", NULL); }
#line 1887 "sql_parser.tab.c"
    break;

  case 47: /* join_type: RIGHT OUTER JOIN  */
#line 247 "sql_parser.y"
                       { (yyval.node) = ast_create_node(AST_OTHER, "RIGHT OUTER JOIN", NULL); }
#line 1893 "sql_parser.tab.c"
    break;

  case 48: /* join_type: FULL JOIN  */
#line 248 "sql_parser.y"
                { (yyval.node) = ast_create_node(AST_OTHER, "FULL JOIN", NULL); }
#line 1899 "sql_parser.tab.c"
    break;

  case 49: /* join_type: FULL OUTER JOIN  */
#line 249 "sql_parser.y"
                      { (yyval.node) = ast_create_node(AST_OTHER, "FULL OUTER JOIN", NULL); }
#line 1905 "sql_parser.tab.c"
    break;

  case 50: /* join_type: CROSS JOIN  */
#line 250 "sql_parser.y"
                 { (yyval.node) = ast_create_node(AST_OTHER, "CROSS JOIN", NULL); }
#line 1911 "sql_parser.tab.c"
    break;

  case 51: /* opt_where: WHERE expr  */
#line 254 "sql_parser.y"
               {
        ASTNode *wnode = ast_create_node(AST_WHERE_CLAUSE, "WHERE_CLAUSE", NULL);
        ast_add_child(wnode, (yyvsp[0].node));
        (yyval.node) = wnode;
    }
#line 1921 "sql_parser.tab.c"
    break;

  case 52: /* opt_where: %empty  */
#line 259 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 1927 "sql_parser.tab.c"
    break;

  case 53: /* opt_group_by: GROUP BY expr_list  */
#line 263 "sql_parser.y"
                       {
        ASTNode *gnode = ast_create_node(AST_GROUP_BY, "GROUP_BY", NULL);
        ast_add_child(gnode, (yyvsp[0].node));
        (yyval.node) = gnode;
    }
#line 1937 "sql_parser.tab.c"
    break;

  case 54: /* opt_group_by: %empty  */
#line 268 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 1943 "sql_parser.tab.c"
    break;

  case 55: /* opt_having: HAVING expr  */
#line 272 "sql_parser.y"
                {
        ASTNode *hnode = ast_create_node(AST_HAVING, "HAVING", NULL);
        ast_add_child(hnode, (yyvsp[0].node));
        (yyval.node) = hnode;
    }
#line 1953 "sql_parser.tab.c"
    break;

  case 56: /* opt_having: %empty  */
#line 277 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 1959 "sql_parser.tab.c"
    break;

  case 57: /* opt_order_by: ORDER BY order_item_list  */
#line 281 "sql_parser.y"
                             {
        ASTNode *onode = ast_create_node(AST_ORDER_BY, "ORDER_BY", NULL);
        ast_add_child(onode, (yyvsp[0].node));
        (yyval.node) = onode;
    }
#line 1969 "sql_parser.tab.c"
    break;

  case 58: /* opt_order_by: %empty  */
#line 286 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 1975 "sql_parser.tab.c"
    break;

  case 59: /* order_item_list: order_item_list COMMA order_item  */
#line 290 "sql_parser.y"
                                     {
        ast_add_child((yyvsp[-2].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-2].node);
    }
#line 1984 "sql_parser.tab.c"
    break;

  case 60: /* order_item_list: order_item  */
#line 294 "sql_parser.y"
                 {
        ASTNode *olist = ast_create_node(AST_OTHER, "ORDER_LIST", NULL);
        ast_add_child(olist, (yyvsp[0].node));
        (yyval.node) = olist;
    }
#line 1994 "sql_parser.tab.c"
    break;

  case 61: /* order_item: expr opt_asc_desc  */
#line 302 "sql_parser.y"
                      {
        ASTNode *item = ast_create_node(AST_ORDER_ITEM, "ORDER_ITEM", (yyvsp[0].node) ? (yyvsp[0].node)->value : "ASC");
        ast_add_child(item, (yyvsp[-1].node));
        if ((yyvsp[0].node)) ast_free((yyvsp[0].node));
        (yyval.node) = item;
    }
#line 2005 "sql_parser.tab.c"
    break;

  case 62: /* opt_asc_desc: ASC  */
#line 311 "sql_parser.y"
        { (yyval.node) = ast_create_node(AST_OTHER, "DIR", "ASC"); }
#line 2011 "sql_parser.tab.c"
    break;

  case 63: /* opt_asc_desc: DESC  */
#line 312 "sql_parser.y"
           { (yyval.node) = ast_create_node(AST_OTHER, "DIR", "DESC"); }
#line 2017 "sql_parser.tab.c"
    break;

  case 64: /* opt_asc_desc: %empty  */
#line 313 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 2023 "sql_parser.tab.c"
    break;

  case 65: /* opt_limit: LIMIT INT_LITERAL  */
#line 317 "sql_parser.y"
                      {
        ASTNode *lnode = ast_create_node(AST_LIMIT_CLAUSE, "LIMIT", (yyvsp[0].str));
        free((yyvsp[0].str));
        (yyval.node) = lnode;
    }
#line 2033 "sql_parser.tab.c"
    break;

  case 66: /* opt_limit: LIMIT INT_LITERAL OFFSET INT_LITERAL  */
#line 322 "sql_parser.y"
                                           {
        char buf[128];
        snprintf(buf, sizeof(buf), "%s OFFSET %s", (yyvsp[-2].str), (yyvsp[0].str));
        ASTNode *lnode = ast_create_node(AST_LIMIT_CLAUSE, "LIMIT", buf);
        free((yyvsp[-2].str)); free((yyvsp[0].str));
        (yyval.node) = lnode;
    }
#line 2045 "sql_parser.tab.c"
    break;

  case 67: /* opt_limit: %empty  */
#line 329 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 2051 "sql_parser.tab.c"
    break;

  case 68: /* insert_stmt: INSERT INTO IDENTIFIER VALUES insert_values_list  */
#line 335 "sql_parser.y"
                                                     {
        ASTNode *inode = ast_create_node(AST_INSERT, "INSERT_STMT", (yyvsp[-2].str));
        ast_add_child(inode, (yyvsp[0].node));
        free((yyvsp[-2].str));
        (yyval.node) = inode;
    }
#line 2062 "sql_parser.tab.c"
    break;

  case 69: /* insert_stmt: INSERT INTO IDENTIFIER LPAREN expr_list RPAREN VALUES insert_values_list  */
#line 341 "sql_parser.y"
                                                                               {
        ASTNode *inode = ast_create_node(AST_INSERT, "INSERT_STMT", (yyvsp[-5].str));
        ast_add_child(inode, (yyvsp[-3].node));
        ast_add_child(inode, (yyvsp[0].node));
        free((yyvsp[-5].str));
        (yyval.node) = inode;
    }
#line 2074 "sql_parser.tab.c"
    break;

  case 70: /* insert_stmt: INSERT INTO IDENTIFIER select_stmt  */
#line 348 "sql_parser.y"
                                         {
        ASTNode *inode = ast_create_node(AST_INSERT, "INSERT_SELECT_STMT", (yyvsp[-1].str));
        ast_add_child(inode, (yyvsp[0].node));
        free((yyvsp[-1].str));
        (yyval.node) = inode;
    }
#line 2085 "sql_parser.tab.c"
    break;

  case 71: /* insert_values_list: tuple_list  */
#line 357 "sql_parser.y"
               { (yyval.node) = (yyvsp[0].node); }
#line 2091 "sql_parser.tab.c"
    break;

  case 72: /* tuple_list: tuple_list COMMA tuple  */
#line 361 "sql_parser.y"
                           {
        ast_add_child((yyvsp[-2].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-2].node);
    }
#line 2100 "sql_parser.tab.c"
    break;

  case 73: /* tuple_list: tuple  */
#line 365 "sql_parser.y"
            {
        ASTNode *vlist = ast_create_node(AST_VALUES_LIST, "VALUES_LIST", NULL);
        ast_add_child(vlist, (yyvsp[0].node));
        (yyval.node) = vlist;
    }
#line 2110 "sql_parser.tab.c"
    break;

  case 74: /* tuple: LPAREN expr_list RPAREN  */
#line 373 "sql_parser.y"
                            {
        ASTNode *t = ast_create_node(AST_TUPLE, "TUPLE", NULL);
        ast_add_child(t, (yyvsp[-1].node));
        (yyval.node) = t;
    }
#line 2120 "sql_parser.tab.c"
    break;

  case 75: /* update_stmt: UPDATE IDENTIFIER SET assignment_list opt_where  */
#line 383 "sql_parser.y"
                                                    {
        ASTNode *unode = ast_create_node(AST_UPDATE, "UPDATE_STMT", (yyvsp[-3].str));
        ast_add_child(unode, (yyvsp[-1].node));
        if ((yyvsp[0].node)) ast_add_child(unode, (yyvsp[0].node));
        free((yyvsp[-3].str));
        (yyval.node) = unode;
    }
#line 2132 "sql_parser.tab.c"
    break;

  case 76: /* assignment_list: assignment_list COMMA assignment  */
#line 393 "sql_parser.y"
                                     {
        ast_add_child((yyvsp[-2].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-2].node);
    }
#line 2141 "sql_parser.tab.c"
    break;

  case 77: /* assignment_list: assignment  */
#line 397 "sql_parser.y"
                 {
        ASTNode *alist = ast_create_node(AST_ASSIGN_LIST, "ASSIGNMENT_LIST", NULL);
        ast_add_child(alist, (yyvsp[0].node));
        (yyval.node) = alist;
    }
#line 2151 "sql_parser.tab.c"
    break;

  case 78: /* assignment: IDENTIFIER EQ expr  */
#line 405 "sql_parser.y"
                       {
        ASTNode *assign = ast_create_node(AST_ASSIGNMENT, "ASSIGN", (yyvsp[-2].str));
        ast_add_child(assign, (yyvsp[0].node));
        free((yyvsp[-2].str));
        (yyval.node) = assign;
    }
#line 2162 "sql_parser.tab.c"
    break;

  case 79: /* delete_stmt: DELETE FROM IDENTIFIER opt_where  */
#line 416 "sql_parser.y"
                                     {
        ASTNode *dnode = ast_create_node(AST_DELETE, "DELETE_STMT", (yyvsp[-1].str));
        if ((yyvsp[0].node)) ast_add_child(dnode, (yyvsp[0].node));
        free((yyvsp[-1].str));
        (yyval.node) = dnode;
    }
#line 2173 "sql_parser.tab.c"
    break;

  case 80: /* create_table_stmt: CREATE TABLE IDENTIFIER LPAREN column_def_list RPAREN  */
#line 427 "sql_parser.y"
                                                          {
        ASTNode *cnode = ast_create_node(AST_CREATE_TABLE, "CREATE_TABLE_STMT", (yyvsp[-3].str));
        ast_add_child(cnode, (yyvsp[-1].node));
        free((yyvsp[-3].str));
        (yyval.node) = cnode;
    }
#line 2184 "sql_parser.tab.c"
    break;

  case 81: /* create_table_stmt: CREATE TABLE IF_KW NOT_KW EXISTS IDENTIFIER LPAREN column_def_list RPAREN  */
#line 433 "sql_parser.y"
                                                                                {
        ASTNode *cnode = ast_create_node(AST_CREATE_TABLE, "CREATE_TABLE_IF_NOT_EXISTS", (yyvsp[-3].str));
        ast_add_child(cnode, (yyvsp[-1].node));
        free((yyvsp[-3].str));
        (yyval.node) = cnode;
    }
#line 2195 "sql_parser.tab.c"
    break;

  case 82: /* column_def_list: column_def_list COMMA column_def  */
#line 442 "sql_parser.y"
                                     {
        ast_add_child((yyvsp[-2].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-2].node);
    }
#line 2204 "sql_parser.tab.c"
    break;

  case 83: /* column_def_list: column_def  */
#line 446 "sql_parser.y"
                 {
        ASTNode *cdlist = ast_create_node(AST_COL_DEF_LIST, "COLUMN_DEF_LIST", NULL);
        ast_add_child(cdlist, (yyvsp[0].node));
        (yyval.node) = cdlist;
    }
#line 2214 "sql_parser.tab.c"
    break;

  case 84: /* column_def: IDENTIFIER data_type opt_column_constraints  */
#line 454 "sql_parser.y"
                                                {
        ASTNode *cdef = ast_create_node(AST_COL_DEF, "COLUMN", (yyvsp[-2].str));
        ast_add_child(cdef, (yyvsp[-1].node));
        if ((yyvsp[0].node)) ast_add_child(cdef, (yyvsp[0].node));
        free((yyvsp[-2].str));
        (yyval.node) = cdef;
    }
#line 2226 "sql_parser.tab.c"
    break;

  case 85: /* column_def: PRIMARY KEY LPAREN IDENTIFIER RPAREN  */
#line 461 "sql_parser.y"
                                           {
        ASTNode *pk = ast_create_node(AST_CONSTRAINT, "PRIMARY_KEY", (yyvsp[-1].str));
        free((yyvsp[-1].str));
        (yyval.node) = pk;
    }
#line 2236 "sql_parser.tab.c"
    break;

  case 86: /* column_def: FOREIGN KEY LPAREN IDENTIFIER RPAREN REFERENCES IDENTIFIER LPAREN IDENTIFIER RPAREN  */
#line 466 "sql_parser.y"
                                                                                          {
        char buf[256];
        snprintf(buf, sizeof(buf), "(%s) REFERENCES %s(%s)", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-1].str));
        ASTNode *fk = ast_create_node(AST_CONSTRAINT, "FOREIGN_KEY", buf);
        free((yyvsp[-6].str)); free((yyvsp[-3].str)); free((yyvsp[-1].str));
        (yyval.node) = fk;
    }
#line 2248 "sql_parser.tab.c"
    break;

  case 87: /* column_def: CONSTRAINT IDENTIFIER PRIMARY KEY LPAREN IDENTIFIER RPAREN  */
#line 473 "sql_parser.y"
                                                                 {
        ASTNode *pk = ast_create_node(AST_CONSTRAINT, "PRIMARY_KEY", (yyvsp[-1].str));
        free((yyvsp[-5].str)); free((yyvsp[-1].str));
        (yyval.node) = pk;
    }
#line 2258 "sql_parser.tab.c"
    break;

  case 88: /* column_def: CONSTRAINT IDENTIFIER FOREIGN KEY LPAREN IDENTIFIER RPAREN REFERENCES IDENTIFIER LPAREN IDENTIFIER RPAREN  */
#line 478 "sql_parser.y"
                                                                                                                {
        char buf[256];
        snprintf(buf, sizeof(buf), "(%s) REFERENCES %s(%s)", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-1].str));
        ASTNode *fk = ast_create_node(AST_CONSTRAINT, "FOREIGN_KEY", buf);
        free((yyvsp[-10].str)); free((yyvsp[-6].str)); free((yyvsp[-3].str)); free((yyvsp[-1].str));
        (yyval.node) = fk;
    }
#line 2270 "sql_parser.tab.c"
    break;

  case 89: /* column_def: CHECK LPAREN expr RPAREN  */
#line 485 "sql_parser.y"
                               {
        ASTNode *cnode = ast_create_node(AST_CONSTRAINT, "TABLE_CHECK", NULL);
        ast_add_child(cnode, (yyvsp[-1].node));
        (yyval.node) = cnode;
    }
#line 2280 "sql_parser.tab.c"
    break;

  case 90: /* column_def: CONSTRAINT IDENTIFIER CHECK LPAREN expr RPAREN  */
#line 490 "sql_parser.y"
                                                     {
        ASTNode *cnode = ast_create_node(AST_CONSTRAINT, "TABLE_CHECK", (yyvsp[-4].str));
        ast_add_child(cnode, (yyvsp[-1].node));
        free((yyvsp[-4].str));
        (yyval.node) = cnode;
    }
#line 2291 "sql_parser.tab.c"
    break;

  case 91: /* data_type: INT_TYPE  */
#line 499 "sql_parser.y"
             { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "INT"); }
#line 2297 "sql_parser.tab.c"
    break;

  case 92: /* data_type: BIGINT_TYPE  */
#line 500 "sql_parser.y"
                  { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "BIGINT"); }
#line 2303 "sql_parser.tab.c"
    break;

  case 93: /* data_type: SMALLINT_TYPE  */
#line 501 "sql_parser.y"
                    { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "SMALLINT"); }
#line 2309 "sql_parser.tab.c"
    break;

  case 94: /* data_type: TINYINT_TYPE  */
#line 502 "sql_parser.y"
                   { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "TINYINT"); }
#line 2315 "sql_parser.tab.c"
    break;

  case 95: /* data_type: NUMBER_TYPE  */
#line 503 "sql_parser.y"
                  { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "NUMBER"); }
#line 2321 "sql_parser.tab.c"
    break;

  case 96: /* data_type: NUMBER_TYPE LPAREN INT_LITERAL RPAREN  */
#line 504 "sql_parser.y"
                                            {
        char buf[64];
        snprintf(buf, sizeof(buf), "NUMBER(%s)", (yyvsp[-1].str));
        free((yyvsp[-1].str));
        (yyval.node) = ast_create_node(AST_OTHER, "TYPE", buf);
    }
#line 2332 "sql_parser.tab.c"
    break;

  case 97: /* data_type: NUMBER_TYPE LPAREN INT_LITERAL COMMA INT_LITERAL RPAREN  */
#line 510 "sql_parser.y"
                                                              {
        char buf[64];
        snprintf(buf, sizeof(buf), "NUMBER(%s,%s)", (yyvsp[-3].str), (yyvsp[-1].str));
        free((yyvsp[-3].str)); free((yyvsp[-1].str));
        (yyval.node) = ast_create_node(AST_OTHER, "TYPE", buf);
    }
#line 2343 "sql_parser.tab.c"
    break;

  case 98: /* data_type: NUMERIC_TYPE  */
#line 516 "sql_parser.y"
                   { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "NUMERIC"); }
#line 2349 "sql_parser.tab.c"
    break;

  case 99: /* data_type: NUMERIC_TYPE LPAREN INT_LITERAL COMMA INT_LITERAL RPAREN  */
#line 517 "sql_parser.y"
                                                               {
        char buf[64];
        snprintf(buf, sizeof(buf), "NUMERIC(%s,%s)", (yyvsp[-3].str), (yyvsp[-1].str));
        free((yyvsp[-3].str)); free((yyvsp[-1].str));
        (yyval.node) = ast_create_node(AST_OTHER, "TYPE", buf);
    }
#line 2360 "sql_parser.tab.c"
    break;

  case 100: /* data_type: VARCHAR_TYPE LPAREN INT_LITERAL RPAREN  */
#line 523 "sql_parser.y"
                                             {
        char buf[64];
        snprintf(buf, sizeof(buf), "VARCHAR(%s)", (yyvsp[-1].str));
        free((yyvsp[-1].str));
        (yyval.node) = ast_create_node(AST_OTHER, "TYPE", buf);
    }
#line 2371 "sql_parser.tab.c"
    break;

  case 101: /* data_type: VARCHAR2_TYPE LPAREN INT_LITERAL RPAREN  */
#line 529 "sql_parser.y"
                                              {
        char buf[64];
        snprintf(buf, sizeof(buf), "VARCHAR2(%s)", (yyvsp[-1].str));
        free((yyvsp[-1].str));
        (yyval.node) = ast_create_node(AST_OTHER, "TYPE", buf);
    }
#line 2382 "sql_parser.tab.c"
    break;

  case 102: /* data_type: CHAR_TYPE  */
#line 535 "sql_parser.y"
                { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "CHAR"); }
#line 2388 "sql_parser.tab.c"
    break;

  case 103: /* data_type: CHAR_TYPE LPAREN INT_LITERAL RPAREN  */
#line 536 "sql_parser.y"
                                          {
        char buf[64];
        snprintf(buf, sizeof(buf), "CHAR(%s)", (yyvsp[-1].str));
        free((yyvsp[-1].str));
        (yyval.node) = ast_create_node(AST_OTHER, "TYPE", buf);
    }
#line 2399 "sql_parser.tab.c"
    break;

  case 104: /* data_type: TEXT_TYPE  */
#line 542 "sql_parser.y"
                { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "TEXT"); }
#line 2405 "sql_parser.tab.c"
    break;

  case 105: /* data_type: FLOAT_TYPE  */
#line 543 "sql_parser.y"
                 { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "FLOAT"); }
#line 2411 "sql_parser.tab.c"
    break;

  case 106: /* data_type: DOUBLE_TYPE  */
#line 544 "sql_parser.y"
                  { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "DOUBLE"); }
#line 2417 "sql_parser.tab.c"
    break;

  case 107: /* data_type: REAL_TYPE  */
#line 545 "sql_parser.y"
                { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "REAL"); }
#line 2423 "sql_parser.tab.c"
    break;

  case 108: /* data_type: DECIMAL_TYPE  */
#line 546 "sql_parser.y"
                   { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "DECIMAL"); }
#line 2429 "sql_parser.tab.c"
    break;

  case 109: /* data_type: DECIMAL_TYPE LPAREN INT_LITERAL COMMA INT_LITERAL RPAREN  */
#line 547 "sql_parser.y"
                                                               {
        char buf[64];
        snprintf(buf, sizeof(buf), "DECIMAL(%s,%s)", (yyvsp[-3].str), (yyvsp[-1].str));
        free((yyvsp[-3].str)); free((yyvsp[-1].str));
        (yyval.node) = ast_create_node(AST_OTHER, "TYPE", buf);
    }
#line 2440 "sql_parser.tab.c"
    break;

  case 110: /* data_type: BOOLEAN_TYPE  */
#line 553 "sql_parser.y"
                   { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "BOOLEAN"); }
#line 2446 "sql_parser.tab.c"
    break;

  case 111: /* data_type: DATE_TYPE  */
#line 554 "sql_parser.y"
                { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "DATE"); }
#line 2452 "sql_parser.tab.c"
    break;

  case 112: /* data_type: DATETIME_TYPE  */
#line 555 "sql_parser.y"
                    { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "DATETIME"); }
#line 2458 "sql_parser.tab.c"
    break;

  case 113: /* data_type: TIMESTAMP_TYPE  */
#line 556 "sql_parser.y"
                     { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "TIMESTAMP"); }
#line 2464 "sql_parser.tab.c"
    break;

  case 114: /* data_type: BLOB_TYPE  */
#line 557 "sql_parser.y"
                { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "BLOB"); }
#line 2470 "sql_parser.tab.c"
    break;

  case 115: /* data_type: CLOB_TYPE  */
#line 558 "sql_parser.y"
                { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "CLOB"); }
#line 2476 "sql_parser.tab.c"
    break;

  case 116: /* opt_column_constraints: opt_column_constraints column_constraint  */
#line 562 "sql_parser.y"
                                             {
        if ((yyvsp[-1].node)) {
            ast_add_child((yyvsp[-1].node), (yyvsp[0].node));
            (yyval.node) = (yyvsp[-1].node);
        } else {
            ASTNode *clist = ast_create_node(AST_OTHER, "CONSTRAINTS", NULL);
            ast_add_child(clist, (yyvsp[0].node));
            (yyval.node) = clist;
        }
    }
#line 2491 "sql_parser.tab.c"
    break;

  case 117: /* opt_column_constraints: %empty  */
#line 572 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 2497 "sql_parser.tab.c"
    break;

  case 118: /* column_constraint: PRIMARY KEY  */
#line 576 "sql_parser.y"
                { (yyval.node) = ast_create_node(AST_CONSTRAINT, "CONSTRAINT", "PRIMARY KEY"); }
#line 2503 "sql_parser.tab.c"
    break;

  case 119: /* column_constraint: NOT_KW NULL_KW  */
#line 577 "sql_parser.y"
                     { (yyval.node) = ast_create_node(AST_CONSTRAINT, "CONSTRAINT", "NOT NULL"); }
#line 2509 "sql_parser.tab.c"
    break;

  case 120: /* column_constraint: UNIQUE  */
#line 578 "sql_parser.y"
             { (yyval.node) = ast_create_node(AST_CONSTRAINT, "CONSTRAINT", "UNIQUE"); }
#line 2515 "sql_parser.tab.c"
    break;

  case 121: /* column_constraint: AUTO_INCREMENT  */
#line 579 "sql_parser.y"
                     { (yyval.node) = ast_create_node(AST_CONSTRAINT, "CONSTRAINT", "AUTO_INCREMENT"); }
#line 2521 "sql_parser.tab.c"
    break;

  case 122: /* column_constraint: DEFAULT expr  */
#line 580 "sql_parser.y"
                   {
        ASTNode *dnode = ast_create_node(AST_CONSTRAINT, "DEFAULT", NULL);
        ast_add_child(dnode, (yyvsp[0].node));
        (yyval.node) = dnode;
    }
#line 2531 "sql_parser.tab.c"
    break;

  case 123: /* column_constraint: CHECK LPAREN expr RPAREN  */
#line 585 "sql_parser.y"
                               {
        ASTNode *cnode = ast_create_node(AST_CONSTRAINT, "CHECK", NULL);
        ast_add_child(cnode, (yyvsp[-1].node));
        (yyval.node) = cnode;
    }
#line 2541 "sql_parser.tab.c"
    break;

  case 124: /* column_constraint: CONSTRAINT IDENTIFIER CHECK LPAREN expr RPAREN  */
#line 590 "sql_parser.y"
                                                     {
        ASTNode *cnode = ast_create_node(AST_CONSTRAINT, "CHECK", (yyvsp[-4].str));
        ast_add_child(cnode, (yyvsp[-1].node));
        free((yyvsp[-4].str));
        (yyval.node) = cnode;
    }
#line 2552 "sql_parser.tab.c"
    break;

  case 125: /* column_constraint: CONSTRAINT IDENTIFIER PRIMARY KEY  */
#line 596 "sql_parser.y"
                                        {
        ASTNode *cnode = ast_create_node(AST_CONSTRAINT, "PRIMARY_KEY", (yyvsp[-2].str));
        free((yyvsp[-2].str));
        (yyval.node) = cnode;
    }
#line 2562 "sql_parser.tab.c"
    break;

  case 126: /* column_constraint: CONSTRAINT IDENTIFIER UNIQUE  */
#line 601 "sql_parser.y"
                                   {
        ASTNode *cnode = ast_create_node(AST_CONSTRAINT, "UNIQUE", (yyvsp[-1].str));
        free((yyvsp[-1].str));
        (yyval.node) = cnode;
    }
#line 2572 "sql_parser.tab.c"
    break;

  case 127: /* alter_table_stmt: ALTER TABLE IDENTIFIER ADD opt_column column_def  */
#line 611 "sql_parser.y"
                                                     {
        ASTNode *anode = ast_create_node(AST_ALTER_TABLE, "ALTER_TABLE_ADD", (yyvsp[-3].str));
        ast_add_child(anode, (yyvsp[0].node));
        free((yyvsp[-3].str));
        (yyval.node) = anode;
    }
#line 2583 "sql_parser.tab.c"
    break;

  case 128: /* alter_table_stmt: ALTER TABLE IDENTIFIER ADD opt_column LPAREN column_def_list RPAREN  */
#line 617 "sql_parser.y"
                                                                          {
        ASTNode *anode = ast_create_node(AST_ALTER_TABLE, "ALTER_TABLE_ADD", (yyvsp[-5].str));
        ast_add_child(anode, (yyvsp[-1].node));
        free((yyvsp[-5].str));
        (yyval.node) = anode;
    }
#line 2594 "sql_parser.tab.c"
    break;

  case 129: /* alter_table_stmt: ALTER TABLE IDENTIFIER MODIFY opt_column column_def  */
#line 623 "sql_parser.y"
                                                          {
        ASTNode *anode = ast_create_node(AST_ALTER_TABLE, "ALTER_TABLE_MODIFY", (yyvsp[-3].str));
        ast_add_child(anode, (yyvsp[0].node));
        free((yyvsp[-3].str));
        (yyval.node) = anode;
    }
#line 2605 "sql_parser.tab.c"
    break;

  case 130: /* alter_table_stmt: ALTER TABLE IDENTIFIER MODIFY opt_column LPAREN column_def_list RPAREN  */
#line 629 "sql_parser.y"
                                                                             {
        ASTNode *anode = ast_create_node(AST_ALTER_TABLE, "ALTER_TABLE_MODIFY", (yyvsp[-5].str));
        ast_add_child(anode, (yyvsp[-1].node));
        free((yyvsp[-5].str));
        (yyval.node) = anode;
    }
#line 2616 "sql_parser.tab.c"
    break;

  case 131: /* alter_table_stmt: ALTER TABLE IDENTIFIER DROP opt_column IDENTIFIER  */
#line 635 "sql_parser.y"
                                                        {
        ASTNode *anode = ast_create_node(AST_ALTER_TABLE, "ALTER_TABLE_DROP", (yyvsp[-3].str));
        ast_add_child(anode, ast_create_node(AST_IDENTIFIER, "COLUMN", (yyvsp[0].str)));
        free((yyvsp[-3].str)); free((yyvsp[0].str));
        (yyval.node) = anode;
    }
#line 2627 "sql_parser.tab.c"
    break;

  case 132: /* alter_table_stmt: ALTER TABLE IDENTIFIER DROP opt_column LPAREN identifier_list RPAREN  */
#line 641 "sql_parser.y"
                                                                           {
        ASTNode *anode = ast_create_node(AST_ALTER_TABLE, "ALTER_TABLE_DROP", (yyvsp[-5].str));
        ast_add_child(anode, (yyvsp[-1].node));
        free((yyvsp[-5].str));
        (yyval.node) = anode;
    }
#line 2638 "sql_parser.tab.c"
    break;

  case 135: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 655 "sql_parser.y"
                                     {
        ast_add_child((yyvsp[-2].node), ast_create_node(AST_IDENTIFIER, "COLUMN", (yyvsp[0].str)));
        free((yyvsp[0].str));
        (yyval.node) = (yyvsp[-2].node);
    }
#line 2648 "sql_parser.tab.c"
    break;

  case 136: /* identifier_list: IDENTIFIER  */
#line 660 "sql_parser.y"
                 {
        ASTNode *ilist = ast_create_node(AST_OTHER, "COLUMN_LIST", NULL);
        ast_add_child(ilist, ast_create_node(AST_IDENTIFIER, "COLUMN", (yyvsp[0].str)));
        free((yyvsp[0].str));
        (yyval.node) = ilist;
    }
#line 2659 "sql_parser.tab.c"
    break;

  case 137: /* drop_table_stmt: DROP TABLE IDENTIFIER  */
#line 669 "sql_parser.y"
                          {
        ASTNode *dnode = ast_create_node(AST_DROP_TABLE, "DROP_TABLE", (yyvsp[0].str));
        free((yyvsp[0].str));
        (yyval.node) = dnode;
    }
#line 2669 "sql_parser.tab.c"
    break;

  case 138: /* drop_table_stmt: DROP TABLE IF_KW EXISTS IDENTIFIER  */
#line 674 "sql_parser.y"
                                         {
        ASTNode *dnode = ast_create_node(AST_DROP_TABLE, "DROP_TABLE_IF_EXISTS", (yyvsp[0].str));
        free((yyvsp[0].str));
        (yyval.node) = dnode;
    }
#line 2679 "sql_parser.tab.c"
    break;

  case 139: /* truncate_table_stmt: TRUNCATE TABLE IDENTIFIER  */
#line 682 "sql_parser.y"
                              {
        ASTNode *tnode = ast_create_node(AST_TRUNCATE_TABLE, "TRUNCATE_TABLE", (yyvsp[0].str));
        free((yyvsp[0].str));
        (yyval.node) = tnode;
    }
#line 2689 "sql_parser.tab.c"
    break;

  case 140: /* transaction_stmt: BEGIN_KW opt_transaction  */
#line 690 "sql_parser.y"
                             { (yyval.node) = ast_create_node(AST_TRANSACTION, "TRANSACTION", "BEGIN"); }
#line 2695 "sql_parser.tab.c"
    break;

  case 141: /* transaction_stmt: COMMIT  */
#line 691 "sql_parser.y"
             { (yyval.node) = ast_create_node(AST_TRANSACTION, "TRANSACTION", "COMMIT"); }
#line 2701 "sql_parser.tab.c"
    break;

  case 142: /* transaction_stmt: ROLLBACK  */
#line 692 "sql_parser.y"
               { (yyval.node) = ast_create_node(AST_TRANSACTION, "TRANSACTION", "ROLLBACK"); }
#line 2707 "sql_parser.tab.c"
    break;

  case 143: /* transaction_stmt: SAVEPOINT IDENTIFIER  */
#line 693 "sql_parser.y"
                           {
        ASTNode *snode = ast_create_node(AST_TRANSACTION, "SAVEPOINT", (yyvsp[0].str));
        free((yyvsp[0].str));
        (yyval.node) = snode;
    }
#line 2717 "sql_parser.tab.c"
    break;

  case 146: /* expr_list: expr_list COMMA expr  */
#line 708 "sql_parser.y"
                         {
        ast_add_child((yyvsp[-2].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-2].node);
    }
#line 2726 "sql_parser.tab.c"
    break;

  case 147: /* expr_list: expr  */
#line 712 "sql_parser.y"
           {
        ASTNode *elist = ast_create_node(AST_OTHER, "EXPR_LIST", NULL);
        ast_add_child(elist, (yyvsp[0].node));
        (yyval.node) = elist;
    }
#line 2736 "sql_parser.tab.c"
    break;

  case 148: /* expr: expr OR expr  */
#line 720 "sql_parser.y"
                 {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "OR");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2747 "sql_parser.tab.c"
    break;

  case 149: /* expr: expr AND expr  */
#line 726 "sql_parser.y"
                    {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "AND");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2758 "sql_parser.tab.c"
    break;

  case 150: /* expr: NOT_KW expr  */
#line 732 "sql_parser.y"
                  {
        ASTNode *unode = ast_create_node(AST_UNARY_EXPR, "OPERATOR", "NOT");
        ast_add_child(unode, (yyvsp[0].node));
        (yyval.node) = unode;
    }
#line 2768 "sql_parser.tab.c"
    break;

  case 151: /* expr: expr EQ expr  */
#line 737 "sql_parser.y"
                   {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "=");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2779 "sql_parser.tab.c"
    break;

  case 152: /* expr: expr NE expr  */
#line 743 "sql_parser.y"
                   {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "!=");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2790 "sql_parser.tab.c"
    break;

  case 153: /* expr: expr LT expr  */
#line 749 "sql_parser.y"
                   {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "<");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2801 "sql_parser.tab.c"
    break;

  case 154: /* expr: expr GT expr  */
#line 755 "sql_parser.y"
                   {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", ">");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2812 "sql_parser.tab.c"
    break;

  case 155: /* expr: expr LE expr  */
#line 761 "sql_parser.y"
                   {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "<=");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2823 "sql_parser.tab.c"
    break;

  case 156: /* expr: expr GE expr  */
#line 767 "sql_parser.y"
                   {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", ">=");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2834 "sql_parser.tab.c"
    break;

  case 157: /* expr: expr LIKE expr  */
#line 773 "sql_parser.y"
                     {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "LIKE");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2845 "sql_parser.tab.c"
    break;

  case 158: /* expr: expr IN LPAREN expr_list RPAREN  */
#line 779 "sql_parser.y"
                                      {
        ASTNode *inode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "IN");
        ast_add_child(inode, (yyvsp[-4].node));
        ast_add_child(inode, (yyvsp[-1].node));
        (yyval.node) = inode;
    }
#line 2856 "sql_parser.tab.c"
    break;

  case 159: /* expr: expr IN LPAREN select_stmt RPAREN  */
#line 785 "sql_parser.y"
                                        {
        ASTNode *inode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "IN_SUBQUERY");
        ast_add_child(inode, (yyvsp[-4].node));
        ast_add_child(inode, (yyvsp[-1].node));
        (yyval.node) = inode;
    }
#line 2867 "sql_parser.tab.c"
    break;

  case 160: /* expr: expr BETWEEN expr AND expr  */
#line 791 "sql_parser.y"
                                 {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "BETWEEN");
        ast_add_child(bnode, (yyvsp[-4].node));
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2879 "sql_parser.tab.c"
    break;

  case 161: /* expr: expr IS NULL_KW  */
#line 798 "sql_parser.y"
                      {
        ASTNode *unode = ast_create_node(AST_UNARY_EXPR, "OPERATOR", "IS NULL");
        ast_add_child(unode, (yyvsp[-2].node));
        (yyval.node) = unode;
    }
#line 2889 "sql_parser.tab.c"
    break;

  case 162: /* expr: expr IS NOT_KW NULL_KW  */
#line 803 "sql_parser.y"
                             {
        ASTNode *unode = ast_create_node(AST_UNARY_EXPR, "OPERATOR", "IS NOT NULL");
        ast_add_child(unode, (yyvsp[-3].node));
        (yyval.node) = unode;
    }
#line 2899 "sql_parser.tab.c"
    break;

  case 163: /* expr: expr PLUS expr  */
#line 808 "sql_parser.y"
                     {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "+");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2910 "sql_parser.tab.c"
    break;

  case 164: /* expr: expr MINUS expr  */
#line 814 "sql_parser.y"
                      {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "-");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2921 "sql_parser.tab.c"
    break;

  case 165: /* expr: expr STAR expr  */
#line 820 "sql_parser.y"
                     {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "*");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2932 "sql_parser.tab.c"
    break;

  case 166: /* expr: expr SLASH expr  */
#line 826 "sql_parser.y"
                      {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "/");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2943 "sql_parser.tab.c"
    break;

  case 167: /* expr: MINUS expr  */
#line 832 "sql_parser.y"
                             {
        ASTNode *unode = ast_create_node(AST_UNARY_EXPR, "OPERATOR", "NEGATE");
        ast_add_child(unode, (yyvsp[0].node));
        (yyval.node) = unode;
    }
#line 2953 "sql_parser.tab.c"
    break;

  case 168: /* expr: LPAREN expr RPAREN  */
#line 837 "sql_parser.y"
                         { (yyval.node) = (yyvsp[-1].node); }
#line 2959 "sql_parser.tab.c"
    break;

  case 169: /* expr: LPAREN select_stmt RPAREN  */
#line 838 "sql_parser.y"
                                {
        ASTNode *subq = ast_create_node(AST_SUBQUERY, "SUBQUERY", NULL);
        ast_add_child(subq, (yyvsp[-1].node));
        (yyval.node) = subq;
    }
#line 2969 "sql_parser.tab.c"
    break;

  case 170: /* expr: func_call  */
#line 843 "sql_parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2975 "sql_parser.tab.c"
    break;

  case 171: /* expr: case_expr  */
#line 844 "sql_parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2981 "sql_parser.tab.c"
    break;

  case 172: /* expr: IDENTIFIER  */
#line 845 "sql_parser.y"
                 {
        ASTNode *id = ast_create_node(AST_IDENTIFIER, "IDENTIFIER", (yyvsp[0].str));
        free((yyvsp[0].str));
        (yyval.node) = id;
    }
#line 2991 "sql_parser.tab.c"
    break;

  case 173: /* expr: IDENTIFIER DOT IDENTIFIER  */
#line 850 "sql_parser.y"
                                {
        char buf[256];
        snprintf(buf, sizeof(buf), "%s.%s", (yyvsp[-2].str), (yyvsp[0].str));
        free((yyvsp[-2].str)); free((yyvsp[0].str));
        (yyval.node) = ast_create_node(AST_IDENTIFIER, "COLUMN_REF", buf);
    }
#line 3002 "sql_parser.tab.c"
    break;

  case 174: /* expr: STRING_LITERAL  */
#line 856 "sql_parser.y"
                     {
        ASTNode *lit = ast_create_node(AST_LITERAL, "STRING", (yyvsp[0].str));
        free((yyvsp[0].str));
        (yyval.node) = lit;
    }
#line 3012 "sql_parser.tab.c"
    break;

  case 175: /* expr: INT_LITERAL  */
#line 861 "sql_parser.y"
                  {
        ASTNode *lit = ast_create_node(AST_LITERAL, "INT", (yyvsp[0].str));
        free((yyvsp[0].str));
        (yyval.node) = lit;
    }
#line 3022 "sql_parser.tab.c"
    break;

  case 176: /* expr: FLOAT_LITERAL  */
#line 866 "sql_parser.y"
                    {
        ASTNode *lit = ast_create_node(AST_LITERAL, "FLOAT", (yyvsp[0].str));
        free((yyvsp[0].str));
        (yyval.node) = lit;
    }
#line 3032 "sql_parser.tab.c"
    break;

  case 177: /* expr: NULL_KW  */
#line 871 "sql_parser.y"
              {
        (yyval.node) = ast_create_node(AST_LITERAL, "NULL", "NULL");
    }
#line 3040 "sql_parser.tab.c"
    break;

  case 178: /* func_call: aggregate_func LPAREN opt_distinct expr RPAREN  */
#line 877 "sql_parser.y"
                                                   {
        ASTNode *fnode = ast_create_node(AST_FUNC_CALL, "AGGREGATE_FUNC", (yyvsp[-4].node)->label);
        ast_add_child(fnode, (yyvsp[-1].node));
        ast_free((yyvsp[-4].node));
        (yyval.node) = fnode;
    }
#line 3051 "sql_parser.tab.c"
    break;

  case 179: /* func_call: aggregate_func LPAREN STAR RPAREN  */
#line 883 "sql_parser.y"
                                        {
        ASTNode *fnode = ast_create_node(AST_FUNC_CALL, "AGGREGATE_FUNC", (yyvsp[-3].node)->label);
        ast_add_child(fnode, ast_create_node(AST_FIELD, "FIELD", "*"));
        ast_free((yyvsp[-3].node));
        (yyval.node) = fnode;
    }
#line 3062 "sql_parser.tab.c"
    break;

  case 180: /* func_call: IDENTIFIER LPAREN opt_expr_list RPAREN  */
#line 889 "sql_parser.y"
                                             {
        ASTNode *fnode = ast_create_node(AST_FUNC_CALL, "FUNC_CALL", (yyvsp[-3].str));
        if ((yyvsp[-1].node)) ast_add_child(fnode, (yyvsp[-1].node));
        free((yyvsp[-3].str));
        (yyval.node) = fnode;
    }
#line 3073 "sql_parser.tab.c"
    break;

  case 181: /* opt_expr_list: expr_list  */
#line 898 "sql_parser.y"
              { (yyval.node) = (yyvsp[0].node); }
#line 3079 "sql_parser.tab.c"
    break;

  case 182: /* opt_expr_list: %empty  */
#line 899 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 3085 "sql_parser.tab.c"
    break;

  case 183: /* aggregate_func: COUNT  */
#line 903 "sql_parser.y"
          { (yyval.node) = ast_create_node(AST_OTHER, "COUNT", NULL); }
#line 3091 "sql_parser.tab.c"
    break;

  case 184: /* aggregate_func: SUM  */
#line 904 "sql_parser.y"
          { (yyval.node) = ast_create_node(AST_OTHER, "SUM", NULL); }
#line 3097 "sql_parser.tab.c"
    break;

  case 185: /* aggregate_func: AVG  */
#line 905 "sql_parser.y"
          { (yyval.node) = ast_create_node(AST_OTHER, "AVG", NULL); }
#line 3103 "sql_parser.tab.c"
    break;

  case 186: /* aggregate_func: MIN  */
#line 906 "sql_parser.y"
          { (yyval.node) = ast_create_node(AST_OTHER, "MIN", NULL); }
#line 3109 "sql_parser.tab.c"
    break;

  case 187: /* aggregate_func: MAX  */
#line 907 "sql_parser.y"
          { (yyval.node) = ast_create_node(AST_OTHER, "MAX", NULL); }
#line 3115 "sql_parser.tab.c"
    break;

  case 188: /* case_expr: CASE when_then_list opt_else END  */
#line 911 "sql_parser.y"
                                     {
        ASTNode *cnode = ast_create_node(AST_CASE_EXPR, "CASE_EXPR", NULL);
        ast_add_child(cnode, (yyvsp[-2].node));
        if ((yyvsp[-1].node)) ast_add_child(cnode, (yyvsp[-1].node));
        (yyval.node) = cnode;
    }
#line 3126 "sql_parser.tab.c"
    break;

  case 189: /* when_then_list: when_then_list when_then_clause  */
#line 920 "sql_parser.y"
                                    {
        ast_add_child((yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3135 "sql_parser.tab.c"
    break;

  case 190: /* when_then_list: when_then_clause  */
#line 924 "sql_parser.y"
                       {
        ASTNode *wtlist = ast_create_node(AST_OTHER, "WHEN_THEN_LIST", NULL);
        ast_add_child(wtlist, (yyvsp[0].node));
        (yyval.node) = wtlist;
    }
#line 3145 "sql_parser.tab.c"
    break;

  case 191: /* when_then_clause: WHEN expr THEN expr  */
#line 932 "sql_parser.y"
                        {
        ASTNode *wt = ast_create_node(AST_WHEN_THEN, "WHEN_THEN", NULL);
        ast_add_child(wt, (yyvsp[-2].node));
        ast_add_child(wt, (yyvsp[0].node));
        (yyval.node) = wt;
    }
#line 3156 "sql_parser.tab.c"
    break;

  case 192: /* opt_else: ELSE expr  */
#line 941 "sql_parser.y"
              {
        ASTNode *enode = ast_create_node(AST_OTHER, "ELSE", NULL);
        ast_add_child(enode, (yyvsp[0].node));
        (yyval.node) = enode;
    }
#line 3166 "sql_parser.tab.c"
    break;

  case 193: /* opt_else: %empty  */
#line 946 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 3172 "sql_parser.tab.c"
    break;


#line 3176 "sql_parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 949 "sql_parser.y"


void yyerror(const char *s) {
    g_syntax_error = 1;
    g_error_line = yylineno;
    g_error_column = yycolumn;
    snprintf(g_last_error, sizeof(g_last_error), "%s near '%s'", s, yytext ? yytext : "");
}
