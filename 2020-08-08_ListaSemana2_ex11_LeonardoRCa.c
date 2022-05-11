#include <stdio.h>
#include <stdlib.h>

/*

	Lista Semana 2 - Estruturas de Decisao
	LEONARDO RODRIGUES DE CASTRO
	
	11. Ler dois valores e imprimir uma das três mensagens a seguir:
	‘Números iguais’, caso os números sejam iguais
	‘Primeiro é maior’, caso o primeiro seja maior que o segundo;
	‘Segundo maior’, caso o segundo seja maior que o primeiro.
	
*/
	
int main(int argc, char *argv[]) {
	int primeiro_valor, segundo_valor;
	
	printf("Digite dois valores: ");
	scanf("%d%d", &primeiro_valor, &segundo_valor);
	if(primeiro_valor == segundo_valor)
		printf("\nNumeros iguais\n");
	else if(primeiro_valor > segundo_valor)
			printf("\nPrimeiro e' maior\n");
		else
			printf("\nSegundo e' maior\n");
	return 0;
}
