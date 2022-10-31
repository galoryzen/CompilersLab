%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//yylineno
#include "syntax.tab.h"
extern int yylex();
extern FILE * yyin;
extern FILE * yyout;
extern int linea;
int errores = 0;
void yyerror(char *s);
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

%left OP_SUM OP_RES OP_MULT OP_DIV OP_MOD OP_AND OP_OR OP_NOT OP_ASIG

%left OP_IGUAL OP_DIFF OP_MAYOR OP_MENOR OP_MAYOR_IGUAL OP_MENOR_IGUAL

%token OP_INC
%token OP_DIS
%token OP_SUM_ASIG
%token OP_RES_ASIG
%token OP_MULT_ASIG
%token OP_DIV_ASIG
%token OP_MOD_ASIG

%token PARENT_A
%token PARENT_C
%token LLAVE_A
%token LLAVE_C
%token CORCHETE_A
%token CORCHETE_C
%token PUNTO_COMA

%token DOS_PUNTOS
%token COMA

%start INIT

%%

INIT  :   funcion_init
        ;

funcion_init    :   VOID MAIN PARENT_A PARENT_C LLAVE_A LLAVE_C 
                |   VOID MAIN PARENT_A PARENT_C LLAVE_A cuerpo LLAVE_C
                ;

cuerpo  :   declaracion
        |   declaracion cuerpo
        |   sentencia
        |   sentencia cuerpo
        ;

declaracion     :   tipo ID PUNTO_COMA
                |   tipo ID COMA ID PUNTO_COMA
                |   tipo ID COMA declaracion
                |   tipo ID 
                |   tipo ID OP_ASIG expresion PUNTO_COMA
                |   tipo ID CORCHETE_A ENTERO CORCHETE_C PUNTO_COMA
                |   tipo ID CORCHETE_A ENTERO CORCHETE_C OP_ASIG CORCHETE_A CORCHETE_C PUNTO_COMA
                |   tipo ID CORCHETE_A ENTERO CORCHETE_C OP_ASIG CORCHETE_A lista CORCHETE_C PUNTO_COMA
                ;

lista   :   expresion
        |   expresion COMA lista
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

sentencia   :   IF PARENT_A expresion PARENT_C CORCHETE_A CORCHETE_C
            |   IF PARENT_A expresion PARENT_C CORCHETE_A cuerpo CORCHETE_C
            |   IF PARENT_A expresion PARENT_C CORCHETE_A CORCHETE_C ELSE CORCHETE_A CORCHETE_C
            |   IF PARENT_A expresion PARENT_C CORCHETE_A CORCHETE_C ELSE CORCHETE_A cuerpo CORCHETE_C
            |   IF PARENT_A expresion PARENT_C CORCHETE_A cuerpo CORCHETE_C ELSE CORCHETE_A CORCHETE_C
            |   IF PARENT_A expresion PARENT_C CORCHETE_A cuerpo CORCHETE_C ELSE CORCHETE_A cuerpo CORCHETE_C
            |   WHILE PARENT_A expresion PARENT_C CORCHETE_A CORCHETE_C
            |   WHILE PARENT_A expresion PARENT_C CORCHETE_A cuerpo CORCHETE_C
            |   DO CORCHETE_A CORCHETE_C WHILE PARENT_A expresion PARENT_C PUNTO_COMA
            |   DO CORCHETE_A cuerpo CORCHETE_C WHILE PARENT_A expresion PARENT_C PUNTO_COMA
            |   FOR PARENT_A expresion PUNTO_COMA expresion PUNTO_COMA expresion PARENT_C CORCHETE_A CORCHETE_C
            |   FOR PARENT_A expresion PUNTO_COMA expresion PUNTO_COMA expresion PARENT_C CORCHETE_A cuerpo CORCHETE_C
            |   FOR PARENT_A expresion PUNTO_COMA expresion PUNTO_COMA PARENT_C CORCHETE_A CORCHETE_C
            |   FOR PARENT_A expresion PUNTO_COMA expresion PUNTO_COMA PARENT_C CORCHETE_A cuerpo CORCHETE_C
            |   FOR PARENT_A expresion PUNTO_COMA PUNTO_COMA expresion PARENT_C CORCHETE_A CORCHETE_C
            |   FOR PARENT_A expresion PUNTO_COMA PUNTO_COMA expresion PARENT_C CORCHETE_A cuerpo CORCHETE_C

expresion   :   expresion OP_SUM expresion
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
            |   OP_INC expresion
            |   OP_DIS expresion
            |   expresion OP_INC
            |   expresion OP_DIS
            |   expresion OP_SUM_ASIG expresion
            |   expresion OP_RES_ASIG expresion
            |   expresion OP_MULT_ASIG expresion
            |   expresion OP_DIV_ASIG expresion
            |   expresion OP_MOD_ASIG expresion
            |   expresion OP_ASIG expresion
            |   PARENT_A expresion PARENT_C
            |   ID
            |   ID CORCHETE_A expresion CORCHETE_C
            |   ENTERO
            |   REAL
            |   CARACTER
            |   CADENA
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
    fprintf(yyout, "La linea %d tiene un error sintáctico", linea);
}




