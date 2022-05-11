#include <stdio.h>
#include <stdlib.h>
#define MAX 50
#include <locale.h>
#include <string.h>

/* 
	Lista Semana 8 - Exercícios Vetores e Ponteiros em C
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	1- (Opcional) Faça um programa que imprima o argumento passado de maneira invertida:
	Exemplo: entrada lapa, imprimir na saída apal;	

*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	//unsigned i;
	int i;
	
	printf("\nargc = %d\n", argc);
	for(i = 0; i < argc; ++i)
		printf("Argv[%d] = %.70s\n", i, argv[i]);
	
	char *string = argv[1];
	for(i = strlen(string)-1; i >= 0; --i)
		printf("%c", string[i]);
	return 0;
}

