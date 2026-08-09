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
  YYSYMBOL_DROP = 27,                      /* DROP  */
  YYSYMBOL_TRUNCATE = 28,                  /* TRUNCATE  */
  YYSYMBOL_RENAME = 29,                    /* RENAME  */
  YYSYMBOL_TO = 30,                        /* TO  */
  YYSYMBOL_COLUMN = 31,                    /* COLUMN  */
  YYSYMBOL_INDEX = 32,                     /* INDEX  */
  YYSYMBOL_PRIMARY = 33,                   /* PRIMARY  */
  YYSYMBOL_KEY = 34,                       /* KEY  */
  YYSYMBOL_FOREIGN = 35,                   /* FOREIGN  */
  YYSYMBOL_REFERENCES = 36,                /* REFERENCES  */
  YYSYMBOL_NULL_KW = 37,                   /* NULL_KW  */
  YYSYMBOL_UNIQUE = 38,                    /* UNIQUE  */
  YYSYMBOL_DEFAULT = 39,                   /* DEFAULT  */
  YYSYMBOL_CHECK = 40,                     /* CHECK  */
  YYSYMBOL_CONSTRAINT = 41,                /* CONSTRAINT  */
  YYSYMBOL_AUTO_INCREMENT = 42,            /* AUTO_INCREMENT  */
  YYSYMBOL_INT_TYPE = 43,                  /* INT_TYPE  */
  YYSYMBOL_VARCHAR_TYPE = 44,              /* VARCHAR_TYPE  */
  YYSYMBOL_CHAR_TYPE = 45,                 /* CHAR_TYPE  */
  YYSYMBOL_TEXT_TYPE = 46,                 /* TEXT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 47,                /* FLOAT_TYPE  */
  YYSYMBOL_DOUBLE_TYPE = 48,               /* DOUBLE_TYPE  */
  YYSYMBOL_DECIMAL_TYPE = 49,              /* DECIMAL_TYPE  */
  YYSYMBOL_BOOLEAN_TYPE = 50,              /* BOOLEAN_TYPE  */
  YYSYMBOL_DATE_TYPE = 51,                 /* DATE_TYPE  */
  YYSYMBOL_TIMESTAMP_TYPE = 52,            /* TIMESTAMP_TYPE  */
  YYSYMBOL_JOIN = 53,                      /* JOIN  */
  YYSYMBOL_INNER = 54,                     /* INNER  */
  YYSYMBOL_LEFT = 55,                      /* LEFT  */
  YYSYMBOL_RIGHT = 56,                     /* RIGHT  */
  YYSYMBOL_FULL = 57,                      /* FULL  */
  YYSYMBOL_OUTER = 58,                     /* OUTER  */
  YYSYMBOL_CROSS = 59,                     /* CROSS  */
  YYSYMBOL_ON = 60,                        /* ON  */
  YYSYMBOL_USING = 61,                     /* USING  */
  YYSYMBOL_UNION = 62,                     /* UNION  */
  YYSYMBOL_INTERSECT = 63,                 /* INTERSECT  */
  YYSYMBOL_EXCEPT = 64,                    /* EXCEPT  */
  YYSYMBOL_AND = 65,                       /* AND  */
  YYSYMBOL_OR = 66,                        /* OR  */
  YYSYMBOL_NOT_KW = 67,                    /* NOT_KW  */
  YYSYMBOL_LIKE = 68,                      /* LIKE  */
  YYSYMBOL_IN = 69,                        /* IN  */
  YYSYMBOL_BETWEEN = 70,                   /* BETWEEN  */
  YYSYMBOL_IS = 71,                        /* IS  */
  YYSYMBOL_EXISTS = 72,                    /* EXISTS  */
  YYSYMBOL_CASE = 73,                      /* CASE  */
  YYSYMBOL_WHEN = 74,                      /* WHEN  */
  YYSYMBOL_THEN = 75,                      /* THEN  */
  YYSYMBOL_ELSE = 76,                      /* ELSE  */
  YYSYMBOL_END = 77,                       /* END  */
  YYSYMBOL_IF_KW = 78,                     /* IF_KW  */
  YYSYMBOL_BEGIN_KW = 79,                  /* BEGIN_KW  */
  YYSYMBOL_TRANSACTION = 80,               /* TRANSACTION  */
  YYSYMBOL_COMMIT = 81,                    /* COMMIT  */
  YYSYMBOL_ROLLBACK = 82,                  /* ROLLBACK  */
  YYSYMBOL_SAVEPOINT = 83,                 /* SAVEPOINT  */
  YYSYMBOL_COUNT = 84,                     /* COUNT  */
  YYSYMBOL_SUM = 85,                       /* SUM  */
  YYSYMBOL_AVG = 86,                       /* AVG  */
  YYSYMBOL_MIN = 87,                       /* MIN  */
  YYSYMBOL_MAX = 88,                       /* MAX  */
  YYSYMBOL_IDENTIFIER = 89,                /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 90,            /* STRING_LITERAL  */
  YYSYMBOL_INT_LITERAL = 91,               /* INT_LITERAL  */
  YYSYMBOL_FLOAT_LITERAL = 92,             /* FLOAT_LITERAL  */
  YYSYMBOL_EQ = 93,                        /* EQ  */
  YYSYMBOL_NE = 94,                        /* NE  */
  YYSYMBOL_LT = 95,                        /* LT  */
  YYSYMBOL_GT = 96,                        /* GT  */
  YYSYMBOL_LE = 97,                        /* LE  */
  YYSYMBOL_GE = 98,                        /* GE  */
  YYSYMBOL_PLUS = 99,                      /* PLUS  */
  YYSYMBOL_MINUS = 100,                    /* MINUS  */
  YYSYMBOL_STAR = 101,                     /* STAR  */
  YYSYMBOL_SLASH = 102,                    /* SLASH  */
  YYSYMBOL_MOD = 103,                      /* MOD  */
  YYSYMBOL_CONCAT = 104,                   /* CONCAT  */
  YYSYMBOL_COMMA = 105,                    /* COMMA  */
  YYSYMBOL_SEMICOLON = 106,                /* SEMICOLON  */
  YYSYMBOL_LPAREN = 107,                   /* LPAREN  */
  YYSYMBOL_RPAREN = 108,                   /* RPAREN  */
  YYSYMBOL_DOT = 109,                      /* DOT  */
  YYSYMBOL_UNARY = 110,                    /* UNARY  */
  YYSYMBOL_YYACCEPT = 111,                 /* $accept  */
  YYSYMBOL_query_script = 112,             /* query_script  */
  YYSYMBOL_opt_semicolon = 113,            /* opt_semicolon  */
  YYSYMBOL_statement_list = 114,           /* statement_list  */
  YYSYMBOL_statement = 115,                /* statement  */
  YYSYMBOL_select_stmt = 116,              /* select_stmt  */
  YYSYMBOL_opt_all = 117,                  /* opt_all  */
  YYSYMBOL_select_expr = 118,              /* select_expr  */
  YYSYMBOL_opt_distinct = 119,             /* opt_distinct  */
  YYSYMBOL_target_list = 120,              /* target_list  */
  YYSYMBOL_target_item = 121,              /* target_item  */
  YYSYMBOL_opt_alias = 122,                /* opt_alias  */
  YYSYMBOL_opt_from = 123,                 /* opt_from  */
  YYSYMBOL_from_clause = 124,              /* from_clause  */
  YYSYMBOL_table_ref_list = 125,           /* table_ref_list  */
  YYSYMBOL_table_ref = 126,                /* table_ref  */
  YYSYMBOL_join_type = 127,                /* join_type  */
  YYSYMBOL_opt_where = 128,                /* opt_where  */
  YYSYMBOL_opt_group_by = 129,             /* opt_group_by  */
  YYSYMBOL_opt_having = 130,               /* opt_having  */
  YYSYMBOL_opt_order_by = 131,             /* opt_order_by  */
  YYSYMBOL_order_item_list = 132,          /* order_item_list  */
  YYSYMBOL_order_item = 133,               /* order_item  */
  YYSYMBOL_opt_asc_desc = 134,             /* opt_asc_desc  */
  YYSYMBOL_opt_limit = 135,                /* opt_limit  */
  YYSYMBOL_insert_stmt = 136,              /* insert_stmt  */
  YYSYMBOL_insert_values_list = 137,       /* insert_values_list  */
  YYSYMBOL_tuple_list = 138,               /* tuple_list  */
  YYSYMBOL_tuple = 139,                    /* tuple  */
  YYSYMBOL_update_stmt = 140,              /* update_stmt  */
  YYSYMBOL_assignment_list = 141,          /* assignment_list  */
  YYSYMBOL_assignment = 142,               /* assignment  */
  YYSYMBOL_delete_stmt = 143,              /* delete_stmt  */
  YYSYMBOL_create_table_stmt = 144,        /* create_table_stmt  */
  YYSYMBOL_column_def_list = 145,          /* column_def_list  */
  YYSYMBOL_column_def = 146,               /* column_def  */
  YYSYMBOL_data_type = 147,                /* data_type  */
  YYSYMBOL_opt_column_constraints = 148,   /* opt_column_constraints  */
  YYSYMBOL_column_constraint = 149,        /* column_constraint  */
  YYSYMBOL_alter_table_stmt = 150,         /* alter_table_stmt  */
  YYSYMBOL_drop_table_stmt = 151,          /* drop_table_stmt  */
  YYSYMBOL_truncate_table_stmt = 152,      /* truncate_table_stmt  */
  YYSYMBOL_transaction_stmt = 153,         /* transaction_stmt  */
  YYSYMBOL_opt_transaction = 154,          /* opt_transaction  */
  YYSYMBOL_expr_list = 155,                /* expr_list  */
  YYSYMBOL_expr = 156,                     /* expr  */
  YYSYMBOL_func_call = 157,                /* func_call  */
  YYSYMBOL_opt_expr_list = 158,            /* opt_expr_list  */
  YYSYMBOL_aggregate_func = 159,           /* aggregate_func  */
  YYSYMBOL_case_expr = 160,                /* case_expr  */
  YYSYMBOL_when_then_list = 161,           /* when_then_list  */
  YYSYMBOL_when_then_clause = 162,         /* when_then_clause  */
  YYSYMBOL_opt_else = 163                  /* opt_else  */
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
#define YYLAST   462

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  162
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  312

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   365


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
     105,   106,   107,   108,   109,   110
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    73,    73,    77,    84,    85,    89,    95,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   119,   120,   126,
     132,   141,   142,   146,   160,   161,   162,   166,   170,   178,
     181,   187,   188,   189,   193,   194,   198,   206,   210,   218,
     223,   229,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   252,   257,   261,   266,   270,   275,   279,   284,   288,
     292,   300,   309,   310,   311,   315,   320,   327,   333,   339,
     346,   355,   359,   363,   371,   381,   391,   395,   403,   414,
     425,   431,   440,   444,   452,   459,   464,   474,   475,   481,
     487,   488,   489,   490,   496,   497,   498,   502,   512,   516,
     517,   518,   519,   520,   530,   536,   545,   550,   558,   566,
     567,   568,   569,   577,   578,   584,   588,   596,   602,   608,
     613,   619,   625,   631,   637,   643,   649,   655,   661,   667,
     674,   679,   684,   690,   696,   702,   708,   713,   714,   719,
     720,   721,   726,   732,   737,   742,   747,   753,   759,   765,
     774,   775,   779,   780,   781,   782,   783,   787,   796,   800,
     808,   817,   822
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
  "SET", "DELETE", "CREATE", "TABLE", "ALTER", "ADD", "DROP", "TRUNCATE",
  "RENAME", "TO", "COLUMN", "INDEX", "PRIMARY", "KEY", "FOREIGN",
  "REFERENCES", "NULL_KW", "UNIQUE", "DEFAULT", "CHECK", "CONSTRAINT",
  "AUTO_INCREMENT", "INT_TYPE", "VARCHAR_TYPE", "CHAR_TYPE", "TEXT_TYPE",
  "FLOAT_TYPE", "DOUBLE_TYPE", "DECIMAL_TYPE", "BOOLEAN_TYPE", "DATE_TYPE",
  "TIMESTAMP_TYPE", "JOIN", "INNER", "LEFT", "RIGHT", "FULL", "OUTER",
  "CROSS", "ON", "USING", "UNION", "INTERSECT", "EXCEPT", "AND", "OR",
  "NOT_KW", "LIKE", "IN", "BETWEEN", "IS", "EXISTS", "CASE", "WHEN",
  "THEN", "ELSE", "END", "IF_KW", "BEGIN_KW", "TRANSACTION", "COMMIT",
  "ROLLBACK", "SAVEPOINT", "COUNT", "SUM", "AVG", "MIN", "MAX",
  "IDENTIFIER", "STRING_LITERAL", "INT_LITERAL", "FLOAT_LITERAL", "EQ",
  "NE", "LT", "GT", "LE", "GE", "PLUS", "MINUS", "STAR", "SLASH", "MOD",
  "CONCAT", "COMMA", "SEMICOLON", "LPAREN", "RPAREN", "DOT", "UNARY",
  "$accept", "query_script", "opt_semicolon", "statement_list",
  "statement", "select_stmt", "opt_all", "select_expr", "opt_distinct",
  "target_list", "target_item", "opt_alias", "opt_from", "from_clause",
  "table_ref_list", "table_ref", "join_type", "opt_where", "opt_group_by",
  "opt_having", "opt_order_by", "order_item_list", "order_item",
  "opt_asc_desc", "opt_limit", "insert_stmt", "insert_values_list",
  "tuple_list", "tuple", "update_stmt", "assignment_list", "assignment",
  "delete_stmt", "create_table_stmt", "column_def_list", "column_def",
  "data_type", "opt_column_constraints", "column_constraint",
  "alter_table_stmt", "drop_table_stmt", "truncate_table_stmt",
  "transaction_stmt", "opt_transaction", "expr_list", "expr", "func_call",
  "opt_expr_list", "aggregate_func", "case_expr", "when_then_list",
  "when_then_clause", "opt_else", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-169)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-119)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     208,    85,    14,   -67,    44,    26,    30,    47,    72,   -22,
    -169,  -169,    42,   119,    45,  -169,    75,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,    57,    78,
     147,    80,   -48,    93,   -33,    95,  -169,  -169,  -169,  -169,
     208,  -169,   169,   185,   185,  -169,   171,   120,  -169,  -169,
    -169,  -169,  -169,   -63,  -169,  -169,  -169,   171,  -169,    18,
       7,  -169,   121,  -169,    86,  -169,     4,   107,   190,   130,
     102,   100,   140,  -169,  -169,  -169,  -169,   185,  -169,  -169,
     335,   171,    76,  -169,   171,   135,  -169,   -47,   199,   -79,
      57,   190,   137,   171,   171,   171,   122,   171,   -18,  -169,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
    -169,   -13,   125,   171,    75,   134,     8,  -169,   171,  -169,
     165,   -29,   209,   210,   150,  -169,   256,   171,  -169,   166,
     141,   267,   139,  -169,  -169,  -169,    -5,   185,  -169,   144,
     124,  -169,   236,  -169,   335,   325,    21,    18,   277,  -169,
     213,    21,    21,    21,    21,    21,    21,    53,    53,  -169,
    -169,   143,   171,   171,  -169,   148,  -169,   -19,   171,   107,
    -169,   267,   156,   218,   232,   395,   -10,  -169,   -29,   184,
    -169,   171,   267,  -169,   171,  -169,  -169,   -38,   -79,  -169,
     221,   -11,    -1,    34,   222,   -79,   269,   271,   -26,     9,
     171,  -169,  -169,   215,    24,   125,   258,   267,  -169,   175,
     181,   195,  -169,   196,   197,  -169,  -169,  -169,   198,  -169,
    -169,  -169,  -169,   -29,  -169,  -169,  -169,   267,   267,   292,
     124,  -169,  -169,   265,  -169,   266,  -169,   275,  -169,   106,
     171,   171,   311,  -169,  -169,   315,  -169,  -169,  -169,   125,
     -29,   240,   241,   243,   248,   249,     1,  -169,   252,  -169,
    -169,  -169,   171,   141,   267,   337,   347,  -169,    28,   274,
     279,   280,   281,   286,   358,  -169,   171,  -169,   360,  -169,
    -169,   267,   171,   307,  -169,  -169,  -169,   363,  -169,  -169,
     309,  -169,   267,  -169,   296,  -169,   105,   389,   318,   340,
     171,  -169,  -169,  -169,   359,   342,  -169,  -169,  -169,   362,
     344,  -169
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    26,     0,     0,     0,     0,     0,     0,     0,   114,
     110,   111,     0,     0,     5,     7,     8,    17,     9,    10,
      11,    12,    13,    14,    15,    16,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   109,   112,     1,
       4,     2,    22,     0,     0,   146,     0,     0,   152,   153,
     154,   155,   156,   141,   143,   144,   145,     0,    29,     0,
      35,    28,    33,   139,     0,   140,     0,     0,    52,     0,
       0,     0,     0,   106,   108,     6,    21,     0,    20,    19,
     119,     0,   162,   159,   151,     0,   136,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    26,     0,     0,    70,     0,    52,    77,     0,    79,
       0,     0,     0,     0,     0,    18,     0,     0,   158,     0,
     150,   116,     0,   142,   138,   137,    33,     0,    34,    36,
      38,    27,    54,    31,   118,   117,   126,     0,     0,   130,
       0,   120,   121,   122,   123,   124,   125,   132,   133,   134,
     135,     0,     0,     0,    68,    71,    73,     0,     0,     0,
      75,    51,     0,     0,     0,     0,     0,    83,     0,     0,
     107,     0,   161,   157,     0,   149,    39,     0,     0,    42,
       0,     0,     0,     0,     0,     0,     0,    56,     0,     0,
       0,   131,   148,     0,     0,     0,     0,    78,    76,     0,
       0,     0,    87,     0,     0,    90,    91,    92,     0,    94,
      95,    96,    98,     0,    80,   104,   105,   160,   115,     0,
      37,    43,    44,     0,    46,     0,    48,     0,    50,     0,
       0,     0,    58,   128,   127,   129,   147,    74,    72,     0,
       0,     0,     0,     0,     0,     0,    84,    82,     0,    45,
      47,    49,     0,    53,    55,     0,    67,    69,     0,     0,
       0,     0,     0,     0,     0,   101,     0,   102,     0,    97,
      40,    41,     0,     0,    23,    81,    85,     0,    88,    89,
       0,    99,   103,   100,    57,    60,    64,    65,     0,     0,
       0,    62,    63,    61,     0,     0,    93,    59,    66,     0,
       0,    86
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,  -169,  -169,  -169,   413,   -54,  -169,    20,   343,  -169,
     365,   320,  -169,  -169,  -169,  -168,  -169,   -83,  -169,  -169,
    -169,  -169,   157,  -169,  -169,  -169,   211,  -169,   253,  -169,
    -169,   290,  -169,  -169,   212,  -164,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,  -112,   -28,  -169,  -169,  -169,  -169,
    -169,   379,  -169
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    13,    41,    14,    15,    16,    77,    17,    28,    60,
      61,   110,    91,   138,   139,   140,   195,   119,   197,   242,
     266,   294,   295,   303,   284,    18,   164,   165,   166,    19,
     116,   117,    20,    21,   176,   177,   222,   256,   279,    22,
      23,    24,    25,    37,   130,   131,    63,   132,    64,    65,
      82,    83,   129
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,   167,    26,    27,   173,    87,   174,     1,   142,    92,
     136,    89,   114,   118,   225,    42,    43,    44,    80,   149,
     230,     1,    30,   112,    42,    43,    44,   239,   137,    86,
      69,    88,    29,   170,   274,   199,    42,    43,    44,   275,
     276,    70,   232,   277,    84,    72,    85,   233,    31,   150,
      32,   204,   234,   126,    33,    45,    73,   235,    36,   257,
     175,   134,    62,    78,    79,   144,   145,   146,   278,   148,
     229,    34,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   243,   187,    99,    46,   184,   236,   161,   206,
     171,    47,   237,   198,    45,   223,    35,   125,   224,   182,
      26,    27,    48,    49,    50,    51,    52,    53,    54,    55,
      56,   113,    90,   169,   184,   301,   302,   244,    57,    39,
     106,   107,   108,   109,    46,    59,   122,   123,   263,   184,
      47,    38,   247,   223,   203,    92,   285,    42,    43,    44,
     207,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      81,    40,   127,   227,   108,   109,   228,    57,    58,   189,
     190,   191,   192,   193,    59,   194,   262,    66,    67,    68,
      93,    94,   245,    95,    96,    97,    98,   189,   190,   191,
     192,   193,    71,   194,    74,    76,    93,    94,     1,    95,
      96,    97,    98,   111,    81,   118,   115,   120,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    45,   121,
      99,     1,   124,   264,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   133,     2,   143,   168,     3,   147,
       4,     5,   163,     6,   281,     7,     8,   172,    46,   180,
     178,   179,   196,   183,    47,   209,   184,   185,   292,   188,
     201,   202,   210,   205,   296,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    93,    94,   211,    95,    96,    97,
      98,    57,   296,   226,   231,   238,   240,   249,    59,   241,
      93,    94,   250,    95,    96,    97,    98,     9,   251,    10,
      11,    12,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   252,   253,   254,   255,   258,   135,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   259,   260,
     265,    93,    94,   246,    95,    96,    97,    98,   261,   269,
     270,   181,    93,    94,   271,    95,    96,    97,    98,   272,
     273,   280,   200,    94,   282,    95,    96,    97,    98,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   283,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
    -118,  -118,   286,    95,    96,    97,    98,   287,   288,   289,
      93,   290,   291,    95,    96,    97,    98,   293,   297,   298,
     299,   300,   304,    95,    96,    97,    98,   305,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   306,   309,
     308,   310,   311,    75,   162,   141,   186,   307,   248,   208,
     267,   128,   268
};

