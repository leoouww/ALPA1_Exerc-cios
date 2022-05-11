#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10
#define NOME 30
/*  
	Lista Semana 9 - Jogo de batalha naval
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	Exerc�cio Batalha Naval
	Adicionar o que falta ao c�digo
	
*/

void inicializaTabuleiro (int tabuleiro[TAM][TAM]){
	int i=0, j=0;
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			tabuleiro[i][j]=0;
		}
	}
}

void escreveTabuleiro (int tabuleiro[TAM][TAM]){
	int i=0, j=0;
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			printf("[%d] ",tabuleiro[i][j]);
		}
		printf("\n");
	}
}


void iniciaJogador(char jogador[NOME]){
	printf("\nDigite o nome do jogador\n");
	fgets(jogador, NOME, stdin);
}

void posicionarBarco (int tabuleiro[TAM][TAM]){
	int i, j;
	
	//C�digo verifica se coordenada � v�lida e ainda n�o foi escolhida!
	do{
		printf("\nDigite uma coordenada para posicionar o barco.(EX. 1  10)\n");	
		scanf("%d%d",&i,&j);
		if(((0 < i && i <= TAM) && (0 < j && j <= TAM)) && (tabuleiro[i-1][j-1] == 0)){
			tabuleiro[i-1][j-1]=1;
			printf("\nBarco posicionado com sucesso!\n");
			break;
		}
	}while(1 == 1);
			
}

void atirar (int tabuleiro[TAM][TAM], int nivel){
	int i=0, j=0;
	
	for(int k = 0; k < nivel; k++){//for que carrega a quantidade de tiros que o jogador poder� realizar
		//C�digo que verifica se coordenada � v�lida para atirar (ainda n�o foi escolhida e est� no intervalo)!
		do{
			printf("\nDigite uma coordenada para atirar no barco (EX. 1  10)\n");	
			scanf("%d%d",&i,&j);
			if((0 < i && i <= TAM) && (0 < j && j <= TAM)){
				if(tabuleiro[i-1][j-1] == 0){
					tabuleiro[i-1][j-1] = 7;
					printf("\nVoc� Errou!\n");
					break;
				}
				else if(tabuleiro[i-1][j-1] == 1){
					  	tabuleiro[i-1][j-1] = 8;
					  	printf("O Barco foi atingido!\n");
					  	break;
				}
			}
		}while(1 == 1);
	}
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	
	int tabuleiro[TAM][TAM];
	char jogador1[NOME], jogador2[NOME];
	
	printf("\nJOGO BATALHA NAVAL!\n\n");
	//C�digo para solicitar ao usu�rio inser��o do n�vel de dificuldade do jogo
	int nivel = 0;
	while(nivel != 5 && nivel != 8 && nivel != 10){
		printf("\nInforme o n�vel de dificuldade: \n10 - para f�cil:   10 tiros\n 8 - para m�dio:   08 tiros\n 5 - para dif�cil: 05 tiros\n\n");
		scanf("%d", &nivel);
	}	
	inicializaTabuleiro(tabuleiro);
	fflush(stdin);
	iniciaJogador(jogador1);
	fflush(stdin);
	iniciaJogador(jogador2);
	//C�digo para solicitar a quantidade de barcos a serem adicionados no tabuleiro 1-5
	int n_barcos;
	printf("\nDigite a quantidade de barcos a serem inseridos no jogo (1 a 5): ");
	scanf("%d", &n_barcos);
	int k = 0;
	do{
		posicionarBarco(tabuleiro);
		++k;
	}while(k < n_barcos);
	

	atirar(tabuleiro, nivel);
	
	escreveTabuleiro(tabuleiro);
		
	return 0;
}

