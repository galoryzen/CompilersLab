%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int yylex();

%}

%token IF
%token ELSE
%token WHILE

%%