static const yytype_int16 yycheck[] =
{
      28,   113,    15,    16,    33,    59,    35,     3,    91,    14,
      89,     4,    66,     5,   178,    62,    63,    64,    46,    37,
     188,     3,    89,    19,    62,    63,    64,   195,   107,    57,
      78,    59,    18,   116,    33,   147,    62,    63,    64,    38,
      39,    89,    53,    42,   107,    78,   109,    58,     4,    67,
      24,   163,    53,    81,    24,    37,    89,    58,    80,   223,
      89,   108,    90,    43,    44,    93,    94,    95,    67,    97,
     108,    24,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   108,   137,    89,    67,   105,    53,   101,   108,
     118,    73,    58,   147,    37,   105,    24,    77,   108,   127,
      15,    16,    84,    85,    86,    87,    88,    89,    90,    91,
      92,   107,   105,   105,   105,    10,    11,   108,   100,     0,
      99,   100,   101,   102,    67,   107,    26,    27,   240,   105,
      73,    89,   108,   105,   162,    14,   108,    62,    63,    64,
     168,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      74,   106,    76,   181,   101,   102,   184,   100,   101,    53,
      54,    55,    56,    57,   107,    59,    60,    89,    21,    89,
      65,    66,   200,    68,    69,    70,    71,    53,    54,    55,
      56,    57,    89,    59,    89,    16,    65,    66,     3,    68,
      69,    70,    71,   107,    74,     5,    89,    67,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,    37,   107,
      89,     3,    72,   241,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    89,    17,    89,    93,    20,   107,
      22,    23,   107,    25,   262,    27,    28,    72,    67,    89,
      31,    31,     6,    77,    73,    89,   105,   108,   276,   105,
      37,   108,    34,   105,   282,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    65,    66,    34,    68,    69,    70,
      71,   100,   300,    89,    53,    53,     7,    19,   107,     8,
      65,    66,   107,    68,    69,    70,    71,    79,   107,    81,
      82,    83,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   107,   107,   107,   107,    14,   108,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,    53,    53,
       9,    65,    66,   108,    68,    69,    70,    71,    53,    89,
      89,    75,    65,    66,    91,    68,    69,    70,    71,    91,
      91,    89,    65,    66,     7,    68,    69,    70,    71,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    12,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
      65,    66,   108,    68,    69,    70,    71,   108,   108,   108,
      65,   105,    34,    68,    69,    70,    71,    37,    91,    36,
      91,   105,    13,    68,    69,    70,    71,    89,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,   108,   107,
      91,    89,   108,    40,   111,    90,   136,   300,   205,   169,
     249,    82,   250
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    17,    20,    22,    23,    25,    27,    28,    79,
      81,    82,    83,   112,   114,   115,   116,   118,   136,   140,
     143,   144,   150,   151,   152,   153,    15,    16,   119,    18,
      89,     4,    24,    24,    24,    24,    80,   154,    89,     0,
     106,   113,    62,    63,    64,    37,    67,    73,    84,    85,
      86,    87,    88,    89,    90,    91,    92,   100,   101,   107,
     120,   121,   156,   157,   159,   160,    89,    21,    89,    78,
      89,    89,    78,    89,    89,   115,    16,   117,   118,   118,
     156,    74,   161,   162,   107,   109,   156,   116,   156,     4,
     105,   123,    14,    65,    66,    68,    69,    70,    71,    89,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     122,   107,    19,   107,   116,    89,   141,   142,     5,   128,
      67,   107,    26,    27,    72,   118,   156,    76,   162,   163,
     155,   156,   158,    89,   108,   108,    89,   107,   124,   125,
     126,   121,   128,    89,   156,   156,   156,   107,   156,    37,
      67,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   101,   119,   107,   137,   138,   139,   155,    93,   105,
     128,   156,    72,    33,    35,    89,   145,   146,    31,    31,
      89,    75,   156,    77,   105,   108,   122,   116,   105,    53,
      54,    55,    56,    57,    59,   127,     6,   129,   116,   155,
      65,    37,   108,   156,   155,   105,   108,   156,   142,    89,
      34,    34,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,   147,   105,   108,   146,    89,   156,   156,   108,
     126,    53,    53,    58,    53,    58,    53,    58,    53,   126,
       7,     8,   130,   108,   108,   156,   108,   108,   139,    19,
     107,   107,   107,   107,   107,   107,   148,   146,    14,    53,
      53,    53,    60,   155,   156,     9,   131,   137,   145,    89,
      89,    91,    91,    91,    33,    38,    39,    42,    67,   149,
      89,   156,     7,    12,   135,   108,   108,   108,   108,   108,
     105,    34,   156,    37,   132,   133,   156,    91,    36,    91,
     105,    10,    11,   134,    13,    89,   108,   133,    91,   107,
      89,   108
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   116,   116,   116,
     116,   117,   117,   118,   119,   119,   119,   120,   120,   121,
     121,   122,   122,   122,   123,   123,   124,   125,   125,   126,
     126,   126,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   132,
     132,   133,   134,   134,   134,   135,   135,   135,   136,   136,
     136,   137,   138,   138,   139,   140,   141,   141,   142,   143,
     144,   144,   145,   145,   146,   146,   146,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   148,   148,   149,
     149,   149,   149,   149,   150,   150,   151,   151,   152,   153,
     153,   153,   153,   154,   154,   155,   155,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   157,   157,   157,
     158,   158,   159,   159,   159,   159,   159,   160,   161,   161,
     162,   163,   163
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
       6,     9,     3,     1,     3,     5,    10,     1,     4,     4,
       1,     1,     1,     6,     1,     1,     1,     2,     0,     2,
       2,     1,     1,     2,     6,     6,     3,     5,     3,     2,
       1,     1,     2,     1,     0,     3,     1,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     5,     5,     5,
       3,     4,     3,     3,     3,     3,     2,     3,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     5,     4,     4,
       1,     0,     1,     1,     1,     1,     1,     4,     2,     1,
       4,     2,     0
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
#line 73 "sql_parser.y"
                                 {
        g_ast_root = (yyvsp[-1].node);
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1513 "sql_parser.tab.c"
    break;

  case 3: /* query_script: %empty  */
#line 77 "sql_parser.y"
                  {
        g_ast_root = NULL;
        (yyval.node) = NULL;
    }
#line 1522 "sql_parser.tab.c"
    break;

  case 6: /* statement_list: statement_list SEMICOLON statement  */
#line 89 "sql_parser.y"
                                       {
        if ((yyvsp[0].node)) {
            ast_add_child((yyvsp[-2].node), (yyvsp[0].node));
        }
        (yyval.node) = (yyvsp[-2].node);
    }
#line 1533 "sql_parser.tab.c"
    break;

  case 7: /* statement_list: statement  */
#line 95 "sql_parser.y"
                {
        ASTNode *stmt_list = ast_create_node(AST_STMT_LIST, "STATEMENT_LIST", NULL);
        if ((yyvsp[0].node)) {
            ast_add_child(stmt_list, (yyvsp[0].node));
        }
        (yyval.node) = stmt_list;
    }
#line 1545 "sql_parser.tab.c"
    break;

  case 8: /* statement: select_stmt  */
#line 105 "sql_parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 1551 "sql_parser.tab.c"
    break;

  case 9: /* statement: insert_stmt  */
#line 106 "sql_parser.y"
                  { (yyval.node) = (yyvsp[0].node); }
#line 1557 "sql_parser.tab.c"
    break;

  case 10: /* statement: update_stmt  */
#line 107 "sql_parser.y"
                  { (yyval.node) = (yyvsp[0].node); }
#line 1563 "sql_parser.tab.c"
    break;

  case 11: /* statement: delete_stmt  */
#line 108 "sql_parser.y"
                  { (yyval.node) = (yyvsp[0].node); }
#line 1569 "sql_parser.tab.c"
    break;

  case 12: /* statement: create_table_stmt  */
#line 109 "sql_parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1575 "sql_parser.tab.c"
    break;

  case 13: /* statement: alter_table_stmt  */
#line 110 "sql_parser.y"
                       { (yyval.node) = (yyvsp[0].node); }
#line 1581 "sql_parser.tab.c"
    break;

  case 14: /* statement: drop_table_stmt  */
#line 111 "sql_parser.y"
                      { (yyval.node) = (yyvsp[0].node); }
#line 1587 "sql_parser.tab.c"
    break;

  case 15: /* statement: truncate_table_stmt  */
#line 112 "sql_parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 1593 "sql_parser.tab.c"
    break;

  case 16: /* statement: transaction_stmt  */
#line 113 "sql_parser.y"
                       { (yyval.node) = (yyvsp[0].node); }
#line 1599 "sql_parser.tab.c"
    break;

  case 17: /* select_stmt: select_expr  */
#line 119 "sql_parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 1605 "sql_parser.tab.c"
    break;

  case 18: /* select_stmt: select_stmt UNION opt_all select_expr  */
#line 120 "sql_parser.y"
                                            {
        ASTNode *union_node = ast_create_node(AST_UNION, "UNION", "UNION");
        ast_add_child(union_node, (yyvsp[-3].node));
        ast_add_child(union_node, (yyvsp[0].node));
        (yyval.node) = union_node;
    }
#line 1616 "sql_parser.tab.c"
    break;

  case 19: /* select_stmt: select_stmt EXCEPT select_expr  */
#line 126 "sql_parser.y"
                                     {
        ASTNode *except_node = ast_create_node(AST_UNION, "EXCEPT", "EXCEPT");
        ast_add_child(except_node, (yyvsp[-2].node));
        ast_add_child(except_node, (yyvsp[0].node));
        (yyval.node) = except_node;
    }
#line 1627 "sql_parser.tab.c"
    break;

  case 20: /* select_stmt: select_stmt INTERSECT select_expr  */
#line 132 "sql_parser.y"
                                        {
        ASTNode *intersect_node = ast_create_node(AST_UNION, "INTERSECT", "INTERSECT");
        ast_add_child(intersect_node, (yyvsp[-2].node));
        ast_add_child(intersect_node, (yyvsp[0].node));
        (yyval.node) = intersect_node;
    }
#line 1638 "sql_parser.tab.c"
    break;

  case 23: /* select_expr: SELECT opt_distinct target_list opt_from opt_where opt_group_by opt_having opt_order_by opt_limit  */
#line 146 "sql_parser.y"
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
#line 1654 "sql_parser.tab.c"
    break;

  case 27: /* target_list: target_list COMMA target_item  */
#line 166 "sql_parser.y"
                                  {
        ast_add_child((yyvsp[-2].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-2].node);
    }
#line 1663 "sql_parser.tab.c"
    break;

  case 28: /* target_list: target_item  */
#line 170 "sql_parser.y"
                  {
        ASTNode *tlist = ast_create_node(AST_TARGET_LIST, "TARGET_LIST", NULL);
        ast_add_child(tlist, (yyvsp[0].node));
        (yyval.node) = tlist;
    }
#line 1673 "sql_parser.tab.c"
    break;

  case 29: /* target_item: STAR  */
#line 178 "sql_parser.y"
         {
        (yyval.node) = ast_create_node(AST_FIELD, "FIELD", "*");
    }
#line 1681 "sql_parser.tab.c"
    break;

  case 30: /* target_item: expr opt_alias  */
#line 181 "sql_parser.y"
                     {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1689 "sql_parser.tab.c"
    break;

  case 31: /* opt_alias: AS IDENTIFIER  */
#line 187 "sql_parser.y"
                  { free((yyvsp[0].str)); }
#line 1695 "sql_parser.tab.c"
    break;

  case 32: /* opt_alias: IDENTIFIER  */
#line 188 "sql_parser.y"
                 { free((yyvsp[0].str)); }
#line 1701 "sql_parser.tab.c"
    break;

  case 34: /* opt_from: FROM from_clause  */
#line 193 "sql_parser.y"
                     { (yyval.node) = (yyvsp[0].node); }
#line 1707 "sql_parser.tab.c"
    break;

  case 35: /* opt_from: %empty  */
#line 194 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 1713 "sql_parser.tab.c"
    break;

  case 36: /* from_clause: table_ref_list  */
#line 198 "sql_parser.y"
                   {
        ASTNode *from_node = ast_create_node(AST_FROM_CLAUSE, "FROM_CLAUSE", NULL);
        ast_add_child(from_node, (yyvsp[0].node));
        (yyval.node) = from_node;
    }
#line 1723 "sql_parser.tab.c"
    break;

  case 37: /* table_ref_list: table_ref_list COMMA table_ref  */
#line 206 "sql_parser.y"
                                   {
        ast_add_child((yyvsp[-2].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-2].node);
    }
#line 1732 "sql_parser.tab.c"
    break;

  case 38: /* table_ref_list: table_ref  */
#line 210 "sql_parser.y"
                {
        ASTNode *list = ast_create_node(AST_OTHER, "TABLE_LIST", NULL);
        ast_add_child(list, (yyvsp[0].node));
        (yyval.node) = list;
    }
#line 1742 "sql_parser.tab.c"
    break;

  case 39: /* table_ref: IDENTIFIER opt_alias  */
#line 218 "sql_parser.y"
                         {
        ASTNode *tref = ast_create_node(AST_TABLE_REF, "TABLE", (yyvsp[-1].str));
        free((yyvsp[-1].str));
        (yyval.node) = tref;
    }
#line 1752 "sql_parser.tab.c"
    break;

  case 40: /* table_ref: LPAREN select_stmt RPAREN AS IDENTIFIER  */
#line 223 "sql_parser.y"
                                              {
        ASTNode *subq = ast_create_node(AST_SUBQUERY, "SUBQUERY_TABLE", (yyvsp[0].str));
        ast_add_child(subq, (yyvsp[-3].node));
        free((yyvsp[0].str));
        (yyval.node) = subq;
    }
#line 1763 "sql_parser.tab.c"
    break;

  case 41: /* table_ref: table_ref join_type table_ref ON expr  */
#line 229 "sql_parser.y"
                                            {
        ASTNode *jnode = ast_create_node(AST_JOIN, "JOIN", (yyvsp[-3].node) ? (yyvsp[-3].node)->label : "INNER JOIN");
        ast_add_child(jnode, (yyvsp[-4].node));
        ast_add_child(jnode, (yyvsp[-2].node));
        ast_add_child(jnode, (yyvsp[0].node));
        if ((yyvsp[-3].node)) ast_free((yyvsp[-3].node));
        (yyval.node) = jnode;
    }
#line 1776 "sql_parser.tab.c"
    break;

  case 42: /* join_type: JOIN  */
#line 240 "sql_parser.y"
         { (yyval.node) = ast_create_node(AST_OTHER, "JOIN", NULL); }
#line 1782 "sql_parser.tab.c"
    break;

  case 43: /* join_type: INNER JOIN  */
#line 241 "sql_parser.y"
                 { (yyval.node) = ast_create_node(AST_OTHER, "INNER JOIN", NULL); }
#line 1788 "sql_parser.tab.c"
    break;

  case 44: /* join_type: LEFT JOIN  */
#line 242 "sql_parser.y"
                { (yyval.node) = ast_create_node(AST_OTHER, "LEFT JOIN", NULL); }
#line 1794 "sql_parser.tab.c"
    break;

  case 45: /* join_type: LEFT OUTER JOIN  */
#line 243 "sql_parser.y"
                      { (yyval.node) = ast_create_node(AST_OTHER, "LEFT OUTER JOIN", NULL); }
#line 1800 "sql_parser.tab.c"
    break;

  case 46: /* join_type: RIGHT JOIN  */
#line 244 "sql_parser.y"
                 { (yyval.node) = ast_create_node(AST_OTHER, "RIGHT JOIN", NULL); }
#line 1806 "sql_parser.tab.c"
    break;

  case 47: /* join_type: RIGHT OUTER JOIN  */
#line 245 "sql_parser.y"
                       { (yyval.node) = ast_create_node(AST_OTHER, "RIGHT OUTER JOIN", NULL); }
#line 1812 "sql_parser.tab.c"
    break;

  case 48: /* join_type: FULL JOIN  */
#line 246 "sql_parser.y"
                { (yyval.node) = ast_create_node(AST_OTHER, "FULL JOIN", NULL); }
#line 1818 "sql_parser.tab.c"
    break;

  case 49: /* join_type: FULL OUTER JOIN  */
#line 247 "sql_parser.y"
                      { (yyval.node) = ast_create_node(AST_OTHER, "FULL OUTER JOIN", NULL); }
#line 1824 "sql_parser.tab.c"
    break;

  case 50: /* join_type: CROSS JOIN  */
#line 248 "sql_parser.y"
                 { (yyval.node) = ast_create_node(AST_OTHER, "CROSS JOIN", NULL); }
#line 1830 "sql_parser.tab.c"
    break;

  case 51: /* opt_where: WHERE expr  */
#line 252 "sql_parser.y"
               {
        ASTNode *wnode = ast_create_node(AST_WHERE_CLAUSE, "WHERE_CLAUSE", NULL);
        ast_add_child(wnode, (yyvsp[0].node));
        (yyval.node) = wnode;
    }
#line 1840 "sql_parser.tab.c"
    break;

  case 52: /* opt_where: %empty  */
#line 257 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 1846 "sql_parser.tab.c"
    break;

  case 53: /* opt_group_by: GROUP BY expr_list  */
#line 261 "sql_parser.y"
                       {
        ASTNode *gnode = ast_create_node(AST_GROUP_BY, "GROUP_BY", NULL);
        ast_add_child(gnode, (yyvsp[0].node));
        (yyval.node) = gnode;
    }
#line 1856 "sql_parser.tab.c"
    break;

  case 54: /* opt_group_by: %empty  */
#line 266 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 1862 "sql_parser.tab.c"
    break;

  case 55: /* opt_having: HAVING expr  */
#line 270 "sql_parser.y"
                {
        ASTNode *hnode = ast_create_node(AST_HAVING, "HAVING", NULL);
        ast_add_child(hnode, (yyvsp[0].node));
        (yyval.node) = hnode;
    }
#line 1872 "sql_parser.tab.c"
    break;

  case 56: /* opt_having: %empty  */
#line 275 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 1878 "sql_parser.tab.c"
    break;

  case 57: /* opt_order_by: ORDER BY order_item_list  */
#line 279 "sql_parser.y"
                             {
        ASTNode *onode = ast_create_node(AST_ORDER_BY, "ORDER_BY", NULL);
        ast_add_child(onode, (yyvsp[0].node));
        (yyval.node) = onode;
    }
#line 1888 "sql_parser.tab.c"
    break;

  case 58: /* opt_order_by: %empty  */
#line 284 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 1894 "sql_parser.tab.c"
    break;

  case 59: /* order_item_list: order_item_list COMMA order_item  */
#line 288 "sql_parser.y"
                                     {
        ast_add_child((yyvsp[-2].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-2].node);
    }
#line 1903 "sql_parser.tab.c"
    break;

  case 60: /* order_item_list: order_item  */
#line 292 "sql_parser.y"
                 {
        ASTNode *olist = ast_create_node(AST_OTHER, "ORDER_LIST", NULL);
        ast_add_child(olist, (yyvsp[0].node));
        (yyval.node) = olist;
    }
#line 1913 "sql_parser.tab.c"
    break;

  case 61: /* order_item: expr opt_asc_desc  */
#line 300 "sql_parser.y"
                      {
        ASTNode *item = ast_create_node(AST_ORDER_ITEM, "ORDER_ITEM", (yyvsp[0].node) ? (yyvsp[0].node)->value : "ASC");
        ast_add_child(item, (yyvsp[-1].node));
        if ((yyvsp[0].node)) ast_free((yyvsp[0].node));
        (yyval.node) = item;
    }
#line 1924 "sql_parser.tab.c"
    break;

  case 62: /* opt_asc_desc: ASC  */
#line 309 "sql_parser.y"
        { (yyval.node) = ast_create_node(AST_OTHER, "DIR", "ASC"); }
#line 1930 "sql_parser.tab.c"
    break;

  case 63: /* opt_asc_desc: DESC  */
#line 310 "sql_parser.y"
           { (yyval.node) = ast_create_node(AST_OTHER, "DIR", "DESC"); }
#line 1936 "sql_parser.tab.c"
    break;

  case 64: /* opt_asc_desc: %empty  */
#line 311 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 1942 "sql_parser.tab.c"
    break;

  case 65: /* opt_limit: LIMIT INT_LITERAL  */
#line 315 "sql_parser.y"
                      {
        ASTNode *lnode = ast_create_node(AST_LIMIT_CLAUSE, "LIMIT", (yyvsp[0].str));
        free((yyvsp[0].str));
        (yyval.node) = lnode;
    }
#line 1952 "sql_parser.tab.c"
    break;

  case 66: /* opt_limit: LIMIT INT_LITERAL OFFSET INT_LITERAL  */
#line 320 "sql_parser.y"
                                           {
        char buf[128];
        snprintf(buf, sizeof(buf), "%s OFFSET %s", (yyvsp[-2].str), (yyvsp[0].str));
        ASTNode *lnode = ast_create_node(AST_LIMIT_CLAUSE, "LIMIT", buf);
        free((yyvsp[-2].str)); free((yyvsp[0].str));
        (yyval.node) = lnode;
    }
#line 1964 "sql_parser.tab.c"
    break;

  case 67: /* opt_limit: %empty  */
#line 327 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 1970 "sql_parser.tab.c"
    break;

  case 68: /* insert_stmt: INSERT INTO IDENTIFIER VALUES insert_values_list  */
#line 333 "sql_parser.y"
                                                     {
        ASTNode *inode = ast_create_node(AST_INSERT, "INSERT_STMT", (yyvsp[-2].str));
        ast_add_child(inode, (yyvsp[0].node));
        free((yyvsp[-2].str));
        (yyval.node) = inode;
    }
#line 1981 "sql_parser.tab.c"
    break;

  case 69: /* insert_stmt: INSERT INTO IDENTIFIER LPAREN expr_list RPAREN VALUES insert_values_list  */
#line 339 "sql_parser.y"
                                                                               {
        ASTNode *inode = ast_create_node(AST_INSERT, "INSERT_STMT", (yyvsp[-5].str));
        ast_add_child(inode, (yyvsp[-3].node));
        ast_add_child(inode, (yyvsp[0].node));
        free((yyvsp[-5].str));
        (yyval.node) = inode;
    }
#line 1993 "sql_parser.tab.c"
    break;

  case 70: /* insert_stmt: INSERT INTO IDENTIFIER select_stmt  */
#line 346 "sql_parser.y"
                                         {
        ASTNode *inode = ast_create_node(AST_INSERT, "INSERT_SELECT_STMT", (yyvsp[-1].str));
        ast_add_child(inode, (yyvsp[0].node));
        free((yyvsp[-1].str));
        (yyval.node) = inode;
    }
#line 2004 "sql_parser.tab.c"
    break;

  case 71: /* insert_values_list: tuple_list  */
#line 355 "sql_parser.y"
               { (yyval.node) = (yyvsp[0].node); }
#line 2010 "sql_parser.tab.c"
    break;

  case 72: /* tuple_list: tuple_list COMMA tuple  */
#line 359 "sql_parser.y"
                           {
        ast_add_child((yyvsp[-2].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-2].node);
    }
#line 2019 "sql_parser.tab.c"
    break;

  case 73: /* tuple_list: tuple  */
#line 363 "sql_parser.y"
            {
        ASTNode *vlist = ast_create_node(AST_VALUES_LIST, "VALUES_LIST", NULL);
        ast_add_child(vlist, (yyvsp[0].node));
        (yyval.node) = vlist;
    }
#line 2029 "sql_parser.tab.c"
    break;

  case 74: /* tuple: LPAREN expr_list RPAREN  */
#line 371 "sql_parser.y"
                            {
        ASTNode *t = ast_create_node(AST_TUPLE, "TUPLE", NULL);
        ast_add_child(t, (yyvsp[-1].node));
        (yyval.node) = t;
    }
#line 2039 "sql_parser.tab.c"
    break;

  case 75: /* update_stmt: UPDATE IDENTIFIER SET assignment_list opt_where  */
#line 381 "sql_parser.y"
                                                    {
        ASTNode *unode = ast_create_node(AST_UPDATE, "UPDATE_STMT", (yyvsp[-3].str));
        ast_add_child(unode, (yyvsp[-1].node));
        if ((yyvsp[0].node)) ast_add_child(unode, (yyvsp[0].node));
        free((yyvsp[-3].str));
        (yyval.node) = unode;
    }
#line 2051 "sql_parser.tab.c"
    break;

  case 76: /* assignment_list: assignment_list COMMA assignment  */
#line 391 "sql_parser.y"
                                     {
        ast_add_child((yyvsp[-2].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-2].node);
    }
#line 2060 "sql_parser.tab.c"
    break;

  case 77: /* assignment_list: assignment  */
#line 395 "sql_parser.y"
                 {
        ASTNode *alist = ast_create_node(AST_ASSIGN_LIST, "ASSIGNMENT_LIST", NULL);
        ast_add_child(alist, (yyvsp[0].node));
        (yyval.node) = alist;
    }
#line 2070 "sql_parser.tab.c"
    break;

  case 78: /* assignment: IDENTIFIER EQ expr  */
#line 403 "sql_parser.y"
                       {
        ASTNode *assign = ast_create_node(AST_ASSIGNMENT, "ASSIGN", (yyvsp[-2].str));
        ast_add_child(assign, (yyvsp[0].node));
        free((yyvsp[-2].str));
        (yyval.node) = assign;
    }
#line 2081 "sql_parser.tab.c"
    break;

  case 79: /* delete_stmt: DELETE FROM IDENTIFIER opt_where  */
#line 414 "sql_parser.y"
                                     {
        ASTNode *dnode = ast_create_node(AST_DELETE, "DELETE_STMT", (yyvsp[-1].str));
        if ((yyvsp[0].node)) ast_add_child(dnode, (yyvsp[0].node));
        free((yyvsp[-1].str));
        (yyval.node) = dnode;
    }
#line 2092 "sql_parser.tab.c"
    break;

  case 80: /* create_table_stmt: CREATE TABLE IDENTIFIER LPAREN column_def_list RPAREN  */
#line 425 "sql_parser.y"
                                                          {
        ASTNode *cnode = ast_create_node(AST_CREATE_TABLE, "CREATE_TABLE_STMT", (yyvsp[-3].str));
        ast_add_child(cnode, (yyvsp[-1].node));
        free((yyvsp[-3].str));
        (yyval.node) = cnode;
    }
#line 2103 "sql_parser.tab.c"
    break;

  case 81: /* create_table_stmt: CREATE TABLE IF_KW NOT_KW EXISTS IDENTIFIER LPAREN column_def_list RPAREN  */
#line 431 "sql_parser.y"
                                                                                {
        ASTNode *cnode = ast_create_node(AST_CREATE_TABLE, "CREATE_TABLE_IF_NOT_EXISTS", (yyvsp[-3].str));
        ast_add_child(cnode, (yyvsp[-1].node));
        free((yyvsp[-3].str));
        (yyval.node) = cnode;
    }
#line 2114 "sql_parser.tab.c"
    break;

  case 82: /* column_def_list: column_def_list COMMA column_def  */
#line 440 "sql_parser.y"
                                     {
        ast_add_child((yyvsp[-2].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-2].node);
    }
#line 2123 "sql_parser.tab.c"
    break;

  case 83: /* column_def_list: column_def  */
#line 444 "sql_parser.y"
                 {
        ASTNode *cdlist = ast_create_node(AST_COL_DEF_LIST, "COLUMN_DEF_LIST", NULL);
        ast_add_child(cdlist, (yyvsp[0].node));
        (yyval.node) = cdlist;
    }
#line 2133 "sql_parser.tab.c"
    break;

  case 84: /* column_def: IDENTIFIER data_type opt_column_constraints  */
#line 452 "sql_parser.y"
                                                {
        ASTNode *cdef = ast_create_node(AST_COL_DEF, "COLUMN", (yyvsp[-2].str));
        ast_add_child(cdef, (yyvsp[-1].node));
        if ((yyvsp[0].node)) ast_add_child(cdef, (yyvsp[0].node));
        free((yyvsp[-2].str));
        (yyval.node) = cdef;
    }
#line 2145 "sql_parser.tab.c"
    break;

  case 85: /* column_def: PRIMARY KEY LPAREN IDENTIFIER RPAREN  */
#line 459 "sql_parser.y"
                                           {
        ASTNode *pk = ast_create_node(AST_CONSTRAINT, "PRIMARY_KEY", (yyvsp[-1].str));
        free((yyvsp[-1].str));
        (yyval.node) = pk;
    }
#line 2155 "sql_parser.tab.c"
    break;

  case 86: /* column_def: FOREIGN KEY LPAREN IDENTIFIER RPAREN REFERENCES IDENTIFIER LPAREN IDENTIFIER RPAREN  */
#line 464 "sql_parser.y"
                                                                                          {
        char buf[256];
        snprintf(buf, sizeof(buf), "(%s) REFERENCES %s(%s)", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-1].str));
        ASTNode *fk = ast_create_node(AST_CONSTRAINT, "FOREIGN_KEY", buf);
        free((yyvsp[-6].str)); free((yyvsp[-3].str)); free((yyvsp[-1].str));
        (yyval.node) = fk;
    }
#line 2167 "sql_parser.tab.c"
    break;

  case 87: /* data_type: INT_TYPE  */
#line 474 "sql_parser.y"
             { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "INT"); }
