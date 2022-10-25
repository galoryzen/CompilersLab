%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int idC = 0;
char ids[999999];
int erroresC = 0;
char errores[999999];
%}

ID            [a-zA-Z][a-zA-Z0-9_]*
CTE-ENT       [-]?[0-9]+
CTE-REAL      [-]?[0-9]+(\.[0-9]+)?([eE][-+]?[0-9]+(\.[0-9]+)?)?
ERROR         [0-9]+[0-9a-zA-Z_]+
CTE-CADENA    \".*\"
CTE-CARACTER  \'.*\'


%%

"public"        {fprintf(yyout, "PUBLIC");}
"private"       {fprintf(yyout, "PRIVATE");}
"protected"     {fprintf(yyout, "PROTECTED");}
"static"        {fprintf(yyout, "STATIC");}
"final"         {fprintf(yyout, "FINAL");}
"abstract"      {fprintf(yyout, "ABSTRACT");}
"main"          {fprintf(yyout, "MAIN\n");}
"main "          {fprintf(yyout, "MAIN\n");}
"void"          {fprintf(yyout, "VOID ");}
"new"           {fprintf(yyout, "NEW");}
"return"        {fprintf(yyout, "RETURN");}
"printf"        {fprintf(yyout, "PRINTF");}
"scanf"         {fprintf(yyout, "SCANF");}

"if"            {fprintf(yyout, "IF");}
"else"          {fprintf(yyout, "ELSE");}
"while"         {fprintf(yyout, "WHILE");}
"for"           {fprintf(yyout, "FOR");}
"do"            {fprintf(yyout, "DO");}
"switch"        {fprintf(yyout, "SWITCH");}
"case"          {fprintf(yyout, "CASE");}
"default"       {fprintf(yyout, "DEFAULT");}
"break"         {fprintf(yyout, "BREAK");}
"continue"      {fprintf(yyout, "CONTINUE");}

"int"           {fprintf(yyout, "INT");}
"float"         {fprintf(yyout, "FLOAT");}
"char"          {fprintf(yyout, "CHAR");}
"double"        {fprintf(yyout, "DOUBLE");}
"long"          {fprintf(yyout, "LONG");}
"short"         {fprintf(yyout, "SHORT");}
"boolean"       {fprintf(yyout, "BOOLEAN");}
"String"        {fprintf(yyout, "STRING");}

"//".*"\n"      {}
"/*".*"*/"      {}
\/\*(.*\n)*.*\*\/      {}

{ID}            {

                      fprintf(yyout, "Id= %s ", yytext);
                      char *token;
                      char aux[10000];
                      strcpy(aux, ids);
                      int sw = 1;
                      token = strtok(aux, ";");
                      while(token != NULL && sw == 1){
                          if(strcmp(token, yytext) == 0){
                              sw = 0;
                          }
                          token = strtok(NULL, ";");
                      }
                      if(sw == 1){
                          if(idC > 0) strcat(ids, ";");
                          strcat(ids, yytext);
                          idC++;
                      }
                }

{CTE-ENT}       {fprintf(yyout, "Cte entera= %s ", yytext);}
{CTE-REAL}      {fprintf(yyout, "Cte real= %s ", yytext);}
{CTE-CADENA}    {fprintf(yyout, "Cte cadena= %s ", yytext);}
{CTE-CARACTER}  {fprintf(yyout, "Cte caracter= %s ", yytext);}

"="           {fprintf(yyout, "Op-asig= %s ", yytext);}
"+"           {fprintf(yyout, "Op-sum= %s ", yytext);}
"-"           {fprintf(yyout, "Op-res= %s ", yytext);}
"*"           {fprintf(yyout, "Op-mult= %s ", yytext);}
"/"           {fprintf(yyout, "Op-div= %s ", yytext);}
"%"           {fprintf(yyout, "Op-mod= %s ", yytext);}

