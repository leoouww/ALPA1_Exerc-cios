#include <stdio.h>
#include <stdlib.h>

/* 

	2. Declare um vetor double e o inicialize com os inversos dos n�meros
	de um a cinco. Ent�o calcule o produto destes n�meros.

*/

int main(int argc, char *argv[]) {
	double produto = 1.0, vetor[5];
	int i;
	
	for(i = 0; i <= 4; i++){
		vetor[i] = -(i+1);
		produto *= vetor[i];
	}
	printf("\n%.2lf", produto);
	return 0;
}
