#include <stdio.h>
#include <stdlib.h>

/* 

	Lista Semana 2 - Estruturas de Decisão
	LEONARDO RODRIGUES DE CASTRO
	
	10. Faça um algoritmo para ler: número da conta do cliente, saldo, débito e
	crédito. Após, calcular e escrever o saldo atual (saldo atual = saldo - débito +
	crédito). Também testar se saldo atual for maior ou igual a zero escrever a
	mensagem 'Saldo Positivo', senão escrever a mensagem 'Saldo Negativo'. 
		
*/
int main(int argc, char *argv[]) {
	int conta;
	double saldo, credito, debito, saldo_atual;
	
	printf("Digite o numero da conta do cliente: ");
	scanf("%d", &conta);
	printf("Saldo da Conta (%d): ", conta);
	scanf("%lf", &saldo);
	printf("Debito da conta (%d): ", conta);
	scanf("%lf", &debito);
	printf("Credito da conta (%d): ", conta);
	scanf("%lf", &credito);
	saldo_atual =  saldo - debito + credito;
	printf("\nSaldo atual da conta (%d): R$%.2lf.", conta, saldo_atual);
	if(saldo_atual >= 0)
		printf("\nSaldo Positivo\n");
	else
		printf("\nSaldo Negativo\n");
	return 0;
}
