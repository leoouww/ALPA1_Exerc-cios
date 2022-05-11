#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Lista Semana 9 - Vetor Pares
	
	LEONARDO RODRIGUES DE CASTRO
	PT3008479

	1. Faça um programa que receba dois vetores int de tamanho 10 
	onde o primeiro vetor irá receber os valores passados por parâmetro no terminal. 
	Uma função deverá receber o primeiro vetor e irá selecionar os números pares e adicionar no segundo vetor. 
	No final o programa deverá imprimir o vetor de entrada e o vetor com os números pares. 
	Para resolver esse exercício é necessário criar uma função que receberá os dois vetores como ponteiros, 
	um contador para receber a quantidade total de valores de entrada passado por valor 
	e o outro contador para saber quantos números pares foram encontrados passado por referência.

*/

void pares( int *entrada, int *par,  int *cont, const int tam) {
    
    // loop que corre o vetor ventrada
    for( int i=0; i<tam; i++){ 
        if ( *entrada % 2 == 0 ){ // condicional para encontrar os valores pares
        	// *par é equivalente ao vpares[i] e
        	// *entrada é equivalente ao ventrada[i]
        	// ou seja, o vetor vpares[] recebe o valor do vetor ventrada[]
        	*par=*entrada; // equivalente a vpares[i] = ventrada[i]
        	par++; // avança uma posição no índice do vetor vpares[]
        	(*cont)++; // conta +1 na variável contapares
        }
        entrada++; // avança uma posição no índice do vetor ventrada
	}
}

int main( int argc, char *argv[]) {
    setlocale(LC_ALL, "");
    
	int ventrada[10] = {0,0,0,0,0,0,0,0,0,0}; // Vetor que recebe os números iniciais
	int vpares[10] = {0,0,0,0,0,0,0,0,0,0}; // Vetor que recebe os números pares
    int contapares=0; // contador utilizado para saber a quantidade de números pares
    
    printf("argc=%d\n", argc); // Exibe a quantidade de números de entrada no vetor
    
	if( argc < 2) { // Essa condicional verifica se foram passados os parâmetros no terminal
        printf("Passe números que serão inseridos no vetor. \n");
        exit(1);
    } 
    
    // laço de repetição para inserção dos valores no vetor 
	for( int i=0; i<=argc-2; ++i) {
        ventrada[i] = strtol(argv[i+1],0,0); // atoi : Converte os valores passados para int
    }
   
  
    /* 
     o argc-1 faz a contagem da quantidade de valores passados. 
	 O -1 significa que ele não conta o próprio programa, 
	 porque o primeiro valor é o próprio programa
	 ...
	o &contapares é o endereço de memória da variável contapares,
	ou seja, a função pares está recebendo o contapares passado por referência
	*/
	pares(ventrada, vpares, &contapares, argc-1); // pares pega os valores como parâmetros o e o argc-1 como tamnho do vetor
	
	// printf que imprime todos os valores que foram passados
	printf("Os números de entrada são: "); 
	for(int i=0; i < argc-1; i++){
   			printf("%d ", ventrada[i]); // ventrda é o vetor que possui os valores de entrada 
	} 
	
	printf("\n"); 
	// printf que imprime os valores pares que foram passados como parâmetro
	printf("Os números pares são: ");
	for(int i=0; i < contapares; i++){
			printf("%d ", vpares[i]); // vpares é o vetor que recebeu os números pares
	} 
    
    return 0;
}
