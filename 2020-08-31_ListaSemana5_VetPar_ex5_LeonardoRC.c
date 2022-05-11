#include <stdio.h>
#include <stdlib.h>

/* 
	Lista Semana 5 - Vetores como Parametros
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	5.Crie uma função que receba um vetor de entrada e outro de saída.
	A função deve inverter o vetor de entrada, colocando na saída os 
	mesmos elementos, mas em ordem inversa.
	
*/
void inverte_vetor(const int vetor_inicial[], int vetor_final[],const int tamanho_vetor){
	int cont = tamanho_vetor - 1, i;
	for(i = 0;i < tamanho_vetor;++i){
		vetor_final[i] = vetor_inicial[cont]; 
		cont--;
	}
}
int main(int argc, char *argv[]) {
	int vetor_i[] = {3,2,1,0}, vetor_f[4], tam = 4,i;
	
	inverte_vetor(vetor_i,vetor_f, tam);
	for(i = 0;i < tam; ++i)
		printf("%d ", vetor_i[i]);
	printf("\n");
	for(i = 0;i < tam; ++i)
		printf("%d ", vetor_f[i]);
	return 0;
}
