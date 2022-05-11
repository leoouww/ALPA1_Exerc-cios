#include <stdio.h>
#include <stdlib.h>
#define MAX 100

/* 
	Lista Semana 5 - Vetores
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	2.(Opcional) Dada uma matriz Amxn, imprimir o número de linhas e o número de colunas nulas da matriz.

*/

int colunas_nulas(const int matriz[][MAX],const int qtd_colunas,const int qtd_linhas){
	char nulo;
	int soma_nulas = 0, i, j;
	for(j = 0;j < qtd_colunas;++j){
		nulo = 's';
		for(i = 0;i < qtd_linhas;++i)
			if(matriz[i][j] != 0)
				nulo = 'n';
		if(nulo == 's')
			soma_nulas++;
	}
	return soma_nulas;
}
int linhas_nulas(const int matriz[][MAX],const int qtd_colunas,const int qtd_linhas){
	char nulo;
	int soma_nulas = 0, i, j;
	for(i = 0;i < qtd_linhas;++i){
		nulo = 's';
		for(int j = 0;j < qtd_colunas;++j)
			if(matriz[i][j] != 0)
				nulo = 'n';
		if(nulo == 's')
			soma_nulas++;
	}
	return soma_nulas;
}	

int main(int argc, char *argv[]) {
	int matriz_mxn[3][5] = {{5,8,4,1,2},{2,5,45,0,5},{5,5,1,7,0}}, qtd_colunas = 5, qtd_linhas = 3;
	
	printf("\nA matriz tem %g colunas nulas e %g linhas nulas\n", colunas_nulas(matriz_mxn, qtd_colunas, qtd_linhas), linhas_nulas(matriz_mxn, qtd_colunas, qtd_linhas));
	return 0;
}
