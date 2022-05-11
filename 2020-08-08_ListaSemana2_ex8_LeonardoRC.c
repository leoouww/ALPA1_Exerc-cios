#include <stdio.h>
#include <stdlib.h>

/* 

	Lista Semana 2 - Estruturas de Decisão
	LEONARDO RODRIGUES DE CASTRO	
	
	8. Tendo como entrada a altura e o sexo (codificado o sexo através do número 1
	para feminino e 2 para masculino) de uma pessoa, construa um programa que
	calcule e imprima seu peso ideal, utilizando as seguintes Fórmulas:
	a. Para homens: (72.7 * Altura) – 58
	b. Para mulheres: (62.1 * Altura) – 44.7
	
*/

int main(int argc, char *argv[]) {
	double altura, peso_ideal;
	int sexo;
	
	printf("Qual sua altura(m): ");
	scanf("%lf", &altura);
	printf("Homem [2] / Mulher [1]: ");
	scanf("%d", &sexo);
	if(sexo == 1)
		peso_ideal = (62.1*altura) - 44.7;
	else if(sexo == 2)
			peso_ideal = (72.7*altura) - 58.0;
		else
			printf("\n\"Homem [2] / Mulher [1]:\" nao inserido!\n"); 
	printf("\n\nPeso ideal: %.2lf\n", peso_ideal);
	return 0;
}
