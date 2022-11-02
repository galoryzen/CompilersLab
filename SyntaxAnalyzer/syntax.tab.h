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

#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PUBLIC = 258,                  /* PUBLIC  */
    PRIVATE = 259,                 /* PRIVATE  */
    PROTECTED = 260,               /* PROTECTED  */
    STATIC = 261,                  /* STATIC  */
    FINAL = 262,                   /* FINAL  */
    ABSTRACT = 263,                /* ABSTRACT  */
    MAIN = 264,                    /* MAIN  */
    VOID = 265,                    /* VOID  */
    NEW = 266,                     /* NEW  */
    RETURN = 267,                  /* RETURN  */
    PRINTF = 268,                  /* PRINTF  */
    SCANF = 269,                   /* SCANF  */
    IF = 270,                      /* IF  */
    ELSE = 271,                    /* ELSE  */
    WHILE = 272,                   /* WHILE  */
    FOR = 273,                     /* FOR  */
    DO = 274,                      /* DO  */
    SWITCH = 275,                  /* SWITCH  */
    CASE = 276,                    /* CASE  */
    DEFAULT = 277,                 /* DEFAULT  */
    BREAK = 278,                   /* BREAK  */
    CONTINUE = 279,                /* CONTINUE  */
    INT = 280,                     /* INT  */
    FLOAT = 281,                   /* FLOAT  */
    CHAR = 282,                    /* CHAR  */
    DOUBLE = 283,                  /* DOUBLE  */
    LONG = 284,                    /* LONG  */
    SHORT = 285,                   /* SHORT  */
    BOOLEAN = 286,                 /* BOOLEAN  */
    STRING = 287,                  /* STRING  */
    ENTERO = 288,                  /* ENTERO  */
    REAL = 289,                    /* REAL  */
    CADENA = 290,                  /* CADENA  */
    CARACTER = 291,                /* CARACTER  */
    ID = 292,                      /* ID  */
    TRUE = 293,                    /* TRUE  */
    FALSE = 294,                   /* FALSE  */
    OP_SUM = 295,                  /* OP_SUM  */
    OP_RES = 296,                  /* OP_RES  */
    OP_MULT = 297,                 /* OP_MULT  */
    OP_DIV = 298,                  /* OP_DIV  */
    OP_MOD = 299,                  /* OP_MOD  */
    OP_AND = 300,                  /* OP_AND  */
    OP_OR = 301,                   /* OP_OR  */
    OP_NOT = 302,                  /* OP_NOT  */
    OP_ASIG = 303,                 /* OP_ASIG  */
    OP_IGUAL = 304,                /* OP_IGUAL  */
    OP_DIFF = 305,                 /* OP_DIFF  */
    OP_MAYOR = 306,                /* OP_MAYOR  */
    OP_MENOR = 307,                /* OP_MENOR  */
    OP_MAYOR_IGUAL = 308,          /* OP_MAYOR_IGUAL  */
    OP_MENOR_IGUAL = 309,          /* OP_MENOR_IGUAL  */
    OP_INC = 310,                  /* OP_INC  */
    OP_DIS = 311,                  /* OP_DIS  */
    OP_SUM_ASIG = 312,             /* OP_SUM_ASIG  */
    OP_RES_ASIG = 313,             /* OP_RES_ASIG  */
    OP_MULT_ASIG = 314,            /* OP_MULT_ASIG  */
    OP_DIV_ASIG = 315,             /* OP_DIV_ASIG  */
    OP_MOD_ASIG = 316,             /* OP_MOD_ASIG  */
    PARENT_A = 317,                /* PARENT_A  */
    PARENT_C = 318,                /* PARENT_C  */
    LLAVE_A = 319,                 /* LLAVE_A  */
    LLAVE_C = 320,                 /* LLAVE_C  */
    CORCHETE_A = 321,              /* CORCHETE_A  */
    CORCHETE_C = 322,              /* CORCHETE_C  */
    PUNTO_COMA = 323,              /* PUNTO_COMA  */
    DOS_PUNTOS = 324,              /* DOS_PUNTOS  */
    COMA = 325                     /* COMA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */
