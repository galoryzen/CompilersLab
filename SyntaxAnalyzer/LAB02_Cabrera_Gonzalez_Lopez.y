%{

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
%}

%token PUBLIC
%token PRIVATE
%token PROTECTED
%token STATIC
%token FINAL
%token ABSTRACT
%token MAIN
%token VOID
%token NEW
%token RETURN
%token PRINTF
%token SCANF

%token IF
%token ELSE
%token WHILE
%token FOR
%token DO
%token SWITCH
%token CASE
%token DEFAULT
%token BREAK
%token CONTINUE

%token INT
%token FLOAT
%token CHAR
%token DOUBLE
%token LONG
%token SHORT
%token BOOLEAN
%token STRING

%token ENTERO
%token REAL
%token CADENA
%token CARACTER
%token ID
%token INCLUDE
%token TRUE
%token FALSE

%left OP_SUM OP_RES OP_MULT OP_DIV OP_MOD OP_AND OP_OR OP_NOT OP_ASIG

%left OP_IGUAL OP_DIFF OP_MAYOR OP_MENOR OP_MAYOR_IGUAL OP_MENOR_IGUAL

%token OP_INC
%token OP_DIS
%token OP_SUM_ASIG
%token OP_RES_ASIG
%token OP_MULT_ASIG
%token OP_DIV_ASIG
%token OP_MOD_ASIG
%token MATALO

%token PARENT_A
%token PARENT_C
%token LLAVE_A
%token LLAVE_C
%token CORCHETE_A
%token CORCHETE_C
%token PUNTO_COMA

%token DOS_PUNTOS
%token COMA
%token ERROR

%start INIT

%%


argumentoInclude:   ID
                |   MATALO
                ;

includes:       INCLUDE CADENA PUNTO_COMA
            |   INCLUDE CADENA PUNTO_COMA includes
            |   INCLUDE CADENA includes
            |   INCLUDE CADENA
            |   INCLUDE argumentoInclude PUNTO_COMA
            |   INCLUDE argumentoInclude PUNTO_COMA includes
            |   INCLUDE argumentoInclude includes
            |   INCLUDE argumentoInclude
            |   error
            |   error includes
            ;


INIT    :  includes funcion_init
        |  funcion_init
        |  includes
        ;

funcion_init    :   VOID MAIN PARENT_A PARENT_C LLAVE_A LLAVE_C 
                |   VOID MAIN PARENT_A PARENT_C LLAVE_A cuerpo LLAVE_C
                ;

cuerpo          :   declaracion PUNTO_COMA 
                |   declaracion PUNTO_COMA cuerpo
                |   declaracion cuerpo
                |   asignacion PUNTO_COMA 
                |   asignacion PUNTO_COMA cuerpo
                |   condicion
                |   condicion cuerpo
                |   condicion PUNTO_COMA
                |   condicion PUNTO_COMA cuerpo
                |   ciclo PUNTO_COMA
                |   ciclo PUNTO_COMA cuerpo
                |   ciclo
                |   ciclo cuerpo
                |   lectura
                |   lectura cuerpo
                |   escritura
                |   escritura cuerpo
                |   error cuerpo {yyerrok;}
                |   error {printf("soy retrasado chicos\n"); yyerrok;}
                ;

declaracion     :   tipo dec_comp
                |   tipo dec_comp
                |   tipo dec_comp COMA dec_comp 
                ;

dec_comp        :   ID
                |   ID OP_ASIG expresion
                |   ID COMA dec_comp
                |   ID OP_ASIG expresion COMA dec_comp
                ;

asignacion      :   ID OP_ASIG expresion
                |   ID OP_SUM_ASIG expresion
                |   ID OP_RES_ASIG expresion
                |   ID OP_MULT_ASIG expresion
                |   ID OP_DIV_ASIG expresion
                |   ID OP_MOD_ASIG expresion
                |   ID OP_INC
                |   ID OP_DIS
                ;

