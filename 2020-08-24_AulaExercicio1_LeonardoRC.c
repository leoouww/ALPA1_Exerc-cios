#include <stdio.h>
#include <stdlib.h>
#define TAM 10

/* 

	Lista de Exercicios da Aula 24-08-2020
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	1.• Declare e inicialize um vetor com dez inteiros quaisquer. Então calcule
	e imprima a sua soma.

*/

int main(int argc, char *argv[]) {
	int i, vetor[TAM];
	
	for(i = 0; i < TAM; i++){
		printf("\nDigite o %do numero: ", i+1);
		scanf("%d", &vetor[i]);
	}
	int soma = 0;
	for(i = 0; i < TAM; i++)
		soma += vetor[i];
	printf("\nSoma do vetor: %d", soma);
	return 0;
}
