#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 15

/* 
	LISTA SEMANA 5 - EXERCICIOS VETRORES
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	1. Determinar o maior e o menor valor de um vetor inteiro de 15 posições.
	 
*/


double retorna_maior(double vetor[MAX]){
	double maior = vetor[0];
	int i;
	for(i = 1; i < MAX; ++i)
		maior = vetor[i] > maior ? vetor[i] : maior;
	return maior;
}
double retorna_menor(double vetor[MAX]){
	double menor = vetor[0];
	int i;
	for(i = 1; i < MAX; ++i)
		menor = vetor[i] < menor ? vetor[i] : menor;
	return menor;
}

int main(void) {
	setlocale(LC_ALL,"");
	double vetor[MAX];
	int i;
	
	for(i = 0; i < MAX; ++i){
		printf("\nDigite o valor de indice %d do seu vetor de %d posições: ", i, MAX);
		scanf("%lf", &vetor[i]);
	}
	printf("\nMaior valor do vetor: %.2lf\nMenor valor do Vetor: %.2lf", retorna_maior(vetor), retorna_menor(vetor));
	return 0;
}
