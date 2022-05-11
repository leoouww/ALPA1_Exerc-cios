#include <stdio.h>
#include <stdlib.h>

/* 
	Lista Semana 2 - Estruturas de Decisao
	LEONARDO RODRIGUES DE CASTRO
	
	2.Faça   um   algoritmo   que   verifique   se   o   número   digitado   pelo   usuário   é   par   ou 
	 ímpar.   Caso   seja   par,   imprima   na   tela   “Número   par”,   senão   imprima   “Número 
 	ímpar”
 
*/

int main(int argc, char *argv[]) {
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	if(numero % 2 == 0)
		printf("\nNumero par\n");
	else 
		printf("\nNumero impar\n");
	return 0;
}
