#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Lista Semana 9 - Vetor Pares
	
	LEONARDO RODRIGUES DE CASTRO
	PT3008479

	1. Fa�a um programa que receba dois vetores int de tamanho 10 
	onde o primeiro vetor ir� receber os valores passados por par�metro no terminal. 
	Uma fun��o dever� receber o primeiro vetor e ir� selecionar os n�meros pares e adicionar no segundo vetor. 
	No final o programa dever� imprimir o vetor de entrada e o vetor com os n�meros pares. 
	Para resolver esse exerc�cio � necess�rio criar uma fun��o que receber� os dois vetores como ponteiros, 
	um contador para receber a quantidade total de valores de entrada passado por valor 
	e o outro contador para saber quantos n�meros pares foram encontrados passado por refer�ncia.

*/

void pares( int *entrada, int *par,  int *cont, const int tam) {
    
    // loop que corre o vetor ventrada
    for( int i=0; i<tam; i++){ 
        if ( *entrada % 2 == 0 ){ // condicional para encontrar os valores pares
        	// *par � equivalente ao vpares[i] e
        	// *entrada � equivalente ao ventrada[i]
        	// ou seja, o vetor vpares[] recebe o valor do vetor ventrada[]
        	*par=*entrada; // equivalente a vpares[i] = ventrada[i]
        	par++; // avan�a uma posi��o no �ndice do vetor vpares[]
        	(*cont)++; // conta +1 na vari�vel contapares
        }
        entrada++; // avan�a uma posi��o no �ndice do vetor ventrada
	}
}

int main( int argc, char *argv[]) {
    setlocale(LC_ALL, "");
    
	int ventrada[10] = {0,0,0,0,0,0,0,0,0,0}; // Vetor que recebe os n�meros iniciais
	int vpares[10] = {0,0,0,0,0,0,0,0,0,0}; // Vetor que recebe os n�meros pares
    int contapares=0; // contador utilizado para saber a quantidade de n�meros pares
    
    printf("argc=%d\n", argc); // Exibe a quantidade de n�meros de entrada no vetor
    
	if( argc < 2) { // Essa condicional verifica se foram passados os par�metros no terminal
        printf("Passe n�meros que ser�o inseridos no vetor. \n");
        exit(1);
    } 
    
    // la�o de repeti��o para inser��o dos valores no vetor 
	for( int i=0; i<=argc-2; ++i) {
        ventrada[i] = strtol(argv[i+1],0,0); // atoi : Converte os valores passados para int
    }
   
  
    /* 
     o argc-1 faz a contagem da quantidade de valores passados. 
	 O -1 significa que ele n�o conta o pr�prio programa, 
	 porque o primeiro valor � o pr�prio programa
	 ...
	o &contapares � o endere�o de mem�ria da vari�vel contapares,
	ou seja, a fun��o pares est� recebendo o contapares passado por refer�ncia
	*/
	pares(ventrada, vpares, &contapares, argc-1); // pares pega os valores como par�metros o e o argc-1 como tamnho do vetor
	
	// printf que imprime todos os valores que foram passados
	printf("Os n�meros de entrada s�o: "); 
	for(int i=0; i < argc-1; i++){
   			printf("%d ", ventrada[i]); // ventrda � o vetor que possui os valores de entrada 
	} 
	
	printf("\n"); 
	// printf que imprime os valores pares que foram passados como par�metro
	printf("Os n�meros pares s�o: ");
	for(int i=0; i < contapares; i++){
			printf("%d ", vpares[i]); // vpares � o vetor que recebeu os n�meros pares
	} 
    
    return 0;
}
