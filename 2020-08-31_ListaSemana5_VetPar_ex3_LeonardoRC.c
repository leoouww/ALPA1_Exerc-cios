#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 
	Lista Semana 5 - Vetores como Parametros
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	3.Crie uma função que receba um vetor e retorne a soma dos números pares deste vetor
	
*/

int soma_pares(int vetor[], int tamanho_vetor){
	setlocale(LC_ALL,"");
	int soma = 0;
	int i;
	for(i = 0;i < tamanho_vetor; ++i)
		soma = vetor[i] % 2 == 0 ? (soma + vetor[i]) : soma;
	return soma;
}
int main(int argc, char *argv[]) {
	int tam = 4, vetor[] = {3,4,5,6};
	
	printf("\nA soma dos numeros pares do vetor é %d", soma_pares(vetor,tam));
	return 0;
}
