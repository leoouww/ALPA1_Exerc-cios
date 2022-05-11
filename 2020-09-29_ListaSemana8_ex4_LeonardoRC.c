#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MAX 100
#include <locale.h>
/* 
	Lista Semana 8 - Exerc�cios Vetores e Poteiros em C
	LEONARDO RODRIGUES DE CASTRO
	PT3008479	
	
	4- (Opcional) Fa�a um programa utilizando ponteiro que identifique um valor que mais se
	repete dentro do vetor de 100 posi��es. Fa�a o preenchimento do vetor de maneira
	autom�tica. Caso n�o exista dois valores iguais, escreva na tela que todos os n�meros s�o
	diferentes.
	
*/

void identifica_frequente(int *n_freq, int *qtd_n_freq, int vetor[MAX]){ //Procedimento que identifica qual o n�mero mais vezes repetido em um vetor e a quantidade desta repeti��o
	int i, j;
	int *ptr = &vetor[0];
	*qtd_n_freq = 0;
	int cont;
	for(i = 0; i < MAX; i++){
		cont = 0;		
		for(j = 0; j  < MAX; j++)
			if(*ptr == vetor[j])
				cont++; 
		if(cont > *qtd_n_freq){
			*qtd_n_freq = cont;
			*n_freq = vetor[i];	
		}
		ptr++;
	} 
}

int main(int argc, char *argv[]){
	setlocale(LC_ALL,"");
	int vetor[MAX], i;
	int n_freq, qtd_n_freq;
	
	srand(time(0));
	for(i = 0; i < MAX; ++i)
		vetor[i] = rand() % 10000;
	identifica_frequente(&n_freq,&qtd_n_freq,vetor);
	if(qtd_n_freq <= 1)
		printf("\nNao houve nenhum n�mero repetido\n");
	else printf("\nN�mero mais vezes repetido: %d\nRepetido %d vez(es)\n", n_freq, qtd_n_freq);
	return 0;
}
