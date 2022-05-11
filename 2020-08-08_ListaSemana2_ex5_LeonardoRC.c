#include <stdio.h>
#include <stdlib.h>

/* 

	Lista Semana 2 - Estruturas de Decisão
	LEONARDO RODRIGUES DE CASTRO
	
	5.  Ler   o   ano   atual   e   o   ano   de   nascimento   de   uma   pessoa.   Escrever   uma 
 	mensagem   que   diga   se   ela   poderá   votar   este   ano   (não   é   necessário 
 	considerar   o   mês   em   que   a   pessoa   nasceu).
	 
*/

int main(int argc, char *argv[]) {
	int ano_nascimento, ano_atual;
	
	printf("Digite, respectivamente, o ano presente e o ano de seu nascimento: ");
	scanf("%d%d", &ano_atual, &ano_nascimento);
	if(ano_atual - ano_nascimento >= 16)
		printf("\nNo Brasil, voce podera votar este ano!\n"); //Idade a partir de 16anos permite voto no Brasil
	else
		printf("\nNo Brasil, voce nao podera votar este ano!\n");
	return 0;
}
