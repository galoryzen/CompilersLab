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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    OP_SUM = 293,                  /* OP_SUM  */
    OP_RES = 294,                  /* OP_RES  */
    OP_MULT = 295,                 /* OP_MULT  */
    OP_DIV = 296,                  /* OP_DIV  */
    OP_MOD = 297,                  /* OP_MOD  */
    OP_AND = 298,                  /* OP_AND  */
    OP_OR = 299,                   /* OP_OR  */
    OP_NOT = 300,                  /* OP_NOT  */
    OP_ASIG = 301,                 /* OP_ASIG  */
    OP_IGUAL = 302,                /* OP_IGUAL  */
    OP_DIFF = 303,                 /* OP_DIFF  */
    OP_MAYOR = 304,                /* OP_MAYOR  */
    OP_MENOR = 305,                /* OP_MENOR  */
    OP_MAYOR_IGUAL = 306,          /* OP_MAYOR_IGUAL  */
    OP_MENOR_IGUAL = 307,          /* OP_MENOR_IGUAL  */
    OP_INC = 308,                  /* OP_INC  */
    OP_DIS = 309,                  /* OP_DIS  */
    OP_SUM_ASIG = 310,             /* OP_SUM_ASIG  */
    OP_RES_ASIG = 311,             /* OP_RES_ASIG  */
    OP_MULT_ASIG = 312,            /* OP_MULT_ASIG  */
    OP_DIV_ASIG = 313,             /* OP_DIV_ASIG  */
    OP_MOD_ASIG = 314,             /* OP_MOD_ASIG  */
    PARENT_A = 315,                /* PARENT_A  */
    PARENT_C = 316,                /* PARENT_C  */
    LLAVE_A = 317,                 /* LLAVE_A  */
    LLAVE_C = 318,                 /* LLAVE_C  */
    CORCHETE_A = 319,              /* CORCHETE_A  */
    CORCHETE_C = 320,              /* CORCHETE_C  */
    PUNTO_COMA = 321,              /* PUNTO_COMA  */
    DOS_PUNTOS = 322,              /* DOS_PUNTOS  */
    COMA = 323                     /* COMA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define PUBLIC 258
#define PRIVATE 259
#define PROTECTED 260
#define STATIC 261
#define FINAL 262
#define ABSTRACT 263
#define MAIN 264
#define VOID 265
#define NEW 266
#define RETURN 267
#define PRINTF 268
#define SCANF 269
#define IF 270
#define ELSE 271
#define WHILE 272
#define FOR 273
#define DO 274
#define SWITCH 275
#define CASE 276
#define DEFAULT 277
#define BREAK 278
#define CONTINUE 279
#define INT 280
#define FLOAT 281
#define CHAR 282
#define DOUBLE 283
#define LONG 284
#define SHORT 285
#define BOOLEAN 286
#define STRING 287
#define ENTERO 288
#define REAL 289
#define CADENA 290
#define CARACTER 291
#define ID 292
#define OP_SUM 293
#define OP_RES 294
#define OP_MULT 295
#define OP_DIV 296
#define OP_MOD 297
#define OP_AND 298
#define OP_OR 299
#define OP_NOT 300
#define OP_ASIG 301
#define OP_IGUAL 302
#define OP_DIFF 303
#define OP_MAYOR 304
#define OP_MENOR 305
#define OP_MAYOR_IGUAL 306
#define OP_MENOR_IGUAL 307
#define OP_INC 308
#define OP_DIS 309
#define OP_SUM_ASIG 310
#define OP_RES_ASIG 311
#define OP_MULT_ASIG 312
#define OP_DIV_ASIG 313
#define OP_MOD_ASIG 314
#define PARENT_A 315
#define PARENT_C 316
#define LLAVE_A 317
#define LLAVE_C 318
#define CORCHETE_A 319
#define CORCHETE_C 320
#define PUNTO_COMA 321
#define DOS_PUNTOS 322
#define COMA 323

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
