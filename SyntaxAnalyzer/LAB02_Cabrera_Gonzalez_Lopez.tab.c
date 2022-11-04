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
#line 1 "LAB02_Cabrera_Gonzalez_Lopez.y"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//yylineno
#include "LAB02_Cabrera_Gonzalez_Lopez.tab.h"
extern int yylex();
extern FILE * yyin;
extern FILE * yyout;
extern int linea;
int errores = 0;
void yyerror(char *s);
extern int yylineno;

#line 87 "LAB02_Cabrera_Gonzalez_Lopez.tab.c"

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

#include "LAB02_Cabrera_Gonzalez_Lopez.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PUBLIC = 3,                     /* PUBLIC  */
  YYSYMBOL_PRIVATE = 4,                    /* PRIVATE  */
  YYSYMBOL_PROTECTED = 5,                  /* PROTECTED  */
  YYSYMBOL_STATIC = 6,                     /* STATIC  */
  YYSYMBOL_FINAL = 7,                      /* FINAL  */
  YYSYMBOL_ABSTRACT = 8,                   /* ABSTRACT  */
  YYSYMBOL_MAIN = 9,                       /* MAIN  */
  YYSYMBOL_VOID = 10,                      /* VOID  */
  YYSYMBOL_NEW = 11,                       /* NEW  */
  YYSYMBOL_RETURN = 12,                    /* RETURN  */
  YYSYMBOL_PRINTF = 13,                    /* PRINTF  */
  YYSYMBOL_SCANF = 14,                     /* SCANF  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_WHILE = 17,                     /* WHILE  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_DO = 19,                        /* DO  */
  YYSYMBOL_SWITCH = 20,                    /* SWITCH  */
  YYSYMBOL_CASE = 21,                      /* CASE  */
  YYSYMBOL_DEFAULT = 22,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 23,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 24,                  /* CONTINUE  */
  YYSYMBOL_INT = 25,                       /* INT  */
  YYSYMBOL_FLOAT = 26,                     /* FLOAT  */
  YYSYMBOL_CHAR = 27,                      /* CHAR  */
  YYSYMBOL_DOUBLE = 28,                    /* DOUBLE  */
  YYSYMBOL_LONG = 29,                      /* LONG  */
  YYSYMBOL_SHORT = 30,                     /* SHORT  */
  YYSYMBOL_BOOLEAN = 31,                   /* BOOLEAN  */
  YYSYMBOL_STRING = 32,                    /* STRING  */
  YYSYMBOL_ENTERO = 33,                    /* ENTERO  */
  YYSYMBOL_REAL = 34,                      /* REAL  */
  YYSYMBOL_CADENA = 35,                    /* CADENA  */
  YYSYMBOL_CARACTER = 36,                  /* CARACTER  */
  YYSYMBOL_ID = 37,                        /* ID  */
  YYSYMBOL_INCLUDE = 38,                   /* INCLUDE  */
  YYSYMBOL_TRUE = 39,                      /* TRUE  */
  YYSYMBOL_FALSE = 40,                     /* FALSE  */
  YYSYMBOL_OP_SUM = 41,                    /* OP_SUM  */
  YYSYMBOL_OP_RES = 42,                    /* OP_RES  */
  YYSYMBOL_OP_MULT = 43,                   /* OP_MULT  */
  YYSYMBOL_OP_DIV = 44,                    /* OP_DIV  */
  YYSYMBOL_OP_MOD = 45,                    /* OP_MOD  */
  YYSYMBOL_OP_AND = 46,                    /* OP_AND  */
  YYSYMBOL_OP_OR = 47,                     /* OP_OR  */
  YYSYMBOL_OP_NOT = 48,                    /* OP_NOT  */
  YYSYMBOL_OP_ASIG = 49,                   /* OP_ASIG  */
  YYSYMBOL_OP_IGUAL = 50,                  /* OP_IGUAL  */
  YYSYMBOL_OP_DIFF = 51,                   /* OP_DIFF  */
  YYSYMBOL_OP_MAYOR = 52,                  /* OP_MAYOR  */
  YYSYMBOL_OP_MENOR = 53,                  /* OP_MENOR  */
  YYSYMBOL_OP_MAYOR_IGUAL = 54,            /* OP_MAYOR_IGUAL  */
  YYSYMBOL_OP_MENOR_IGUAL = 55,            /* OP_MENOR_IGUAL  */
  YYSYMBOL_OP_INC = 56,                    /* OP_INC  */
  YYSYMBOL_OP_DIS = 57,                    /* OP_DIS  */
  YYSYMBOL_OP_SUM_ASIG = 58,               /* OP_SUM_ASIG  */
  YYSYMBOL_OP_RES_ASIG = 59,               /* OP_RES_ASIG  */
  YYSYMBOL_OP_MULT_ASIG = 60,              /* OP_MULT_ASIG  */
  YYSYMBOL_OP_DIV_ASIG = 61,               /* OP_DIV_ASIG  */
  YYSYMBOL_OP_MOD_ASIG = 62,               /* OP_MOD_ASIG  */
  YYSYMBOL_MATALO = 63,                    /* MATALO  */
  YYSYMBOL_PARENT_A = 64,                  /* PARENT_A  */
  YYSYMBOL_PARENT_C = 65,                  /* PARENT_C  */
  YYSYMBOL_LLAVE_A = 66,                   /* LLAVE_A  */
  YYSYMBOL_LLAVE_C = 67,                   /* LLAVE_C  */
  YYSYMBOL_CORCHETE_A = 68,                /* CORCHETE_A  */
  YYSYMBOL_CORCHETE_C = 69,                /* CORCHETE_C  */
  YYSYMBOL_PUNTO_COMA = 70,                /* PUNTO_COMA  */
  YYSYMBOL_DOS_PUNTOS = 71,                /* DOS_PUNTOS  */
  YYSYMBOL_COMA = 72,                      /* COMA  */
  YYSYMBOL_ERROR = 73,                     /* ERROR  */
  YYSYMBOL_YYACCEPT = 74,                  /* $accept  */
  YYSYMBOL_argumentoInclude = 75,          /* argumentoInclude  */
  YYSYMBOL_includes = 76,                  /* includes  */
  YYSYMBOL_INIT = 77,                      /* INIT  */
  YYSYMBOL_funcion_init = 78,              /* funcion_init  */
  YYSYMBOL_cuerpo = 79,                    /* cuerpo  */
  YYSYMBOL_declaracion = 80,               /* declaracion  */
  YYSYMBOL_dec_comp = 81,                  /* dec_comp  */
  YYSYMBOL_asignacion = 82,                /* asignacion  */
  YYSYMBOL_expresion = 83,                 /* expresion  */
  YYSYMBOL_condicion = 84,                 /* condicion  */
  YYSYMBOL_argumentoFor = 85,              /* argumentoFor  */
  YYSYMBOL_declaracionFor = 86,            /* declaracionFor  */
  YYSYMBOL_ciclo = 87,                     /* ciclo  */
  YYSYMBOL_lectura = 88,                   /* lectura  */
  YYSYMBOL_escritura = 89,                 /* escritura  */
  YYSYMBOL_tipo = 90                       /* tipo  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   804

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   328


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
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    89,    89,    90,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   106,   107,   108,   111,   112,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   136,   137,
     138,   141,   142,   143,   144,   147,   148,   149,   150,   151,
     152,   153,   154,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   182,   183,   184,   185,
     186,   187,   188,   189,   192,   193,   194,   197,   198,   201,
     202,   203,   204,   205,   206,   207,   208,   211,   212,   213,
     214,   215,   218,   219,   220,   221,   222,   225,   226,   227,
     228,   229,   230,   231,   232
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
  "\"end of file\"", "error", "\"invalid token\"", "PUBLIC", "PRIVATE",
  "PROTECTED", "STATIC", "FINAL", "ABSTRACT", "MAIN", "VOID", "NEW",
  "RETURN", "PRINTF", "SCANF", "IF", "ELSE", "WHILE", "FOR", "DO",
  "SWITCH", "CASE", "DEFAULT", "BREAK", "CONTINUE", "INT", "FLOAT", "CHAR",
  "DOUBLE", "LONG", "SHORT", "BOOLEAN", "STRING", "ENTERO", "REAL",
  "CADENA", "CARACTER", "ID", "INCLUDE", "TRUE", "FALSE", "OP_SUM",
  "OP_RES", "OP_MULT", "OP_DIV", "OP_MOD", "OP_AND", "OP_OR", "OP_NOT",
  "OP_ASIG", "OP_IGUAL", "OP_DIFF", "OP_MAYOR", "OP_MENOR",
  "OP_MAYOR_IGUAL", "OP_MENOR_IGUAL", "OP_INC", "OP_DIS", "OP_SUM_ASIG",
  "OP_RES_ASIG", "OP_MULT_ASIG", "OP_DIV_ASIG", "OP_MOD_ASIG", "MATALO",
  "PARENT_A", "PARENT_C", "LLAVE_A", "LLAVE_C", "CORCHETE_A", "CORCHETE_C",
  "PUNTO_COMA", "DOS_PUNTOS", "COMA", "ERROR", "$accept",
  "argumentoInclude", "includes", "INIT", "funcion_init", "cuerpo",
  "declaracion", "dec_comp", "asignacion", "expresion", "condicion",
  "argumentoFor", "declaracionFor", "ciclo", "lectura", "escritura",
  "tipo", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-104)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-38)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,    36,    15,   -10,    24,    29,  -104,  -104,   -34,     5,
    -104,  -104,    16,  -104,  -104,   -16,    40,  -104,    79,  -104,
      -9,  -104,  -104,   416,    82,    -4,    17,    26,    34,    38,
      27,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,   729,
    -104,    21,   384,    12,   128,   160,   192,   224,    66,  -104,
    -104,    69,    80,    88,    88,   767,   448,    88,  -104,  -104,
      88,    88,    88,    88,    88,  -104,   256,  -104,   288,   320,
    -104,   352,  -104,  -104,  -104,   -37,    44,   -17,   -13,  -104,
    -104,  -104,  -104,   -43,  -104,  -104,    88,   658,   674,    83,
      48,    97,   118,    70,   722,   722,   722,   722,   722,   722,
    -104,  -104,  -104,  -104,    88,    66,    66,    68,   103,    74,
     111,  -104,  -104,   117,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    84,    85,    88,
      88,   113,    99,   147,   605,  -104,  -104,  -104,    19,  -104,
      20,   117,   117,   117,   117,   117,   117,   117,  -104,  -104,
    -104,  -104,  -104,  -104,   480,   512,   722,   637,    88,    88,
     112,    66,   114,   144,   124,   146,   180,   132,  -104,   133,
     164,   722,   690,    88,  -104,  -104,    22,  -104,    61,   136,
     187,  -104,   -18,   139,   138,   706,   142,   176,   145,   177,
     544,   150,    88,  -104,  -104,   162,  -104,   156,  -104,   166,
    -104,   167,  -104,   168,   576,   722,   608,  -104,   163,   170,
    -104,  -104,   169,  -104,   178,  -104,  -104,  -104,  -104
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,    16,     0,    15,    13,     0,     0,
       2,     3,     0,    14,     1,     0,     0,     6,     0,    10,
       0,     5,     9,     0,     0,     0,     0,     0,     0,     0,
       0,   107,   108,   109,   110,   111,   112,   113,   114,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,   101,
      36,     0,     0,     0,     0,     0,     0,     0,    51,    52,
       0,     0,     0,     0,     0,    18,     0,    21,     0,     0,
      25,     0,    31,    33,    35,    41,    38,     0,     0,    69,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,     0,     0,    45,    46,    47,    48,    49,    50,
      20,    23,    27,    29,     0,     0,     0,     0,     0,     0,
       0,    67,    68,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,    40,   102,     0,    97,
       0,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,    89,     0,
       0,    87,     0,     0,    44,   103,     0,    98,     0,     0,
      77,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,    86,     0,    91,     0,   104,     0,
      99,     0,    78,     0,     0,    84,     0,    92,     0,     0,
      80,    79,     0,    93,     0,   105,   100,    81,    94
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,   652,  -104,   230,   -24,  -104,  -103,  -104,   -53,
    -104,  -104,  -104,  -104,  -104,  -104,   189
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    12,     4,     5,     6,    41,    42,    76,    43,    87,
      44,   183,    90,    45,    46,    47,    48
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,    88,   135,   136,    94,    -7,     1,    95,    96,    97,
      98,    99,   104,   111,   112,    -7,   -11,     1,    67,     1,
      70,    72,    73,    74,     8,     9,   -11,    10,     2,    14,
      15,   192,    93,   113,     2,   105,   -12,     1,   193,   194,
      -4,     1,   100,     3,   101,   102,   -12,   103,   107,    20,
      -4,   134,   109,    11,     3,   108,     3,    23,   174,   110,
      51,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,     3,    16,   156,   157,     3,    -8,
       1,    52,    68,    24,   162,   164,    18,   186,    65,    -8,
      53,   163,   165,    56,   187,    25,    26,    27,    54,    28,
      29,    30,    55,    75,    77,   171,   172,    31,    32,    33,
      34,    35,    36,    37,    38,    78,   106,     3,   130,    39,
     185,    79,    80,    81,    82,    83,   188,    84,    85,    24,
     167,   169,   129,   189,   131,   132,    86,   133,   137,   205,
     138,    25,    26,    27,   139,    28,    29,    30,   140,   -37,
     154,   155,    49,    31,    32,    33,    34,    35,    36,    37,
      38,    24,   158,   159,   160,    39,   203,   121,   122,   123,
     124,   125,   126,    25,    26,    27,   173,    28,    29,    30,
     212,   176,   214,   178,   175,    31,    32,    33,    34,    35,
      36,    37,    38,    24,   177,   -24,   179,    39,    69,   180,
     181,   182,   190,   191,   195,    25,    26,    27,   196,    28,
      29,    30,   198,   199,   201,   200,   204,    31,    32,    33,
      34,    35,    36,    37,    38,    24,   207,   -30,   206,    39,
      71,   208,   209,   215,    13,   210,   217,    25,    26,    27,
     216,    28,    29,    30,    91,   218,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    24,     0,   -32,
       0,    39,   -32,     0,     0,     0,     0,     0,     0,    25,
      26,    27,     0,    28,    29,    30,     0,     0,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    24,
       0,   -34,     0,    39,   -34,     0,     0,     0,     0,     0,
       0,    25,    26,    27,     0,    28,    29,    30,     0,     0,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
      38,    24,     0,   -19,     0,    39,   -19,     0,     0,     0,
       0,     0,     0,    25,    26,    27,     0,    28,    29,    30,
       0,     0,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    24,     0,   -22,     0,    39,   -22,     0,
       0,     0,     0,     0,     0,    25,    26,    27,     0,    28,
      29,    30,     0,     0,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    24,     0,   -26,     0,    39,
     -26,     0,     0,     0,     0,     0,     0,    25,    26,    27,
       0,    28,    29,    30,     0,     0,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    24,     0,   -28,
       0,    39,   -28,     0,     0,     0,     0,     0,     0,    25,
      26,    27,     0,    28,    29,    30,     0,     0,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    24,
       0,     0,     0,    39,    66,     0,     0,     0,     0,     0,
       0,    25,    26,    27,     0,    28,    29,    30,     0,     0,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
      38,    24,     0,    40,     0,    39,     0,     0,     0,     0,
       0,     0,     0,    25,    26,    27,     0,    28,    29,    30,
       0,     0,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    24,     0,    92,     0,    39,     0,     0,
       0,     0,     0,     0,     0,    25,    26,    27,     0,    28,
      29,    30,     0,     0,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    24,     0,   166,     0,    39,
       0,     0,     0,     0,     0,     0,     0,    25,    26,    27,
       0,    28,    29,    30,     0,     0,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    24,     0,   168,
       0,    39,     0,     0,     0,     0,     0,     0,     0,    25,
      26,    27,     0,    28,    29,    30,     0,     0,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    24,
       0,   202,     0,    39,     0,     0,     0,     0,     0,     0,
       0,    25,    26,    27,     0,    28,    29,    30,     0,     0,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
      38,     0,     0,   211,     0,    39,   114,   115,   116,   117,
     118,   119,   120,     7,     0,   121,   122,   123,   124,   125,
     126,    17,     0,     0,    19,     0,     0,     0,    21,     0,
      22,     0,     0,     0,     0,   213,     0,   161,   114,   115,
     116,   117,   118,   119,   120,     0,     0,   121,   122,   123,
     124,   125,   126,     0,     0,     0,     0,     0,     0,   114,
     115,   116,   117,   118,   119,   120,     0,   170,   121,   122,
     123,   124,   125,   126,     0,   114,   115,   116,   117,   118,
     119,   120,     0,   127,   121,   122,   123,   124,   125,   126,
       0,   114,   115,   116,   117,   118,   119,   120,     0,   128,
     121,   122,   123,   124,   125,   126,     0,   114,   115,   116,
     117,   118,   119,   120,     0,   184,   121,   122,   123,   124,
     125,   126,     0,   114,   115,   116,   117,   118,   119,   120,
       0,   197,   121,   122,   123,   124,   125,   126,    57,     0,
       0,     0,     0,     0,     0,    58,    59,    60,    61,    62,
      63,    64,    31,    32,    33,    34,    35,    36,    37,    38,
       0,     0,     0,     0,    89
};

static const yytype_int16 yycheck[] =
{
      24,    54,   105,   106,    57,     0,     1,    60,    61,    62,
      63,    64,    49,    56,    57,    10,     0,     1,    42,     1,
      44,    45,    46,    47,     9,    35,    10,    37,    10,     0,
      64,    49,    56,    86,    10,    72,     0,     1,    56,    57,
       0,     1,    66,    38,    68,    69,    10,    71,    65,    65,
      10,   104,    65,    63,    38,    72,    38,    66,   161,    72,
      64,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    38,    70,   129,   130,    38,     0,
       1,    64,    70,     1,    65,    65,    70,    65,    67,    10,
      64,    72,    72,    66,    72,    13,    14,    15,    64,    17,
      18,    19,    64,    37,    35,   158,   159,    25,    26,    27,
      28,    29,    30,    31,    32,    35,    72,    38,    70,    37,
     173,    33,    34,    35,    36,    37,    65,    39,    40,     1,
     154,   155,    49,    72,    37,    17,    48,    67,    70,   192,
      37,    13,    14,    15,    70,    17,    18,    19,    37,    67,
      66,    66,    70,    25,    26,    27,    28,    29,    30,    31,
      32,     1,    49,    64,    17,    37,   190,    50,    51,    52,
      53,    54,    55,    13,    14,    15,    64,    17,    18,    19,
     204,    37,   206,    37,    70,    25,    26,    27,    28,    29,
      30,    31,    32,     1,    70,    67,    16,    37,    70,    67,
      67,    37,    66,    16,    65,    13,    14,    15,    70,    17,
      18,    19,    70,    37,    37,    70,    66,    25,    26,    27,
      28,    29,    30,    31,    32,     1,    70,    67,    66,    37,
      70,    65,    65,    70,     4,    67,    67,    13,    14,    15,
      70,    17,    18,    19,    55,    67,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,     1,    -1,    67,
      -1,    37,    70,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,     1,
      -1,    67,    -1,    37,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    -1,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,     1,    -1,    67,    -1,    37,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,     1,    -1,    67,    -1,    37,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,     1,    -1,    67,    -1,    37,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,     1,    -1,    67,
      -1,    37,    70,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,     1,
      -1,    -1,    -1,    37,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    -1,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,     1,    -1,    67,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,     1,    -1,    67,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,     1,    -1,    67,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,     1,    -1,    67,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,     1,
      -1,    67,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    -1,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    67,    -1,    37,    41,    42,    43,    44,
      45,    46,    47,     1,    -1,    50,    51,    52,    53,    54,
      55,     9,    -1,    -1,    12,    -1,    -1,    -1,    16,    -1,
      18,    -1,    -1,    -1,    -1,    67,    -1,    72,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    -1,    70,    50,    51,
      52,    53,    54,    55,    -1,    41,    42,    43,    44,    45,
      46,    47,    -1,    65,    50,    51,    52,    53,    54,    55,
      -1,    41,    42,    43,    44,    45,    46,    47,    -1,    65,
      50,    51,    52,    53,    54,    55,    -1,    41,    42,    43,
      44,    45,    46,    47,    -1,    65,    50,    51,    52,    53,
      54,    55,    -1,    41,    42,    43,    44,    45,    46,    47,
      -1,    65,    50,    51,    52,    53,    54,    55,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    10,    38,    76,    77,    78,    76,     9,    35,
      37,    63,    75,    78,     0,    64,    70,    76,    70,    76,
      65,    76,    76,    66,     1,    13,    14,    15,    17,    18,
      19,    25,    26,    27,    28,    29,    30,    31,    32,    37,
      67,    79,    80,    82,    84,    87,    88,    89,    90,    70,
      79,    64,    64,    64,    64,    64,    66,    49,    56,    57,
      58,    59,    60,    61,    62,    67,    70,    79,    70,    70,
      79,    70,    79,    79,    79,    37,    81,    35,    35,    33,
      34,    35,    36,    37,    39,    40,    48,    83,    83,    37,
      86,    90,    67,    79,    83,    83,    83,    83,    83,    83,
      79,    79,    79,    79,    49,    72,    72,    65,    72,    65,
      72,    56,    57,    83,    41,    42,    43,    44,    45,    46,
      47,    50,    51,    52,    53,    54,    55,    65,    65,    49,
      70,    37,    17,    67,    83,    81,    81,    70,    37,    70,
      37,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    66,    66,    83,    83,    49,    64,
      17,    72,    65,    72,    65,    72,    67,    79,    67,    79,
      70,    83,    83,    64,    81,    70,    37,    70,    37,    16,
      67,    67,    37,    85,    65,    83,    65,    72,    65,    72,
      66,    16,    49,    56,    57,    65,    70,    65,    70,    37,
      70,    37,    67,    79,    66,    83,    66,    70,    65,    65,
      67,    67,    79,    67,    79,    70,    70,    67,    67
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    74,    75,    75,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    77,    77,    77,    78,    78,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      80,    81,    81,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    85,    85,    86,    86,    87,
      87,    87,    87,    87,    87,    87,    87,    88,    88,    88,
      88,    88,    89,    89,    89,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     3,     4,     3,     2,     3,     4,
       3,     2,     1,     2,     2,     1,     1,     6,     7,     2,
       3,     2,     2,     3,     1,     2,     2,     3,     2,     3,
       1,     2,     1,     2,     1,     2,     2,     1,     2,     2,
       4,     1,     3,     3,     5,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     6,     7,     9,    10,
      10,    11,     1,     2,     3,     2,     2,     4,     3,     6,
       7,     8,     9,    10,    11,     1,     2,     5,     7,     9,
      11,     2,     5,     7,     9,    11,     2,     1,     1,     1,
       1,     1,     1,     1,     1
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
  case 36: /* cuerpo: error cuerpo  */
