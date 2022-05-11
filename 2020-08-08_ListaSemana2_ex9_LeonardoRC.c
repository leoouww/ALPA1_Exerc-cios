#include <stdio.h>
#include <stdlib.h>

/* 

	Lista Semana 2 - Estruturas de Decisão
	LEONARDO RODRIGUES DE CASTRO
	
	9. Faça um algoritmo que leia um número n e imprima “F1”, “F2” ou “F3”,
	conforme a condição:
		“F1”, se n <= 10
		“F2” , se n > 10 e n <= 100
		“F3” , se n > 100 
		
*/

int main(int argc, char *argv[]) {
	int numero, dezena = 10, centena = 100;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	if(numero <= dezena)
		printf("\nF1\n");
	else if(numero <= centena)
			printf("\nF2\n");
		else
			printf("\nF3\n");
	return 0;
}
