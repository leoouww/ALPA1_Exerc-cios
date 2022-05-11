#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#define MAX 30
#define UM 1
//#define LIN 4 //Valores iguais, mas por quest�o de did�tica separei em duas constantes
//#define COL 4
/* 
	Lista Semana 6 - Jogo da Velha
	LEONARDO RODRIGUES DE CASTRO
	PT3008479	
	
	1. Crie um jogo da velha ou tamb�m conhecido como cerquilha, jogo do galo ou tic-tac-toe.
	   N�o se esque�a de identar o c�digo e de colocar coment�rios. COLOQUE SEU NOME COMPLETO DENTRO DO ARQUIVO.
	   Dica: utilize uma matriz 3x3 para criar o tabuleiro.
	   O seu jogo deve permiter que dois jogadores joguem. Um com X e outro com O.
	   Envie o programa na extens�o .c

*/

void mostra_jogo(char matriz_tabuleiro[][MAX], int qtd_linhas, int qtd_colunas){ //Procedimento que apresenta na taela a matriz do jogo atual
	int i, j;
	printf("\n      C1   C2   C3\n"); //Apresenta na tela a posi��o das colunas
	for(i = 0; i < qtd_linhas; ++i){ //Os la�os apresentam a posi��o das Linhas e seus respectivos valores, considerando cada coluna  
		printf("L%d",i+1);
		for(j = 0; j < qtd_colunas; ++j){
			printf("%5c", matriz_tabuleiro[i][j]);
		}
		printf("\n");
	}
}

void inicializa_jogo(char matriz_tabuleiro[][MAX], int qtd_linhas, int qtd_colunas){ //procedimento que inicializa a matriz com um ponto '.' em cada uma das posi��es
	int i, j;
	for(i = 0; i < qtd_linhas; ++i) 
		for(j = 0; j < qtd_colunas; ++j)
			matriz_tabuleiro[i][j] = '.'; //O caractere '.' fora escolhido por apresentar uma posi��o ainda n�o escolhida
}

void preenche_posicao(char matriz_tabuleiro[][MAX],char jogador_n[MAX], char letra_jogador, int qtd_linhas, int qtd_colunas){ //Procedimento que preenche a matriz com a letra do jogador, desde que a casa escolhida seja uma posi��o v�lida
	int linha_escolhida, coluna_escolhida;
	do{
		printf("\n%s, diga a linha e a coluna para que seja inserido o caractere %c: ", jogador_n,letra_jogador);
		scanf("%d%d", &linha_escolhida,&coluna_escolhida);
		if(matriz_tabuleiro[linha_escolhida-1][coluna_escolhida-1] == '.'){//Condi��o que garante que a posi��o escolhida � v�lida para jogar
			matriz_tabuleiro[linha_escolhida-1][coluna_escolhida-1] = letra_jogador;
			break;
		}
		else if(matriz_tabuleiro[linha_escolhida-1][coluna_escolhida-1] == 'X' || matriz_tabuleiro[linha_escolhida-1][coluna_escolhida-1] == 'O')
				printf("\nPosi��o j� escolhida anteriormente!\n\n");	
			else printf("\nPosi��o inv�lida!\n\n"); 
    }while(1 == 1);
}

