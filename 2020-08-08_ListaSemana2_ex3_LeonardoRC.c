#include <stdio.h>
#include <stdlib.h>

/* 
	Lista Semana 2 - Estruturas de Decisão
	LEONARDO RODRIGUES DE CASTRO
	
		OBRIGATÓRIO!!!
	
	3.  Escreva    um   algoritmo   que   verifique   a   validade   de    uma   senha   informada   pelo 
 	usuário.   A   senha   válida   é   o   número   1234.   Devem   ser impressas   as   seguintes 
 	mensagens:   ACESSO   PERMITIDO   caso   a   senha   seja   válida.  ACESSO   NEGADO caso   a   senha   seja   inválida. 
 
 */
 
int main(int argc, char *argv[]) {
	int senha_digitada, senha_valida = 1234;
	
	printf("Digite a senha de 4 digitos: ");
	scanf("%d",&senha_digitada);
	if(senha_digitada == senha_valida)
		printf("\nACESSO PERMITIDO\n");
	else
		printf("\nACESSO NEGADO\n");
	return 0;
}
