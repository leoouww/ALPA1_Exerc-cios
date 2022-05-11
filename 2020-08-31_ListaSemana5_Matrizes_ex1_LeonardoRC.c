#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 

	Lista Semana 5 - Matrizes
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	1.Dada uma matriz real A com m linhas e n colunas e um vetor real V com n elementos,
	determinar o produto de A por V. Não use scanf(); teste com matrizes inicializadas 
	dentro do programa.
	
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	int matriz_a[2][4] = {{0,1,2,3},{5,6,7,8}},vetor_v[4] = {5,8,3,0}, i, j, matriz_resultado[4][1],soma;
		
	for(i = 0;i < 2;++i){
		soma = 0;
		for(j = 0;j < 4; ++j){
			soma += matriz_a[i][j]*vetor_v[j];
		}
		matriz_resultado[i][0] = soma;
	}
	printf("\nTeste da matriz multiplicada pelo vetor: \n\n");
	for(i = 0; i < 2;++i){
		printf("  %d  ", matriz_resultado[i][0]);
		printf("\n");
	}
	return 0;
}
