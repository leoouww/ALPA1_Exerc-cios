#include <stdio.h>
#include <stdlib.h>

/* 

	4. Imprima a string "algoritmos" caractere por caractere, por�m na
	ordem inversa.
	
*/

int main(int argc, char *argv[]) {
	char str[] = "algoritmos";
	int i;
	
	for(i = sizeof(str) - 2; i >= 0; i--)
		printf("%c-", str[i]);
	return 0;
}