expresion       :   expresion OP_SUM expresion
                |   expresion OP_RES expresion
                |   expresion OP_MULT expresion
                |   expresion OP_DIV expresion
                |   expresion OP_MOD expresion
                |   expresion OP_AND expresion
                |   expresion OP_OR expresion
                |   expresion OP_IGUAL expresion
                |   expresion OP_DIFF expresion
                |   expresion OP_MAYOR expresion
                |   expresion OP_MENOR expresion
                |   expresion OP_MAYOR_IGUAL expresion
                |   expresion OP_MENOR_IGUAL expresion
                |   OP_NOT expresion
                |   ID OP_INC
                |   ID OP_DIS
                |   ENTERO
                |   REAL
                |   CADENA
                |   CARACTER
                |   ID
                |   TRUE
                |   FALSE
                ;

condicion       :   IF PARENT_A expresion PARENT_C LLAVE_A LLAVE_C
                |   IF PARENT_A expresion PARENT_C LLAVE_A cuerpo LLAVE_C
                |   IF PARENT_A expresion PARENT_C LLAVE_A LLAVE_C ELSE LLAVE_A LLAVE_C
                |   IF PARENT_A expresion PARENT_C LLAVE_A cuerpo LLAVE_C ELSE LLAVE_A LLAVE_C
                |   IF PARENT_A expresion PARENT_C LLAVE_A LLAVE_C ELSE LLAVE_A cuerpo LLAVE_C
                |   IF PARENT_A expresion PARENT_C LLAVE_A cuerpo LLAVE_C ELSE LLAVE_A cuerpo LLAVE_C
                |   error {yyerrok;}
                |   error cuerpo {yyerrok;}
                ;

argumentoFor    :   ID OP_ASIG expresion
                |   ID OP_INC
                |   ID OP_DIS
                ;

declaracionFor  :   tipo ID OP_ASIG expresion
                |   ID OP_ASIG expresion
                ;

ciclo           :   WHILE PARENT_A expresion PARENT_C LLAVE_A LLAVE_C
                |   WHILE PARENT_A expresion PARENT_C LLAVE_A cuerpo LLAVE_C
                |   DO LLAVE_A LLAVE_C WHILE PARENT_A expresion PARENT_C PUNTO_COMA
                |   DO LLAVE_A cuerpo LLAVE_C WHILE PARENT_A expresion PARENT_C PUNTO_COMA
                |   FOR PARENT_A declaracionFor PUNTO_COMA expresion PUNTO_COMA argumentoFor PARENT_C LLAVE_A LLAVE_C
                |   FOR PARENT_A declaracionFor PUNTO_COMA expresion PUNTO_COMA argumentoFor PARENT_C LLAVE_A cuerpo LLAVE_C
                |   error {yyerrok;}
                |   error cuerpo {yyerrok;}
                ;

lectura         :   SCANF PARENT_A CADENA PARENT_C PUNTO_COMA
                |   SCANF PARENT_A CADENA COMA ID PARENT_C PUNTO_COMA
                |   SCANF PARENT_A CADENA COMA ID COMA ID PARENT_C PUNTO_COMA
                |   SCANF PARENT_A CADENA COMA ID COMA ID COMA ID PARENT_C PUNTO_COMA
                |   error PUNTO_COMA {yyerrok;}
                ;

escritura       :   PRINTF PARENT_A CADENA PARENT_C PUNTO_COMA
                |   PRINTF PARENT_A CADENA COMA ID PARENT_C PUNTO_COMA
                |   PRINTF PARENT_A CADENA COMA ID COMA ID PARENT_C PUNTO_COMA
                |   PRINTF PARENT_A CADENA COMA ID COMA ID COMA ID PARENT_C PUNTO_COMA
                |   error PUNTO_COMA {yyerrok;}
                ;

tipo    :   INT
        |   FLOAT
        |   CHAR
        |   DOUBLE
        |   LONG
        |   SHORT
        |   BOOLEAN
        |   STRING
        ;


%%

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




