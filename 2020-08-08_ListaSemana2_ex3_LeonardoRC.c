#include <stdio.h>
#include <stdlib.h>

/* 
	Lista Semana 2 - Estruturas de Decis�o
	LEONARDO RODRIGUES DE CASTRO
	
		OBRIGAT�RIO!!!
	
	3.  Escreva    um   algoritmo   que   verifique   a   validade   de    uma   senha   informada   pelo 
 	usu�rio.   A   senha   v�lida   �   o   n�mero   1234.   Devem   ser impressas   as   seguintes 
 	mensagens:   ACESSO   PERMITIDO   caso   a   senha   seja   v�lida.  ACESSO   NEGADO caso   a   senha   seja   inv�lida. 
 
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
