#include <stdio.h>
#include <stdlib.h>

/* 
	Lista Semana 2 - Estruturas de Repeti��o
	LEONARDO RODRIGUES DE CASTRO
	
	1. Fa�a um algoritmo que calcule e imprima o fatorial de um n�mero inteiro
	
*/

int main(int argc, char *argv[]) {
	int fatorial = 1, numero, i = 1;
	
	printf("Digite um numero para descobrir o seu fatorial: ");
	scanf("%d", &numero);
	if(numero != 0){
		while(numero >= i){
			fatorial = fatorial*i;
			i = i + 1;
		}	
	}
	printf("\nFatorial de %d e' %d\n", numero, fatorial);		
	return 0;
}