#line 2173 "sql_parser.tab.c"
    break;

  case 88: /* data_type: VARCHAR_TYPE LPAREN INT_LITERAL RPAREN  */
#line 475 "sql_parser.y"
                                             {
        char buf[64];
        snprintf(buf, sizeof(buf), "VARCHAR(%s)", (yyvsp[-1].str));
        free((yyvsp[-1].str));
        (yyval.node) = ast_create_node(AST_OTHER, "TYPE", buf);
    }
#line 2184 "sql_parser.tab.c"
    break;

  case 89: /* data_type: CHAR_TYPE LPAREN INT_LITERAL RPAREN  */
#line 481 "sql_parser.y"
                                          {
        char buf[64];
        snprintf(buf, sizeof(buf), "CHAR(%s)", (yyvsp[-1].str));
        free((yyvsp[-1].str));
        (yyval.node) = ast_create_node(AST_OTHER, "TYPE", buf);
    }
#line 2195 "sql_parser.tab.c"
    break;

  case 90: /* data_type: TEXT_TYPE  */
#line 487 "sql_parser.y"
                { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "TEXT"); }
#line 2201 "sql_parser.tab.c"
    break;

  case 91: /* data_type: FLOAT_TYPE  */
#line 488 "sql_parser.y"
                 { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "FLOAT"); }
