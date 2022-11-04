rm -rf lex.yy.c LAB02_Cabrera_Gonzalez_Lopez.tab.c LAB02_Cabrera_Gonzalez_Lopez.tab.h a.out
bison -d LAB02_Cabrera_Gonzalez_Lopez.y
flex LAB02_Cabrera_Gonzalez_Lopez.l
gcc LAB02_Cabrera_Gonzalez_Lopez.tab.c lex.yy.c -o LAB02_Cabrera_Gonzalez_Lopez -ll
./LAB02_Cabrera_Gonzalez_Lopez $1