#line 132 "LAB02_Cabrera_Gonzalez_Lopez.y"
                                 {yyerrok;}
#line 1429 "LAB02_Cabrera_Gonzalez_Lopez.tab.c"
    break;

  case 37: /* cuerpo: error  */
#line 133 "LAB02_Cabrera_Gonzalez_Lopez.y"
                          {printf("soy retrasado chicos\n"); yyerrok;}
#line 1435 "LAB02_Cabrera_Gonzalez_Lopez.tab.c"
    break;

  case 82: /* condicion: error  */
#line 188 "LAB02_Cabrera_Gonzalez_Lopez.y"
                          {yyerrok;}
#line 1441 "LAB02_Cabrera_Gonzalez_Lopez.tab.c"
    break;

  case 83: /* condicion: error cuerpo  */
#line 189 "LAB02_Cabrera_Gonzalez_Lopez.y"
                                 {yyerrok;}
#line 1447 "LAB02_Cabrera_Gonzalez_Lopez.tab.c"
    break;

  case 95: /* ciclo: error  */
#line 207 "LAB02_Cabrera_Gonzalez_Lopez.y"
                          {yyerrok;}
#line 1453 "LAB02_Cabrera_Gonzalez_Lopez.tab.c"
    break;

  case 96: /* ciclo: error cuerpo  */
