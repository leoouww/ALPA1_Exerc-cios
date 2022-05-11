#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10
#define LOGIN 5
#define FRASE 100
/* 
	Lista Semana 5 - Funções de Biblioteca
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	Crie um exemplo de uso para cada as funções: strcpy() e strcmp().
	Opcional: memcpy() e snprintf(). Teste. 
	
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	char aliteracao[FRASE];
	printf("\n-> strcpy pode ser utilizada para copiar no vetor aliteracao um exemplo desse tipo de figura de linguagem.\n");
	strcpy(aliteracao, "To namorando aquela mina mas nao sei se ela me namora");
	printf("\n%s\n\n",aliteracao);
	
	char login_senha[MAX] = "LOGINsenha", exibi_login_senha[MAX];
	int i;
	printf("\n-> strncpy pode ser utilizada na situação em que se tem, numa string,\ninformação de login e senha do usuario e não se quer perdê-la, \nentretanto, se quer mostrar na tela a senha substituída por asteriscos.\n");
	strncpy(exibi_login_senha,login_senha,LOGIN);
	for(i=5;i<MAX;++i)
		exibi_login_senha[i] = '*';
	printf("\nLogin e Senha: %s\n\n", exibi_login_senha);

	char nome_memoria[FRASE] = "Eduardo da Silva Brito", nome_digitado[FRASE] = "Caio Bianc";
	printf("\n-> strcomp pode ser utilizada para saber se eu fui o ultimo a acessar um sistema.\n Descobre-se, portanto, se se trata do mesmo usuario ou outro inserindo nome completo\n");
	if(strcmp(nome_digitado, nome_memoria) == 0)
		printf("\nUsuario %s foi o ultimo a acessar!\n");
	else printf("\nOutro usuario acessou antes de você!\n");

	printf("\n");
	return 0;
}
