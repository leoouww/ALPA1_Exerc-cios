#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 
	Lista Semana 8 - Malloc
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	1. Fa�a um programa que receba por par�metro inteiro n, e preencha a �rea de 1 a n.
	Verifque se n�o h� vazamento de mem�ria. Aplique para 10 e para 10^6.
	
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	if(argc < 2){
		printf("\nFalta o argumento solicitado.\n");
		exit(1);
	}
	int n = strtol(argv[1],0,0);
	printf("\nAlocando %d inteiros: \n", n);
	int *pi = (int *)malloc(n*sizeof(int));
	if(!pi){
		printf("\nMalloc falhou.\n");
		exit(1);
	}
	else{
		int i;
		for(i = 0; i < n; ++i)
			pi[i] = i;
	}
	printf("\nPronto, preencheu %d inteiros: ",n);
	free(pi);
	return 0;
}
