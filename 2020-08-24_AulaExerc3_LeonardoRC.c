#include <stdio.h>
#include <stdlib.h>

/* 

	3. Declare um vetor de caracteres e inicialize com a string "algoritmos".
	Então conte quantos caracteres tem esta string e imprima.  

*/

int main(int argc, char *argv[]) {
	char str[] = "algoritmos";
	
	printf("\nString tem %d elementos!", (int)sizeof(str));
	return 0;
}
