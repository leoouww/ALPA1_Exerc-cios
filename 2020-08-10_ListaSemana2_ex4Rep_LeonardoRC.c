#include <stdio.h>
#include <stdlib.h>

/* 
	Lista Semana 2 - Estruturas de Repetição
	LEONARDO RODRIGUES DE CASTRO
	
	4. Faça um algoritmo que leia um número e divida-o por dois (sucessivamente) até
	que o resultado seja menor que 1. Mostre o resultado da última divisão e a
	quantidade de divisões efetuadas. Use divisão em ponto flutuante.
	
 */

int main(int argc, char *argv[]) {
	int numero, cont_div = 0;
	double divisao;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	divisao = numero;
	do{
		divisao = divisao / 2;
		cont_div = cont_div + 1;
	}while(divisao >= 1);
	printf("\nO numero %d, digitado, foi dividido por 2(dois) %d vezes. Resultado da ultima divisao: %.3lf\n", numero, cont_div, divisao);
	return 0;
}
