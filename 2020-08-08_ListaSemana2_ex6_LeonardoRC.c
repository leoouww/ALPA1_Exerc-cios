#include <stdio.h>
#include <stdlib.h>

/* 

	Lista Semana 2 - Estruturas de Decisão
	LEONARDO RODRIGUES DE CASTRO	
	
	6. Faça um algoritmo que receba quatro notas de um aluno(a) e imprima na tela “
	aluno(a) aprovado(a)” se o aluno(a) obtiver a média das quatro notas igual ou
	superior a seis.
	
*/

int main(int argc, char *argv[]) {
	double nota_1, nota_2, nota_3, nota_4, media;
	
	printf("Digite as 4(quatro) notas de um aluno para saber a sua media: ");
	scanf("%lf%lf%lf%lf", &nota_1,&nota_2,&nota_3,&nota_4);
	media = (nota_1 + nota_2 + nota_3 + nota_4) / 4;
	//printf("\nMedia: %.2lf", media);
	if(media >= 6.0)
		printf("\nAluno(a) Aprovado(a)");
	return 0;
}
