#include <stdio.h>
#include <stdlib.h>

/* 
	Lista Semana 2 - Estruturas de Decisao
	LEONARDO RODRIGUES DE CASTRO
	
	2.Fa�a   um   algoritmo   que   verifique   se   o   n�mero   digitado   pelo   usu�rio   �   par   ou 
	 �mpar.   Caso   seja   par,   imprima   na   tela   �N�mero   par�,   sen�o   imprima   �N�mero 
 	�mpar�
 
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