#line 208 "LAB02_Cabrera_Gonzalez_Lopez.y"
                                 {yyerrok;}
#line 1459 "LAB02_Cabrera_Gonzalez_Lopez.tab.c"
    break;

  case 101: /* lectura: error PUNTO_COMA  */
#line 215 "LAB02_Cabrera_Gonzalez_Lopez.y"
                                     {yyerrok;}
#line 1465 "LAB02_Cabrera_Gonzalez_Lopez.tab.c"
    break;

  case 106: /* escritura: error PUNTO_COMA  */
#line 222 "LAB02_Cabrera_Gonzalez_Lopez.y"
                                     {yyerrok;}
#line 1471 "LAB02_Cabrera_Gonzalez_Lopez.tab.c"
    break;


#line 1475 "LAB02_Cabrera_Gonzalez_Lopez.tab.c"

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

#line 236 "LAB02_Cabrera_Gonzalez_Lopez.y"


int main(int argc, char *argv[])
{
    if (argc == 2){
        yyin = fopen (argv[1], "r");
    	yyout=fopen("salida.txt","w");

        if (yyin == NULL) {
            printf ("El fichero %s no se puede abrir\n", argv[1]);
            exit (-1);
        }else{
			do {
				yyparse();
			} while(!feof(yyin));
			if(errores==0){
				fprintf(yyout, "No hubo ningun error sintactico.");
				fprintf(stderr, "No hubo ningun error sintactico.\n");	
			}
		}
			
	}
}

void yyerror(char *s)
{
    errores++;
    fprintf(yyout, "La linea %d tiene un error sintáctico\n", (linea+1));
}




