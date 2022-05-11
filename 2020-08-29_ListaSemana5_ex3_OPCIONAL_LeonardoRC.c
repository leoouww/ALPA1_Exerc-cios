#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

/* 
	Lista Semana 5 - Vetores
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	3.(OPCIONAL) Pesquise uma função de biblioteca bem simples, que retorne char, int ou double.
	Alternativamente, pode usar uma de suas funções do exercício da semana passada, devidamente corrigida.
	Usando vetores, construa um programa que teste essa função. Exemplo: supondo que a função tome dois parâmetros,
	crie um vetor p1[] para o primeiro parâmetro, um vetor p2[] para o segundo parâmetro, e um vetor ret[] para
	o retorno esperado. Preencha p1[0] e p2[0] com um par de dados de entrada, e preencha ret[0] com o retorno esperado
	da função para esses parâmetros. Os demais elementos dos vetores devem ser preenchidos com outros conjuntos de teste.
	O programa deverá comparar o retorno da função com o retorno esperado e dar mensagem tanto em caso de erro quanto em
	caso de sucesso. Preencha pelo menos 10 conjuntos de teste. Pode preencher na inicialização com chaves ou com um for.
	Todos os casos deverão ser testados. Inclua pelo menos um caso de teste errado para testar se seu programa pegaria um
	caso real de erro.
	
*/
int funcao_soma(const int num1, const int num2){
	return num1+num2;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	int par1[] = {0,2,5,15,60,20,44,1,-88,10},
		par2[] = {5,6,-8,55,-9,111,-455,53,4,101},
		ret[] = {5,8,-3,70,51,131,411,54,-84,121},//No vetor, ret[6] e ret[9] nao tem valor correto da operação!
		i;
	
	for(i=0;i<TAM;++i)
		if(ret[i] == funcao_soma(par1[i],par2[i]))
			printf("\nSUCESSO!");
		else
			printf("\nERRO!");
	return 0;
}
