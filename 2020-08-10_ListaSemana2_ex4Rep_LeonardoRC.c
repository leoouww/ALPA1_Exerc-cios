#include <stdio.h>
#include <stdlib.h>

/* 
	Lista Semana 2 - Estruturas de Repeti��o
	LEONARDO RODRIGUES DE CASTRO
	
	4. Fa�a um algoritmo que leia um n�mero e divida-o por dois (sucessivamente) at�
	que o resultado seja menor que 1. Mostre o resultado da �ltima divis�o e a
	quantidade de divis�es efetuadas. Use divis�o em ponto flutuante.
	
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
