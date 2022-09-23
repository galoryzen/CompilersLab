%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int idC = 1;
char ids[99999];
int errC = 1;
char errs[99999];
%}

ID            [a-zA-Z_][a-zA-Z0-9_]*
CTE-ENT       [-]?[0-9]+
CTE-REAL      [-]?[0-9]+(\.[0-9]+)?([eE][-+]?[0-9]+(\.[0-9]+)?)?
ERROR         [0-9]+[0-9a-zA-Z_]+
CTE-CADENA    \".*\"


%%

"public"        {fprintf(yyout, "PUBLIC");}
"private"       {fprintf(yyout, "PRIVATE");}
"protected"     {fprintf(yyout, "PROTECTED");}
"static"        {fprintf(yyout, "STATIC");}
"final"         {fprintf(yyout, "FINAL");}
"abstract"      {fprintf(yyout, "ABSTRACT");}
"main"          {fprintf(yyout, "MAIN\n");}
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

{ID}          {

                      fprintf(yyout, "ID= %s ", yytext);
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
                          if(idC > 1) strcat(ids, ";");
                          strcat(ids, yytext);
                          idC++;
                      }
                  }

{CTE-ENT}     {fprintf(yyout, "Cte entera=%s", yytext);}
{CTE-REAL}    {fprintf(yyout, "Cte real=%s", yytext);}
{CTE-CADENA}  {fprintf(yyout, "Cte cadena=%s", yytext);}

"="           {fprintf(yyout, "Op-asig=%s", yytext);}
"+"           {fprintf(yyout, "Op-sum=%s", yytext);}
"-"           {fprintf(yyout, "Op-res=%s", yytext);}
"*"           {fprintf(yyout, "Op-mul=%s", yytext);}
"/"           {fprintf(yyout, "Op-div=%s", yytext);}

"=="          {fprintf(yyout, "Op-igual=%s", yytext);}
"!="          {fprintf(yyout, "Op-dif=%s", yytext);}

"++"          {fprintf(yyout, "Op-inc=%s", yytext);}
"--"          {fprintf(yyout, "Op-dec=%s", yytext);}
"+="          {fprintf(yyout, "Op-sum-asig=%s", yytext);}
"-="          {fprintf(yyout, "Op-res-asig=%s", yytext);}
"*="          {fprintf(yyout, "Op-mul-asig=%s", yytext);}
"/="          {fprintf(yyout, "Op-div-asig=%s", yytext);}

">"           {fprintf(yyout, "Op-mayor=%s", yytext);}
"<"           {fprintf(yyout, "Op-menor=%s", yytext);}
">="          {fprintf(yyout, "Op-mayor-igual=%s", yytext);}
"<="         {fprintf(yyout, "Op-menor-igual=%s", yytext);}

"&&"          {fprintf(yyout, "Op-and=%s", yytext);}
"||"          {fprintf(yyout, "Op-or=%s", yytext);}
"!"           {fprintf(yyout, "Op-not=%s", yytext);}

"("           {fprintf(yyout, "Parent-a= %s ", yytext);}
")"           {fprintf(yyout, "Parent-c= %s", yytext);}
"{"           {fprintf(yyout, "Inicio=%s\n", yytext);}
"}"           {fprintf(yyout, "Fin=%s", yytext);}
";"           {fprintf(yyout, "Punto-coma=%s", yytext);}

" "           {fprintf(yyout, " ");}
":"           {fprintf(yyout, ":");}
","           {fprintf(yyout, ",");}

%%

int yywrap(){}

int main(int argc, char *argv[]){
    FILE *fp = fopen(argv[1], "r");
    FILE *fp2 = fopen("salida.txt", "w");
    yyin = fp;
    yyout = fp2;

    yylex();

    fprintf(fp2, "\n\nIdentificadores: \n");
    fprintf(fp2, "Se encontraron %d identificadores", idC-1);

    if(idC > 1){
        int i = 0;
        fprintf(fp2, "ID=");
        while(i<strlen(ids)){
            fprintf(fp2, "%c", ids[i]);
            if(ids[i] == ';') fprintf(fp2, " ID=");
            i++;
        }
    }

    return 0;
}


