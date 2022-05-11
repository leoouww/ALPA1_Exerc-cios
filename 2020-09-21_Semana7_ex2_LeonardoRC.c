#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


/* 
	Lista Semana 7 - Argumentos
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	2. Escreva um programa que receba dois inteiros na linha de comando
	e imprima seu produto. 
	
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	int n1, n2;
	unsigned i;
	
	if(argc < 2){
		printf("\nPasse dois parâmetros como argumento!\n");
		exit(1);
	}
	for(i = 0; i < argc; ++i)
		printf("\nArgv[%d] = %.70s", i, argv[i]);
	n1 = strtol(argv[1],0,0);
	n2 = strtol(argv[2],0,0);
	printf("\n%d vezes %d = %d", n1, n2, n1*n2);
	return 0;
}
