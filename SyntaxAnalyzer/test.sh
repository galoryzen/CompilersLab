rm -rf lex.yy.c syntax.tab.c syntax.tab.h a.out
bison -d syntax.y
flex lex.l
gcc syntax.tab.c lex.yy.c -o a -ll
./a prueba3.c
