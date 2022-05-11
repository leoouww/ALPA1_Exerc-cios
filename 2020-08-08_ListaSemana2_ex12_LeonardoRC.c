#include <stdio.h>
#include <stdlib.h>

/* 

	Lista Semana 2 - Estruturas de Decisao
	LEONARDO RODRIGUES DE CASTRO
	
	12. Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma
	empresa. Sabendo-se que ele recebe uma comissão de 3% sobre o total das
	vendas até R$ 1.500,00 mais 5% sobre o que ultrapassar este valor, calcular e
	escrever o seu salário total.

*/

int main(int argc, char *argv[]) {
	double salario, valor_vendas, limite = 1500;
	
	printf("Digite o salario fixo de um vendedor em reais e tambem o valor de suas vendas: ");
	scanf("%lf%lf", &salario, &valor_vendas);
	if(valor_vendas <= limite){
		salario = salario + valor_vendas*0.03;
	}
	else{
		double sobressalente;
		sobressalente = valor_vendas - limite;
		salario = salario + sobressalente*0.05 + limite*0.03;
	}
	printf("\nSalario total desse funcionario: R$%.2lf", salario);
	return 0;
}
