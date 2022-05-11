#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10

/* 
	Lista Semana 7 - Ponteiros
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	4. Escreva um programa que declare uma matriz 10x10 de inteiros. Você deve
	inicializar a matriz com zeros usando ponteiros para endereçar seus elementos.
	Preencha depois a matriz com os números de 1 a 100, também usando ponteiros.

*/
void inicializa_matriz(int *matriz_valores[MAX][MAX]){
	int i, j;
	int *ponteiro_matriz = &(matriz_valores[0][0]);
	for(i = 0; i < MAX; i++)
		for(j = 0; j < MAX; j++)
			*ponteiro_matriz = 0;
			ponteiro_matriz++;
}

void preenche_matriz(int *matriz_valores[MAX][MAX]){
	int i, j;
	int *ponteiro_matriz = &(matriz_valores[0][0]);
	for(i = 0; i < MAX; i++)
		*ponteiro_matriz = i+1;
		ponteiro_matriz++;
}

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "");
	int matriz_valores[MAX][MAX];
	int i, j;
	
	inicializa_matriz(matriz_valores);
	printf("\nMatriz 10x10 com 0\n");
	for(i = 0; i < MAX; ++i){
		printf("\n");
		for(j = 0; j < MAX; j++)
			printf(" %d ", matriz_valores[i][j]);
	}
	preenche_matriz(matriz_valores);
	printf("\nMatriz 10x10 preenchida de 1 a 100\n");
	for(i = 0; i < MAX; ++i){
		printf("\n");
		for(j = 0; j < MAX; j++)
			printf(" %d ", matriz_valores[i][j]);
	}
	return 0;
}