#line 2207 "sql_parser.tab.c"
    break;

  case 92: /* data_type: DOUBLE_TYPE  */
#line 489 "sql_parser.y"
                  { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "DOUBLE"); }
#line 2213 "sql_parser.tab.c"
    break;

  case 93: /* data_type: DECIMAL_TYPE LPAREN INT_LITERAL COMMA INT_LITERAL RPAREN  */
#line 490 "sql_parser.y"
                                                               {
        char buf[64];
        snprintf(buf, sizeof(buf), "DECIMAL(%s,%s)", (yyvsp[-3].str), (yyvsp[-1].str));
        free((yyvsp[-3].str)); free((yyvsp[-1].str));
        (yyval.node) = ast_create_node(AST_OTHER, "TYPE", buf);
    }
#line 2224 "sql_parser.tab.c"
    break;

  case 94: /* data_type: BOOLEAN_TYPE  */
#line 496 "sql_parser.y"
                   { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "BOOLEAN"); }
#line 2230 "sql_parser.tab.c"
    break;

  case 95: /* data_type: DATE_TYPE  */
#line 497 "sql_parser.y"
                { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "DATE"); }
#line 2236 "sql_parser.tab.c"
    break;

  case 96: /* data_type: TIMESTAMP_TYPE  */
#line 498 "sql_parser.y"
                     { (yyval.node) = ast_create_node(AST_OTHER, "TYPE", "TIMESTAMP"); }