"=="          {fprintf(yyout, "Op-igual= %s ", yytext);}
"!="          {fprintf(yyout, "Op-dif= %s ", yytext);}

"++"          {fprintf(yyout, "Op-inc= %s ", yytext);}
"--"          {fprintf(yyout, "Op-dec= %s ", yytext);}
"+="          {fprintf(yyout, "Op-sum-asig= %s ", yytext);}
"-="          {fprintf(yyout, "Op-res-asig= %s ", yytext);}
"*="          {fprintf(yyout, "Op-mul-asig= %s ", yytext);}
"/="          {fprintf(yyout, "Op-div-asig= %s ", yytext);}
"%="          {fprintf(yyout, "Op-mod-asig= %s ", yytext);}

">"           {fprintf(yyout, "Op-mayor= %s ", yytext);}
"<"           {fprintf(yyout, "Op-menor= %s ", yytext);}
">="          {fprintf(yyout, "Op-mayor-igual= %s", yytext);}
"<="         {fprintf(yyout, "Op-menor-igual= %s", yytext);}

"&&"          {fprintf(yyout, "Op-and= %s ", yytext);}
"||"          {fprintf(yyout, "Op-or= %s ", yytext);}
"!"           {fprintf(yyout, "Op-not= %s ", yytext);}

"("           {fprintf(yyout, "Parent-a= %s ", yytext);}
")"           {fprintf(yyout, "Parent-c= %s ", yytext);}
"{ "           {fprintf(yyout, "Inicio=%s\n", yytext);}
"{"           {fprintf(yyout, "Inicio=%s\n", yytext);}
"}"           {fprintf(yyout, "Fin=%s\n", yytext);}
";"           {fprintf(yyout, "Punto-coma=%s", yytext);}

" "           {fprintf(yyout, " ");}
":"           {fprintf(yyout, ":");}
","           {fprintf(yyout, ",");}

{ERROR}         {
                    fprintf(yyout, "err = %s ", yytext);
                    char *token;
                    char aux[10000];
                    strcpy(aux, errores);
                    int sw = 1;
                    token = strtok(aux, ";");
                    while(token != NULL && sw == 1){
                        if(strcmp(token, yytext) == 0){
                            sw = 0;
                        }
                        token = strtok(NULL, ";");
                    }
                    if(sw == 1){
                        if(erroresC > 0) strcat(errores, ";");
                        strcat(errores, yytext);
                        erroresC++;
                    }
                }

.               {
                    fprintf(yyout, "err= %s ", yytext);
                    if(!strstr(errores, yytext)){
                        if(erroresC > 0) strcat(errores, ";");
                        strcat(errores, yytext);
                        erroresC++;
                    }
                }
%%

int yywrap(){}

int main(int argc, char *argv[]){
    FILE *fp = fopen(argv[1], "r");
    FILE *fp2 = fopen("salida.txt", "w");
    yyin = fp;
    yyout = fp2;

    yylex();

    fprintf(fp2, "\nTABLA DE IDENTIFICADORES\n");
    fprintf(fp2, "Se encontraron %d identificadores\n", idC);

    if(idC > 0){
        int i = 0;
        fprintf(fp2, "Id=");
        while(i<strlen(ids)){
            fprintf(fp2, "%c", ids[i]);
            if(ids[i] == ';') fprintf(fp2, " Id=");
            i++;
        }
        fprintf(fp2, ";");
    }

    if(erroresC > 0){
        fprintf(fp2, "\n\nTABLA DE ERRORES\n");
        fprintf(fp2, "Se encontraron %d errores\n", erroresC);
        int i = 0;
        fprintf(fp2, "Error=");
        while(i<strlen(errores)){
            fprintf(fp2, "%c", errores[i]);
            if(errores[i] == ';') fprintf(fp2, " Error=");
            i++;
        }
        fprintf(fp2, ";");
    }
    
    fclose(fp);
    fclose(fp2);
    return 0;
}


