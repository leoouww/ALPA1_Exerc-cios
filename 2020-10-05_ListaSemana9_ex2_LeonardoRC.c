#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 15

/* 
	Lista Semana 9
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	2. Fa�a um programa que receba dois valores inteiros passados pelo terminal 
	e um vetor inteiro de 15 posi��es que ir� gravar a sequ�ncia de Fibonacci 
	gerada por uma fun��o. Para resolver o exerc�cio ser� necess�rio criar uma 
	fun��o que receba os dois valores passados por valor e um vetor passado por 
	refer�ncia usando ponteiro. A sequ�ncia de Fibonacci soma os dois valores 
	anteriores para conseguir o terceiro valor. Por exemplo, se os valores de entrada 
	forem 1 e 2 a sequ�ncia ser�: 1 2 3 5 8 13 21 34 55 ... 
	
*/

void gera_sequencia(int *vetor, int p_par, int s_par, int tamanho_vetor){
	int p_num = p_par;
	int s_num = s_par;
	*vetor = p_num;
	vetor++;
	*vetor = s_num;
	for(int i = 2; i < tamanho_vetor; ++i){
		vetor++;
		*vetor = p_num + s_num;
		p_num = s_num;
		s_num = *vetor;
	}
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	//Etapa que encerra o programa nos casos em que n�o haja inser��o correta de par�metros
	printf("\nArgc = %d", argc);
	if(argc < 3){
		printf("\nPor gentileza, passe os valores por par�metro!\n");
		exit(1);
	}
	//Declara��o do vetor de tamanho TAM == 15 posi��es!
	int vetor[TAM];
	int tamanho_vetor = TAM;
	int p_par = atoi(argv[1]);
	int s_par = atoi(argv[2]);
	
	//Procedimento que gera a Sequ�ncia de Fibonnacci no vetor de tamanho TAM
	gera_sequencia(vetor, p_par, s_par, tamanho_vetor);
	
	//Verifica��o do procedimento
	printf("\nSequ�ncia de Fibonnacci: ");
	for(int i = 0; i < tamanho_vetor; i++)
		printf(" %d ", vetor[i]);

	return 0;
}
