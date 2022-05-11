#include <stdio.h>
#include <stdlib.h>

/* 

	Lista Semana 2 - Estruturas de Decisao
	LEONARDO RODRIGUES DE CASTRO
	
	17. Faça um programa que verifique se um carácter qualquer digitado pelo
	usuário é uma vogal ou uma consoante.

*/

int main(int argc, char *argv[]) {
	char letra;
	
	printf("Digite uma letra qualquer: ");
	scanf("%c", &letra);
	if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
		printf("\nLetra digitada e' vogal!\n");
	else
		printf("\nLetra digitada e' consoante!\n");
	return 0;
}