#line 2242 "sql_parser.tab.c"
    break;

  case 97: /* opt_column_constraints: opt_column_constraints column_constraint  */
#line 502 "sql_parser.y"
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
#line 2257 "sql_parser.tab.c"
    break;

  case 98: /* opt_column_constraints: %empty  */
#line 512 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 2263 "sql_parser.tab.c"
    break;

  case 99: /* column_constraint: PRIMARY KEY  */
#line 516 "sql_parser.y"
                { (yyval.node) = ast_create_node(AST_CONSTRAINT, "CONSTRAINT", "PRIMARY KEY"); }
#line 2269 "sql_parser.tab.c"
    break;

  case 100: /* column_constraint: NOT_KW NULL_KW  */
#line 517 "sql_parser.y"
                     { (yyval.node) = ast_create_node(AST_CONSTRAINT, "CONSTRAINT", "NOT NULL"); }
#line 2275 "sql_parser.tab.c"
    break;

  case 101: /* column_constraint: UNIQUE  */
#line 518 "sql_parser.y"
             { (yyval.node) = ast_create_node(AST_CONSTRAINT, "CONSTRAINT", "UNIQUE"); }
#line 2281 "sql_parser.tab.c"
    break;

  case 102: /* column_constraint: AUTO_INCREMENT  */
