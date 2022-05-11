#include <stdio.h>
#include <stdlib.h>

/* 

	Lista Semana 2 - Estruturas de Repeticao
	LEONARDO RODIGUES DE CASTRO
	
	6. Faça um algoritmo que leia um número N, calcule e mostre os N primeiros termos
	da sequência de Fibonacci (0, 1, 1, 2 , 3, 5, 8, ...). Esta sequência inicia com 0 e 1, e
	os termos seguintes são a soma dos dois anteriores. O valor lido para N sempre
	será maior ou igual a 2.
	
*/

int main(int argc, char *argv[]) {
	int n, p_termo = 0, s_termo = 1, t_termo, cont;
	
	printf("Digite a quantidade N (maior ou igual a 2) para ver os N primeiros termos da sequencia de Fibonacci: ");
	scanf("%d", &n);
	printf("Sequencia de Fibonacci dos %d primeiros termos: 0, 1", n); 
	cont = 2;
	while(cont < n){
		t_termo = p_termo + s_termo;
		p_termo = s_termo;
		s_termo = t_termo;
		printf(", %d", t_termo);
		cont = cont + 1;
	}
	printf("\n");
	return 0;
}
