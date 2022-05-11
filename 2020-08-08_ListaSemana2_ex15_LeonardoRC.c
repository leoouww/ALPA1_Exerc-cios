#include <stdio.h>
#include <stdlib.h>

/* 

	Lista Semana 2 - Estruturas de Decisao
	LEONARDO RODRIGUES DE CASTRO
	
	15.Crie um algoritmo para uma calculadora utilizando a construção else-if para
	determinar a operação que deve ser executada, conforme o usuário escolher no
	menu de opções. Conforme a opção escolhida pelo usuário, uma operação
	diferente da calculadora deve ser executada.
	
*/

int main(int argc, char *argv[]) {
	int operacao;
	double calculo, num1, num2;
	
	printf("Qual operacao desejada? \n[1]Adicao [2]Subtracao [3]Multiplicacao\n[4]Divisao [5]Exponenciacao [6]Raiz\n");
	scanf("%d", &operacao);
	if(operacao == 1){
		printf("Digite os valores que preencheriam, respectivamente as lacunas da equacao: ___ + ___\n");
		scanf("%lf%lf", &num1, &num2);
		calculo = num1 + num2;
	}
	else if(operacao == 2){
			printf("Digite os valores que preencheriam, respectivamente as lacunas da equacao: ___ - ___\n");
			scanf("%lf%lf", &num1, &num2);
			calculo = num1 - num2;
		}
		else if(operacao == 3){
				printf("Digite os valores que preencheriam, respectivamente as lacunas da equacao: ___ * ___\n");
				scanf("%lf%lf", &num1, &num2);
				calculo = num1 * num2;
			}
			else if(operacao == 4){
					printf("Digite os valores que preencheriam, respectivamente as lacunas da equacao: ___ / ___\n");
					scanf("%lf%lf", &num1, &num2);
					calculo = num1 / num2;
				}
				else if(operacao == 5){
						printf("Digite os valores que preencheriam, respectivamente as lacunas da equacao: ___ (^) ___\n");
						scanf("%lf%lf", &num1, &num2);
						if(num2 == 0)
							calculo = 1;
						else if(num2 == 1)
								calculo = num1;
							else{
								int cont = 2;
								calculo = num1;
								do{
									//calculo = calculo*num1;
									calculo *= num1;
									cont = cont + 1;
								}while(cont <= num2);
							}
					}
				/*	else if(operacao == 6){
							printf("Digite os valores que preencheriam, respectivamente as lacunas da equacao: \nRaiz ___ do Numero ___\nPor exemplo, para descobrir a raiz quadrada de 16, bastaria digitar 2 seguido de 16.\n..: ");							
							scanf("%lf%lf", &num1, &num2);
							int testador = 1, con;
							do{
								
							}
							*/
	printf("Resultado: %.1lf\n", calculo);						
	return 0;
}
