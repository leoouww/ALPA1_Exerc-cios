#include <stdio.h>
#include <stdlib.h>

/* 
	Lista Semana 2 - Estruturas de Repetição
	LEONARDO RODRIGUES DE CASTRO
	
	5. Foi feita uma pesquisa entre os habitantes de uma região. Foram
	coletados os dados de idade, sexo (M/F) e salário. Faça um algoritmo que informe:
	a) a média salarial do grupo;
	b) a maior e a menor idade do grupo;
	c) a quantidade de mulheres com salário até R$1000,00.

*/

int main(int argc, char *argv[]) {
	int idade, idade_min, idade_max, sexo, continuar = 0, contador = 0, cont_mulher = 0;
	double salario, soma_salario = 0;
	
	do{
		contador = contador + 1;
		printf("\nDigite a idade da %do pessoa: ", contador);
		scanf("%d", &idade);
		printf("Digite o sexo da %do (Masculino[1]/Feminino[2]): ", contador);
		scanf("%d", &sexo);
		printf("Digite o salario da %do pessoa: ", contador);
		scanf("%lf", &salario);
		if(contador == 1)
			idade_min = idade_max = idade;
		else{
			if(idade_min > idade)
				idade_min = idade;
			if(idade_max < idade)
				idade_max = idade;
		}
		if(sexo == 2 && salario < 1000.0)
			cont_mulher = cont_mulher + 1;
		soma_salario = soma_salario + salario;
		printf("\nDeseja parar? Digite um numero negativo se sim: ");
		scanf("%d", &continuar);
	}while(continuar >= 0);
	printf("\n\na) A media salarial e' de R$%.2lf", soma_salario/contador);
	printf("\nb) A maior idade do grupo e' %d e a menor %d", idade_max, idade_min);
	printf("\nc) Existe(m) %d mulher(es) com salario(s) inferior(es) a R$1000,00\n", cont_mulher);
	return 0;
}
