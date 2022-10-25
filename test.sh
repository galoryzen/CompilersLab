rm -rf lex.yy.c LAB01_Cabrera_Gonzalez_Lopez salida.txt
flex LAB01_Cabrera_Gonzalez_Lopez.l
gcc lex.yy.c -o LAB01_Cabrera_Gonzalez_Lopez
./LAB01_Cabrera_Gonzalez_Lopez prueba2.c
