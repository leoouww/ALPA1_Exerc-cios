#include <stdio.h>
#include <stdlib.h>

/* 

	Lista Semana 2 - Estruturas de Decisao
	LEONARDO RODRIGUES DE CASTRO
	
	13. Um posto est� vendendo combust�veis com a seguinte tabela de descontos:
		�lcool:
			at� 20 litros, desconto de 3% por litro;
			acima de 20 litros, desconto de 5% por litro
		Gasolina:
			at� 20 litros, desconto de 4% por litro;
			acima de 20 litros, desconto de 6% por litro
		Escreva um algoritmo que leia o n�mero de litros vendidos e o tipo de
		combust�vel (codificado da seguinte forma: 1 - �lcool, 2 - gasolina), calcule e
		imprima o valor a ser pago pelo cliente sabendo-se que o pre�o do litro da
		gasolina � R$ 3,30 e o pre�o do litro do �lcool � R$ 2,90.
		
*/

int main(int argc, char *argv[]) {
	int tipo_combustivel;
	double valor, preco_alc = 2.90, preco_gas = 3.30, litro;
	
	printf("Digite a quantidade de litros a abastecer: ");
	scanf("%lf", &litro);
	printf("Qual combustivel? [1] ALCOOL / [2] GASOLINA   ");
	scanf("%d", &tipo_combustivel);
	if(tipo_combustivel == 1){
		if(litro <= 20)
			valor = preco_alc*litro*0.97;
		else
			valor = preco_alc*litro*0.95;
	}
	else if(tipo_combustivel == 2){
			if(litro <= 20)
				valor = preco_gas*litro*0.96;
			else
				valor = preco_gas*litro*0.94;
		}
	printf("\n\nValor a ser pago pelo cliente: R$%.2lf\n", valor);
	return 0;
}
