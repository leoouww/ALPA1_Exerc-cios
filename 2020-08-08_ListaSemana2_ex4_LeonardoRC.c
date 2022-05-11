#include <stdio.h>
#include <stdlib.h>

/*  

	Lista Semana 2 - Estruturas de Decisão
	LEONARDO RODRIGUES DE CASTRO
	
	4. Ler   3   valores   (considere   que   não   serão   informados   valores   iguais)   e   escrever 
	o   maior   deles.
	 
*/

int main(int argc, char *argv[]) {
	int valor, maior_valor;
	
	printf("Digite 3 valores para verificar o maior deles: ");
	scanf("%d%d", &maior_valor, &valor);
	if(maior_valor < valor)
		maior_valor = valor;
	scanf("%d", &valor);
	if(maior_valor < valor)
		maior_valor = valor;
	printf("\nMaior valor digitado: %d\n", maior_valor);
	return 0;
}
