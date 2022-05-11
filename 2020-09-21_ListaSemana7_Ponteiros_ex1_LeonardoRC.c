#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10

/* 
	Lista Semana 7 - Ponteiros
	LEONARDO RODRIGUES DE CASTRO	
	PT3008479
	
	1. Usando ponteiros, codifique a função carrega(v,n), que preenche um vetor v com n
	valores lidos do teclado. A leitura dos n valores devem ser realizadas dentro da
	função. Após o término da função escreva no main o vetor com os n valores lidos.

*/
void carrega(int *v, int qtd_valores){
	int valor = 0;
	int i = 0;
	while(i < qtd_valores){
		printf("\n%do valor: ",i+1);
		scanf("%d", &valor);
		v[i] = valor;
		++i;
	}
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	int qtd_valores;
	int vetor_valores[MAX];
	
	printf("\nDigite a quantidade n de valores que serão inseridos: \n");
	scanf("%d", &qtd_valores);
	carrega(vetor_valores,qtd_valores);
	for(unsigned i = 0; i < qtd_valores; i++)
		printf(" %d ", vetor_valores[i]);
	return 0;
}
