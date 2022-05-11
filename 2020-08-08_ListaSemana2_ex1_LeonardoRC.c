#include <stdio.h>
#include <stdlib.h>

/* 
	Lista de Exercícios - Estruturas de Decisao
	LEONARDO RODRIGUES DE CASTRO
	
	1 Faça   um   algoritmo   que   leia   dois   números   A   e   B   e   imprima   o   maior   deles. 
 	Considere   que   os   números   informados   não   serão   iguais.  
	 
*/

int main(int argc, char *argv[]) {
	int numeroA, numeroB;
	
	printf("Digite dois numeros: ");
	scanf("%d%d", &numeroA, &numeroB);
	if(numeroA != numeroB){
		if(numeroA > numeroB)
			printf("\n%d maior que %d\n", numeroA, numeroB);
		else
			printf("\n%d maior que %d\n", numeroB, numeroA);
	}
	/*
	else
		printf("%d = %d", numeroA, numeroB); */
	return 0;
}
