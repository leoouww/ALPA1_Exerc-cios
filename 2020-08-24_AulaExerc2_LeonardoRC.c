#include <stdio.h>
#include <stdlib.h>

/* 

	2. Declare um vetor double e o inicialize com os inversos dos números
	de um a cinco. Então calcule o produto destes números.

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