#line 519 "sql_parser.y"
                     { (yyval.node) = ast_create_node(AST_CONSTRAINT, "CONSTRAINT", "AUTO_INCREMENT"); }
#line 2287 "sql_parser.tab.c"
    break;

  case 103: /* column_constraint: DEFAULT expr  */
#line 520 "sql_parser.y"
                   {
        ASTNode *dnode = ast_create_node(AST_CONSTRAINT, "DEFAULT", NULL);
        ast_add_child(dnode, (yyvsp[0].node));
        (yyval.node) = dnode;
    }
#line 2297 "sql_parser.tab.c"
    break;

  case 104: /* alter_table_stmt: ALTER TABLE IDENTIFIER ADD COLUMN column_def  */
#line 530 "sql_parser.y"
                                                 {
        ASTNode *anode = ast_create_node(AST_ALTER_TABLE, "ALTER_TABLE_ADD", (yyvsp[-3].str));
        ast_add_child(anode, (yyvsp[0].node));
        free((yyvsp[-3].str));
        (yyval.node) = anode;
    }
#line 2308 "sql_parser.tab.c"
    break;

  case 105: /* alter_table_stmt: ALTER TABLE IDENTIFIER DROP COLUMN IDENTIFIER  */
#line 536 "sql_parser.y"
                                                    {
        ASTNode *anode = ast_create_node(AST_ALTER_TABLE, "ALTER_TABLE_DROP", (yyvsp[-3].str));
        ast_add_child(anode, ast_create_node(AST_IDENTIFIER, "COLUMN", (yyvsp[0].str)));
        free((yyvsp[-3].str)); free((yyvsp[0].str));
        (yyval.node) = anode;
    }
