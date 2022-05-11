#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10
/* 
	Lista Semana 7 - Ponteiros
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	3. Crie uma função que retorne a média dos valores de um vetor double.

*/
void media(double vetor_valores[MAX], int qtd_valores, double *media_vetor){
	int i;
	double soma = 0.0;
	
	for(i = 0; i < qtd_valores; i++)
		soma += vetor_valores[i];
	*media_vetor = soma / qtd_valores;
}

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "");
	double vetor_valores[MAX];
	double media_vetor;
	int i, qtd_valores;
	
	printf("\nDigite a quantidade de valores a serem lidos: ");
	scanf("%d", &qtd_valores);
	for(i = 0; i < qtd_valores; ++i){
		printf("\n%do. Valor: ", i+1);
		scanf("%lf", &vetor_valores[i]);
	}
	media(vetor_valores, qtd_valores, &media_vetor);
	printf("\n\nMédia: %.1lf\n", media_vetor);
	return 0;
}
