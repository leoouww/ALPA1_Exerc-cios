#include <stdio.h>
#include <stdlib.h>

/* 
	Lista Semana 2 - Estruturas de Repetição
	LEONARDO RODRIGUES DE CASTRO
	
		OBRIGATORIO!
	
	3.  Crie um algoritmo que leia a altura e o peso de 6 pessoas e
	apresente a altura da pessoa mais pesada.

*/

int main(int argc, char *argv[]) {
	double altura, altura_maior_peso = 0.0, peso, maior_peso = 0.0;
	int n = 6, i = 1;
	
	while(i <= n){
		printf("\nDigite a altura e o peso da %do pessoa: ", i);
		scanf("%lf%lf", &altura,&peso);
		if(maior_peso < peso){
			maior_peso = peso;
			altura_maior_peso = altura;
		}
		++i;	
	}
	printf("\n\nA altura da pessoa mais pesada (%.2lfkg) e' %.2lfm\n", maior_peso, altura_maior_peso);
	return 0;
}