#line 2319 "sql_parser.tab.c"
    break;

  case 106: /* drop_table_stmt: DROP TABLE IDENTIFIER  */
#line 545 "sql_parser.y"
                          {
        ASTNode *dnode = ast_create_node(AST_DROP_TABLE, "DROP_TABLE", (yyvsp[0].str));
        free((yyvsp[0].str));
        (yyval.node) = dnode;
    }
#line 2329 "sql_parser.tab.c"
    break;

  case 107: /* drop_table_stmt: DROP TABLE IF_KW EXISTS IDENTIFIER  */
#line 550 "sql_parser.y"
                                         {
        ASTNode *dnode = ast_create_node(AST_DROP_TABLE, "DROP_TABLE_IF_EXISTS", (yyvsp[0].str));
        free((yyvsp[0].str));
        (yyval.node) = dnode;
    }
#line 2339 "sql_parser.tab.c"
    break;

  case 108: /* truncate_table_stmt: TRUNCATE TABLE IDENTIFIER  */
#line 558 "sql_parser.y"
                              {
        ASTNode *tnode = ast_create_node(AST_TRUNCATE_TABLE, "TRUNCATE_TABLE", (yyvsp[0].str));
        free((yyvsp[0].str));
        (yyval.node) = tnode;
    }
#line 2349 "sql_parser.tab.c"
    break;

  case 109: /* transaction_stmt: BEGIN_KW opt_transaction  */
#line 566 "sql_parser.y"
                             { (yyval.node) = ast_create_node(AST_TRANSACTION, "TRANSACTION", "BEGIN"); }
#line 2355 "sql_parser.tab.c"
    break;

  case 110: /* transaction_stmt: COMMIT  */
#line 567 "sql_parser.y"
             { (yyval.node) = ast_create_node(AST_TRANSACTION, "TRANSACTION", "COMMIT"); }
#line 2361 "sql_parser.tab.c"
    break;

  case 111: /* transaction_stmt: ROLLBACK  */
#line 568 "sql_parser.y"
               { (yyval.node) = ast_create_node(AST_TRANSACTION, "TRANSACTION", "ROLLBACK"); }
#line 2367 "sql_parser.tab.c"
    break;

  case 112: /* transaction_stmt: SAVEPOINT IDENTIFIER  */
#line 569 "sql_parser.y"
                           {
        ASTNode *snode = ast_create_node(AST_TRANSACTION, "SAVEPOINT", (yyvsp[0].str));
        free((yyvsp[0].str));
        (yyval.node) = snode;
    }
#line 2377 "sql_parser.tab.c"
    break;

  case 115: /* expr_list: expr_list COMMA expr  */
#line 584 "sql_parser.y"
                         {
        ast_add_child((yyvsp[-2].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-2].node);
    }
#line 2386 "sql_parser.tab.c"
    break;

  case 116: /* expr_list: expr  */
#line 588 "sql_parser.y"
           {
        ASTNode *elist = ast_create_node(AST_OTHER, "EXPR_LIST", NULL);
        ast_add_child(elist, (yyvsp[0].node));
        (yyval.node) = elist;
    }
#line 2396 "sql_parser.tab.c"
    break;

  case 117: /* expr: expr OR expr  */
#line 596 "sql_parser.y"
                 {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "OR");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2407 "sql_parser.tab.c"
    break;

  case 118: /* expr: expr AND expr  */
#line 602 "sql_parser.y"
                    {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "AND");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2418 "sql_parser.tab.c"
    break;

  case 119: /* expr: NOT_KW expr  */
#line 608 "sql_parser.y"
                  {
        ASTNode *unode = ast_create_node(AST_UNARY_EXPR, "OPERATOR", "NOT");
        ast_add_child(unode, (yyvsp[0].node));
        (yyval.node) = unode;
    }
#line 2428 "sql_parser.tab.c"
    break;

  case 120: /* expr: expr EQ expr  */
#line 613 "sql_parser.y"
                   {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "=");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2439 "sql_parser.tab.c"
    break;

  case 121: /* expr: expr NE expr  */
#line 619 "sql_parser.y"
                   {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "!=");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2450 "sql_parser.tab.c"
    break;

  case 122: /* expr: expr LT expr  */
#line 625 "sql_parser.y"
                   {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "<");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2461 "sql_parser.tab.c"
    break;

  case 123: /* expr: expr GT expr  */
#line 631 "sql_parser.y"
                   {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", ">");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2472 "sql_parser.tab.c"
    break;

  case 124: /* expr: expr LE expr  */
#line 637 "sql_parser.y"
                   {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "<=");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2483 "sql_parser.tab.c"
    break;

  case 125: /* expr: expr GE expr  */
#line 643 "sql_parser.y"
                   {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", ">=");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2494 "sql_parser.tab.c"
    break;

  case 126: /* expr: expr LIKE expr  */
#line 649 "sql_parser.y"
                     {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "LIKE");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2505 "sql_parser.tab.c"
    break;

  case 127: /* expr: expr IN LPAREN expr_list RPAREN  */
#line 655 "sql_parser.y"
                                      {
        ASTNode *inode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "IN");
        ast_add_child(inode, (yyvsp[-4].node));
        ast_add_child(inode, (yyvsp[-1].node));
        (yyval.node) = inode;
    }
#line 2516 "sql_parser.tab.c"
    break;

  case 128: /* expr: expr IN LPAREN select_stmt RPAREN  */
#line 661 "sql_parser.y"
                                        {
        ASTNode *inode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "IN_SUBQUERY");
        ast_add_child(inode, (yyvsp[-4].node));
        ast_add_child(inode, (yyvsp[-1].node));
        (yyval.node) = inode;
    }
#line 2527 "sql_parser.tab.c"
    break;

  case 129: /* expr: expr BETWEEN expr AND expr  */
#line 667 "sql_parser.y"
                                 {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "BETWEEN");
        ast_add_child(bnode, (yyvsp[-4].node));
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2539 "sql_parser.tab.c"
    break;

  case 130: /* expr: expr IS NULL_KW  */
#line 674 "sql_parser.y"
                      {
        ASTNode *unode = ast_create_node(AST_UNARY_EXPR, "OPERATOR", "IS NULL");
        ast_add_child(unode, (yyvsp[-2].node));
        (yyval.node) = unode;
    }
#line 2549 "sql_parser.tab.c"
    break;

  case 131: /* expr: expr IS NOT_KW NULL_KW  */
#line 679 "sql_parser.y"
                             {
        ASTNode *unode = ast_create_node(AST_UNARY_EXPR, "OPERATOR", "IS NOT NULL");
        ast_add_child(unode, (yyvsp[-3].node));
        (yyval.node) = unode;
    }
#line 2559 "sql_parser.tab.c"
    break;

  case 132: /* expr: expr PLUS expr  */
#line 684 "sql_parser.y"
                     {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "+");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2570 "sql_parser.tab.c"
    break;

  case 133: /* expr: expr MINUS expr  */
#line 690 "sql_parser.y"
                      {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "-");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2581 "sql_parser.tab.c"
    break;

  case 134: /* expr: expr STAR expr  */
