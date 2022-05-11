#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10
#define NOME 30
/*  
	Lista Semana 9 - Jogo de batalha naval
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	Exercício Batalha Naval
	Adicionar o que falta ao código
	
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
	
	//Código verifica se coordenada é válida e ainda não foi escolhida!
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
	
	for(int k = 0; k < nivel; k++){//for que carrega a quantidade de tiros que o jogador poderá realizar
		//Código que verifica se coordenada é válida para atirar (ainda não foi escolhida e está no intervalo)!
		do{
			printf("\nDigite uma coordenada para atirar no barco (EX. 1  10)\n");	
			scanf("%d%d",&i,&j);
			if((0 < i && i <= TAM) && (0 < j && j <= TAM)){
				if(tabuleiro[i-1][j-1] == 0){
					tabuleiro[i-1][j-1] = 7;
					printf("\nVocê Errou!\n");
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
	//Código para solicitar ao usuário inserção do nível de dificuldade do jogo
	int nivel = 0;
	while(nivel != 5 && nivel != 8 && nivel != 10){
		printf("\nInforme o nível de dificuldade: \n10 - para fácil:   10 tiros\n 8 - para médio:   08 tiros\n 5 - para difícil: 05 tiros\n\n");
		scanf("%d", &nivel);
	}	
	inicializaTabuleiro(tabuleiro);
	fflush(stdin);
	iniciaJogador(jogador1);
	fflush(stdin);
	iniciaJogador(jogador2);
	//Código para solicitar a quantidade de barcos a serem adicionados no tabuleiro 1-5
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

