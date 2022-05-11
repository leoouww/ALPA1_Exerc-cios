#include <stdio.h>
#include <stdlib.h>

/* 

	Lista Semana 2 - Estruturas de Decisao
	LEONARDO RODRIGUES DE CASTRO
	
	16. (Opcional – operadores lógicos) Uma empresa quer verificar se um
	empregado está qualificado para a aposentadoria ou não. Para estar em
	condições, um dos seguintes requisitos deve ser satisfeito:
	i) Ter no mínimo 65 anos de idade.
	ii) Ter trabalhado no mínimo 30 anos.
	iii) Ter no mínimo 60 anos e ter trabalhado no mínimo 25
	anos.
	Com base nas informações acima, faça um algoritmo que leia: o número do
	empregado (código), o ano de seu nascimento e o ano de seu ingresso na
	empresa. O programa deverá escrever a idade e o tempo de trabalho do
	empregado e a mensagem 'Requerer aposentadoria' ou 'Não requerer'. Utilize
	os operadores && ou ||, em vez de aninhar os ifs. */

int main(int argc, char *argv[]) {
	int codigo, ano_nasc, ano_atual, ano_ingresso;
	
	printf("Digite o codigo do funcionario: ");
	scanf("%d", &codigo);
	printf("Digite o ano atual: ");
	scanf("%d",&ano_atual);
	printf("Digite o ano de seu nascimento: ");
	scanf("%d", &ano_nasc);
	printf("Digite o ano que ingressou na empresa: ");
	scanf("%d", &ano_ingresso);
	if(((ano_atual-ano_nasc) >= 65) || ((ano_atual - ano_ingresso) >= 30) || ((ano_atual - ano_nasc) >= 60 && (ano_atual - ano_ingresso) >= 25))
		printf("\nFuncionario (%d): Requerer Aposentadoria\n", codigo);
	else
		printf("\nFuncionario (%d): Nao Requerer Aposentadoria\n", codigo);
	return 0;
}
