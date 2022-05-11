#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 100

/* 
	Lista Semana 8 - Exercícios Vetores e Ponteiros em C
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	5- (Obrigatório) Faça um programa que modifique as vogais de uma frase de acordo com a
	tabela abaixo. O programa deve ler uma frase (max. 100 caracteres) e armazená-la num
	vetor. Imprimir a frase lida trocando as vogais. Use uma função void (procedimento) para
	realizar a troca e uma função para realizar a impressão da frase trocada. A função deve ter
	como parâmetro um ponteiro char referente ao vetor. Dica: Use a função gets() da biblioteca
	string.h para realizar a leitura da frase, use o switch para realizar as trocas. Só considere as
	letras minúsculas.
	
*/
void troca_vogais(char string[MAX]){
	for(int i = 0; i < MAX; ++i)
		switch(string[i]){
		case 'a':
			string[i] = 'u';
			break;
		case 'e':
			string[i] = 'o';
			break;
		case 'i':
			string[i] = 'e';
			break;
		case 'o':
			string[i] = 'a';
			break;	
		case 'u': 
			string[i] = 'i';
			break;
		}
}

void imprimi_string(char string[MAX]){
	printf("\n%s\n",string);
}


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	char string[MAX];
	
	printf("\nPor gentileza, insira uma frase de até no máximo 100 caracteres: \n");
	fgets(string,MAX+1,stdin);
	imprimi_string(string);
	troca_vogais(string);
	imprimi_string(string);
	return 0;
}
