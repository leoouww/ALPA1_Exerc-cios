#include <stdio.h>
#include <stdlib.h>

/* 

	Lista Semana 2 - Estruturas de Decisao
	LEONARDO RODRIGUES DE CASTRO
	
		OBRIGATÓRIO!
	
	14. Faça um algoritmo para ler as 3 notas numéricas obtidas por
	um aluno. Calcular a média de aproveitamento (média aritmética) e escrever o
	conceito do aluno de acordo com a tabela abaixo:
	Conceito Média
		A >= 9.0
		B >= 7.5 e < 9.0
		C >= 6 e < 7.5
		D < 6.0
	A média só deve ser comparada uma vez com cada limite acima. Para isto, use
	ifs encadeados.
	
*/

int main(int argc, char *argv[]) {
	double media, nota1, nota2, nota3, A = 9.0, B=7.5, C = 6.0;
	
	printf("Digite 3 notas numericas para constatarmos a media e o conceito aplicado a ela: ");
	scanf("%lf%lf%lf", &nota1, &nota2, &nota3);
	media = (nota1 + nota2 + nota3)/3;
	if(media >= A)
		printf("\nMedia: %.1lf. Classificacao A - Nota maior ou igual a 9.0\n", media);
	else if(media >= B)
			printf("\nMedia: %.1lf. Classificacao B - Nota maior ou igual a 7.5 e menor que 9.0\n", media);
		else if(media >= C)
				printf("\nMedia: %.1lf. Classificacao C - Nota maior ou igual a 6.0 e menor que 7.5\n", media);
			else
				printf("\nMedia: %.1lf. Classificacao D - Nota menor que 6.0\n", media);
	return 0;
}
