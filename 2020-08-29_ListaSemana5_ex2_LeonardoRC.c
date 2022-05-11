#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define TAM 5

/* 

	Lista Semana 5 - Vetores
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	2.Preencha um vetor de 5 posições com número de 1 a 9 e exiba na tela a tabuada desses números.
	
*/

void exibi_tabuada(const int num){
	int i;
	for(i = 0; i <= 10; ++i)
		printf("%d * %d = %d\n", num, i, num*i);
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	//int vetor[TAM], i;
	int vetor[] = {1,5,6,7,8}, i;
	
/*	srand(time(0));
	for(i = 0; i < TAM; ++i)
		do{
			vetor[i] = rand()%9;
		}while(vetor[i] == 0);*/
	for(i = 0; i < TAM; ++i){
		exibi_tabuada(vetor[i]);
		printf("\n\n");
	}
	return 0;
}
