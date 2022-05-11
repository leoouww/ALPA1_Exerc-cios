#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10
/* 
	Lista Semana 7 - Ponteiros
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	2. Crie uma fun��o minmax() recebe um vetor v contendo n n�meros reais e devolve
    em `min` e `max`, respectivamente, os valores m�nimo e m�ximo entre aqueles
    armazenados em v.
    Obs: Fa�a a leitura dos valores de v fora da fun��o minmax;
    Declara��o da fun��o: void minmax(double v[], double *min, double *max){}
	
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
	
	printf("\nPor gentileza, informe quantos valores ser�o digitados: \n");
	scanf("%d", &qtd_valores);
	for(i = 0; i < qtd_valores; ++i){
		printf("\n%do. Valor: ", i+1);
		scanf("%lf", &vetor_valores[i]);
	}
	minmax(vetor_valores,&min,&max, qtd_valores);
	printf("\nMenor N�mero: %.1lf\nMaior N�mero: %.1lf", min, max);
	return 0;
}