bool verifica_ganhador(char matriz_tabuleiro[][MAX], int qtd_linhas, int qtd_colunas, char letra_jogador, char jogador_n[MAX], char ganhador[MAX]){ //Fun��o que retorna true se o jogo acabou e false se continua o jogo
	int i, j;
	char acusa_ganhador = 'v'; //inicializado com a letra indicativa de velha = sem vencedor
	bool fim_jogo = false;
	for(i = 0, j = 0; i < qtd_linhas; i++) //la�o que constata se para as tr�s posi��es de cada linha, tem valores iguais
		if(matriz_tabuleiro[i][j] == letra_jogador)
			if(matriz_tabuleiro[i][j] == matriz_tabuleiro[i][j+1] && matriz_tabuleiro[i][j] == matriz_tabuleiro[i][j+2]){
				strcpy(ganhador,jogador_n);
				acusa_ganhador = ' ';
			}
	for(j = 0, i = 0; j < qtd_colunas; j++) //la�o que constata se para as tr�s posi��es de cada coluna, tem valores iguais
		if(matriz_tabuleiro[i][j] == letra_jogador)
			if(matriz_tabuleiro[i][j] == matriz_tabuleiro[i+1][j] && matriz_tabuleiro[i][j] == matriz_tabuleiro[i+2][j]){
				strcpy(ganhador,jogador_n);
				acusa_ganhador = ' ';
			}
	if(matriz_tabuleiro[0][0] == letra_jogador) //verifica se houve vencedor usando uma das diagonais
		if(matriz_tabuleiro[1][1] == letra_jogador)
			if(matriz_tabuleiro[2][2] == letra_jogador){
				strcpy(ganhador,jogador_n);
				acusa_ganhador = ' ';
			}
	if(matriz_tabuleiro[2][0] == letra_jogador) //verifica se houve vencedor usando uma das diagonais
		if(matriz_tabuleiro[1][1] == letra_jogador)
			if(matriz_tabuleiro[0][2] == letra_jogador){
				strcpy(ganhador,jogador_n);
				acusa_ganhador = ' ';
			}
	if(acusa_ganhador == 'v'){
		int acusa_ponto = 0; //inicializado com zero, caso ningu�m tenha ganho o jogo ainda, ser� incrementado enquanto n�o der velha
		for(i = 0; i < qtd_linhas; i++)
			for(j = 0; j < qtd_colunas; j++)
				if(matriz_tabuleiro[i][j] == '.')
					acusa_ponto++;
		fim_jogo = (acusa_ponto == 0) ? true : false;
	}
	else fim_jogo = true;
	return fim_jogo;				
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	char jogador1[MAX], jogador2[MAX]; //Recebe os nomes dos jogadores: jogador1 joga com X e jogador2, com O 
	char matriz_tabuleiro[MAX][MAX]; //Matriz para armazenar o resultado do tabuleiro do jogo
	char x = 'X', o = 'O'; //essas vari�veis armazenam a letra X ou O a serem inseridas em cada posi��o da matriz
	int qtd_linhas = 3, qtd_colunas = 3;
	int sorteio; //define quem come�ar� jogando (X ou O)
	
	printf("\nJOGO DA VELHA!\n\n");
	fflush(stdin);
	printf("\nEntre com o nome do JOGADOR \"X\": ");
	scanf("%s", jogador1);
	fflush(stdin);
	printf("\nEntre com o nome do JOGADOR \"O\": ");
	scanf("%s", jogador2);
	srand(time(0));
	sorteio = rand() % 2; //sorteio que, aleatoriamente, define quem inicia o jogo (jogador X ou o jogador O)
	if(sorteio == 1){ //No caso em que o sorteio apresente como resultado 1, inverte-se as posi��es para que o nome lido em jogador2 torne-se o jogador1; mantendo-se a letra escolhida incialmente
		char vetor_temporario[MAX];
		char variavel_temporaria;
		strcpy(vetor_temporario,jogador2);
		strcpy(jogador2,jogador1);
		strcpy(jogador1,vetor_temporario);
		variavel_temporaria = x;
		x = o;
		o = variavel_temporaria;
	}
	printf("\n\n\nAtrav�s de sorteio, o jogo inicia-se com o(a) %s\n", jogador1);
	sleep(1);//fun��o chamada apenas para que o usuario do programa tenha um tempo focado na mensagem
	inicializa_jogo(matriz_tabuleiro, qtd_linhas, qtd_colunas);
	mostra_jogo(matriz_tabuleiro, qtd_linhas, qtd_colunas);
	bool fim_jogo;
	char ganhador[MAX] = "velha";
	char continua = 's';
	do{//la�o continua at� que a variavel fim_jogo retorne true da funcao verifica ganhador, e continua seja atualizado para 'n'.
		preenche_posicao(matriz_tabuleiro, jogador1, x, qtd_linhas, qtd_colunas);
		system("CLS");
		mostra_jogo(matriz_tabuleiro, qtd_linhas, qtd_colunas);
		fim_jogo = verifica_ganhador(matriz_tabuleiro, qtd_linhas, qtd_colunas, x, jogador1, ganhador);
		switch (fim_jogo){
		case true:
				continua = 'n';
				break;
		case false:
			preenche_posicao(matriz_tabuleiro, jogador2, o, qtd_linhas, qtd_colunas);
			system("CLS");
			mostra_jogo(matriz_tabuleiro,qtd_linhas,qtd_colunas);
			fim_jogo = verifica_ganhador(matriz_tabuleiro, qtd_linhas, qtd_colunas, o, jogador2, ganhador);
			switch (fim_jogo){
			case true:
				continua = 'n';
				break;
			}
			break;
		}
	}while(continua == 's');
	printf("\n\nVencedor do jogo: %s", ganhador);
	return 0;
}
