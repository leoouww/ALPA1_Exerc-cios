#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10
/* 
	Lista Semana 7 - Ponteiros
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	2. Crie uma função minmax() recebe um vetor v contendo n números reais e devolve
    em `min` e `max`, respectivamente, os valores mínimo e máximo entre aqueles
    armazenados em v.
    Obs: Faça a leitura dos valores de v fora da função minmax;
    Declaração da função: void minmax(double v[], double *min, double *max){}
	
*/

void minmax(double vetor_valores[MAX], double *min, double *max, int qtd_valores){
	int i = 0;
	*min = vetor_valores[i];
	*max = vetor_valores[i];
	i++;
	while(i < qtd_valores){
		if(vetor_valores[i] < *min)
			*min = vetor_valores[i];
		if(vetor_valores[i] > *max)
			*max = vetor_valores[i];
		++i;
	}
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	double vetor_valores[MAX];
	double max, min;
	int qtd_valores;
	unsigned i;
	
	printf("\nPor gentileza, informe quantos valores serão digitados: \n");
	scanf("%d", &qtd_valores);
	for(i = 0; i < qtd_valores; ++i){
		printf("\n%do. Valor: ", i+1);
		scanf("%lf", &vetor_valores[i]);
	}
	minmax(vetor_valores,&min,&max, qtd_valores);
	printf("\nMenor Número: %.1lf\nMaior Número: %.1lf", min, max);
	return 0;
}
