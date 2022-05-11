#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


/* 
	Lista Semana 8 - Exercícios Vetores e Ponteiros em C
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	2- (Obrigatório) Faça um programa que receba dois números inteiros pela linha de comando
	e calcula o primeiro elevado ao segundo.
	
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	int n1, n2;
	unsigned i;
	
	if(argc < 2){
		printf("\nPasse dois parâmetros como argumento!\n");
		exit(1);
	}
	/*for(i = 0; i < argc; ++i)
		printf("\nArgv[%d] = %.70s", i, argv[i]);*/
	n1 = strtol(argv[1],0,0);
	n2 = strtol(argv[2],0,0);
	int calculo = 1;
	for(i = 1; i <= n2;++i)
		calculo *= n1;
	printf("\n%d elevado a %d = %d", n1, n2, calculo);
	return 0;
}
