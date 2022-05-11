#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


/* 
	Lista Semana 7 - Argumentos
	LEONARDO RODRIGUES DE CASTRO	
	PT3008479
	
	3. Escreva um programa que receba dois números na linha de
	comando e imprima o primeiro elevado ao segundo. Use a função
	pow() 
	
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	double n1, n2;
	
	if(argc < 3){
		printf("\nERRO: Não foram passados os dois argumentos requisitados!\n");
		exit(1);
	}
	n1 = strtod(argv[1],0);
	n2 = strtod(argv[2],0);
	printf("\n%.1lf ^ %.1lf = %.1lf", n1, n2, pow(n1,n2));
	return 0;
}
