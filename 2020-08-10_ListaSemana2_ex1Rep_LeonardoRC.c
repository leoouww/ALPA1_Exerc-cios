#include <stdio.h>
#include <stdlib.h>

/* 

	Lista Semana 2 - Estruturas de Repeti��o
	LEONARDO RODRIGUES DE CASTRO
	
	1. Fa�a um programa que calcule a soma dos quadrados dos N primeiros n�meros
	inteiros.
 
*/

int main(void) {
	int quantidade, quadrado = 0, i = 0;
	
	printf("Digite a quantidade N para descobrir a soma dos quadrados desses N primeiro numeros: ");
	scanf("%d", &quantidade);
	do{
		quadrado = quadrado + i*i;
		i = i + 1;
	}while(i <= quantidade);
	printf("\n\nSoma dos quadrados dos %d primeiros numeros: %d\n", quantidade, quadrado);
	return 0;
}