#line 696 "sql_parser.y"
                     {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "*");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2592 "sql_parser.tab.c"
    break;

  case 135: /* expr: expr SLASH expr  */
#line 702 "sql_parser.y"
                      {
        ASTNode *bnode = ast_create_node(AST_BINARY_EXPR, "OPERATOR", "/");
        ast_add_child(bnode, (yyvsp[-2].node));
        ast_add_child(bnode, (yyvsp[0].node));
        (yyval.node) = bnode;
    }
#line 2603 "sql_parser.tab.c"
    break;

  case 136: /* expr: MINUS expr  */
#line 708 "sql_parser.y"
                             {
        ASTNode *unode = ast_create_node(AST_UNARY_EXPR, "OPERATOR", "NEGATE");
        ast_add_child(unode, (yyvsp[0].node));
        (yyval.node) = unode;
    }
#line 2613 "sql_parser.tab.c"
    break;

  case 137: /* expr: LPAREN expr RPAREN  */
#line 713 "sql_parser.y"
                         { (yyval.node) = (yyvsp[-1].node); }
#line 2619 "sql_parser.tab.c"
    break;

  case 138: /* expr: LPAREN select_stmt RPAREN  */
#line 714 "sql_parser.y"
                                {
        ASTNode *subq = ast_create_node(AST_SUBQUERY, "SUBQUERY", NULL);
        ast_add_child(subq, (yyvsp[-1].node));
        (yyval.node) = subq;
    }
#line 2629 "sql_parser.tab.c"
    break;

  case 139: /* expr: func_call  */
#line 719 "sql_parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2635 "sql_parser.tab.c"
    break;

  case 140: /* expr: case_expr  */
#line 720 "sql_parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2641 "sql_parser.tab.c"
    break;

  case 141: /* expr: IDENTIFIER  */
#line 721 "sql_parser.y"
                 {
        ASTNode *id = ast_create_node(AST_IDENTIFIER, "IDENTIFIER", (yyvsp[0].str));
        free((yyvsp[0].str));
        (yyval.node) = id;
    }
#line 2651 "sql_parser.tab.c"
    break;

  case 142: /* expr: IDENTIFIER DOT IDENTIFIER  */
#line 726 "sql_parser.y"
                                {
        char buf[256];
        snprintf(buf, sizeof(buf), "%s.%s", (yyvsp[-2].str), (yyvsp[0].str));
        free((yyvsp[-2].str)); free((yyvsp[0].str));
        (yyval.node) = ast_create_node(AST_IDENTIFIER, "COLUMN_REF", buf);
    }
#line 2662 "sql_parser.tab.c"
    break;

  case 143: /* expr: STRING_LITERAL  */
#line 732 "sql_parser.y"
                     {
        ASTNode *lit = ast_create_node(AST_LITERAL, "STRING", (yyvsp[0].str));
        free((yyvsp[0].str));
        (yyval.node) = lit;
    }
#line 2672 "sql_parser.tab.c"
    break;

  case 144: /* expr: INT_LITERAL  */
#line 737 "sql_parser.y"
                  {
        ASTNode *lit = ast_create_node(AST_LITERAL, "INT", (yyvsp[0].str));
        free((yyvsp[0].str));
        (yyval.node) = lit;
    }
#line 2682 "sql_parser.tab.c"
    break;

  case 145: /* expr: FLOAT_LITERAL  */
#line 742 "sql_parser.y"
                    {
        ASTNode *lit = ast_create_node(AST_LITERAL, "FLOAT", (yyvsp[0].str));
        free((yyvsp[0].str));
        (yyval.node) = lit;
    }
#line 2692 "sql_parser.tab.c"
    break;

  case 146: /* expr: NULL_KW  */
#line 747 "sql_parser.y"
              {
        (yyval.node) = ast_create_node(AST_LITERAL, "NULL", "NULL");
    }
#line 2700 "sql_parser.tab.c"
    break;

  case 147: /* func_call: aggregate_func LPAREN opt_distinct expr RPAREN  */
#line 753 "sql_parser.y"
                                                   {
        ASTNode *fnode = ast_create_node(AST_FUNC_CALL, "AGGREGATE_FUNC", (yyvsp[-4].node)->label);
        ast_add_child(fnode, (yyvsp[-1].node));
        ast_free((yyvsp[-4].node));
        (yyval.node) = fnode;
    }
#line 2711 "sql_parser.tab.c"
    break;

  case 148: /* func_call: aggregate_func LPAREN STAR RPAREN  */
#line 759 "sql_parser.y"
                                        {
        ASTNode *fnode = ast_create_node(AST_FUNC_CALL, "AGGREGATE_FUNC", (yyvsp[-3].node)->label);
        ast_add_child(fnode, ast_create_node(AST_FIELD, "FIELD", "*"));
        ast_free((yyvsp[-3].node));
        (yyval.node) = fnode;
    }
#line 2722 "sql_parser.tab.c"
    break;

  case 149: /* func_call: IDENTIFIER LPAREN opt_expr_list RPAREN  */
#line 765 "sql_parser.y"
                                             {
        ASTNode *fnode = ast_create_node(AST_FUNC_CALL, "FUNC_CALL", (yyvsp[-3].str));
        if ((yyvsp[-1].node)) ast_add_child(fnode, (yyvsp[-1].node));
        free((yyvsp[-3].str));
        (yyval.node) = fnode;
    }
#line 2733 "sql_parser.tab.c"
    break;

  case 150: /* opt_expr_list: expr_list  */
#line 774 "sql_parser.y"
              { (yyval.node) = (yyvsp[0].node); }
#line 2739 "sql_parser.tab.c"
    break;

  case 151: /* opt_expr_list: %empty  */
#line 775 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 2745 "sql_parser.tab.c"
    break;

  case 152: /* aggregate_func: COUNT  */
#line 779 "sql_parser.y"
          { (yyval.node) = ast_create_node(AST_OTHER, "COUNT", NULL); }
#line 2751 "sql_parser.tab.c"
    break;

  case 153: /* aggregate_func: SUM  */
#line 780 "sql_parser.y"
          { (yyval.node) = ast_create_node(AST_OTHER, "SUM", NULL); }
#line 2757 "sql_parser.tab.c"
    break;

  case 154: /* aggregate_func: AVG  */
#line 781 "sql_parser.y"
          { (yyval.node) = ast_create_node(AST_OTHER, "AVG", NULL); }
#line 2763 "sql_parser.tab.c"
    break;

  case 155: /* aggregate_func: MIN  */
#line 782 "sql_parser.y"
          { (yyval.node) = ast_create_node(AST_OTHER, "MIN", NULL); }
#line 2769 "sql_parser.tab.c"
    break;

  case 156: /* aggregate_func: MAX  */
#line 783 "sql_parser.y"
          { (yyval.node) = ast_create_node(AST_OTHER, "MAX", NULL); }
#line 2775 "sql_parser.tab.c"
    break;

  case 157: /* case_expr: CASE when_then_list opt_else END  */
#line 787 "sql_parser.y"
                                     {
        ASTNode *cnode = ast_create_node(AST_CASE_EXPR, "CASE_EXPR", NULL);
        ast_add_child(cnode, (yyvsp[-2].node));
        if ((yyvsp[-1].node)) ast_add_child(cnode, (yyvsp[-1].node));
        (yyval.node) = cnode;
    }
#line 2786 "sql_parser.tab.c"
    break;

  case 158: /* when_then_list: when_then_list when_then_clause  */
#line 796 "sql_parser.y"
                                    {
        ast_add_child((yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2795 "sql_parser.tab.c"
    break;

  case 159: /* when_then_list: when_then_clause  */
#line 800 "sql_parser.y"
                       {
        ASTNode *wtlist = ast_create_node(AST_OTHER, "WHEN_THEN_LIST", NULL);
        ast_add_child(wtlist, (yyvsp[0].node));
        (yyval.node) = wtlist;
    }
#line 2805 "sql_parser.tab.c"
    break;

  case 160: /* when_then_clause: WHEN expr THEN expr  */
#line 808 "sql_parser.y"
                        {
        ASTNode *wt = ast_create_node(AST_WHEN_THEN, "WHEN_THEN", NULL);
        ast_add_child(wt, (yyvsp[-2].node));
        ast_add_child(wt, (yyvsp[0].node));
        (yyval.node) = wt;
    }
#line 2816 "sql_parser.tab.c"
    break;

  case 161: /* opt_else: ELSE expr  */
#line 817 "sql_parser.y"
              {
        ASTNode *enode = ast_create_node(AST_OTHER, "ELSE", NULL);
        ast_add_child(enode, (yyvsp[0].node));
        (yyval.node) = enode;
    }
#line 2826 "sql_parser.tab.c"
    break;

  case 162: /* opt_else: %empty  */
#line 822 "sql_parser.y"
                  { (yyval.node) = NULL; }
#line 2832 "sql_parser.tab.c"
    break;


#line 2836 "sql_parser.tab.c"

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

#line 825 "sql_parser.y"


void yyerror(const char *s) {
    g_syntax_error = 1;
    g_error_line = yylineno;
    g_error_column = yycolumn;
    snprintf(g_last_error, sizeof(g_last_error), "%s near '%s'", s, yytext ? yytext : "");
}
