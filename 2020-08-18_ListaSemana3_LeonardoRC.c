#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592 //Requisito 1


/* 
		
	Lista Semana 3
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
		Desenvolva um programa que simule uma calculadora que
	realize as opera��es b�sica, + - * /, de dois n�meros quaisquer digitados pelo usu�rio e a
	�rea de um c�rculo. Para isso, siga os requisitos abaixo:
	
	Requisito 1) Declare uma constante PI utilizando #define.
	Requisito 2) Seu programa DEVE ter obrigatoriamente pelo menos um operador de
	incremento ou decremento, exemplo: ++variavel, variavel++ e um operador de atribui��o
	composto, exemplo: variavel+= ou variavel*=.
	Requisito 3) Utilize o la�o de repeti��o while() como controle de itera��o do programa
	principal. Caso o usu�rio digite 0 (zero), o programa deve ser fechado.
	Requisito 4) A estrutura de controle switch() deve ser utilizada para a escolha da opera��o
	desejada, sendo:
	1: Opera��o somar;
	2: Opera��o subtrair;
	3: Opera��o multiplicar;
	4: Opera��o dividir;
	5: Opera��o �rea do c�rculo (A=PI*R^2);
	0: Opera��o sair do programa;
	Outro n�mero qualquer: Opera��o n�o encontrada.
	Requisito 5) Apenas na opera��o 3, multiplicar, utilize a estrutura de repeti��o for() para
	exibir a estrutura da calculadora na tela do usu�rio, por exemplo:
	entrada= 3 x 5 sa�da= 3+3+3+3+3+=15
	Requisito 6) : N�o esque�a! Na opera��o de dividir, verifique a divis�o por zero. Utilize a
	estrutura de sele��o IF().
		
*/

int main(int argc, char *argv[]) {
	int operacao = -1;
	double raio, area, num1, num2, calculo;
	char continuar = 's';
	
	printf("SIMULACAO DE CALCULADORA\n\n");
	while(operacao != 0 && continuar =='s'){ //Requisito 3
		printf("Digite a operacao desejada: \n[1] SOMAR \n[2] SUBTRAIR\n[3] MULTIPLICAR\n[4] DIVIDIR\n[5] AREA DO CIRCULO (A = PI.R^2)\n[0] SAIR DO PROGRAMA\n\n");
		scanf("%d", &operacao);
		switch(operacao){ //Requisito 4
		case 1:
			printf("\nDigite dois numeros que preencham, respectivamente, a operacao: ___ + ___\n");
			scanf("%lf%lf", &num1, &num2);
			calculo = num1 + num2;
			printf("\n\nEntrada: (%.2lf) + (%.2lf) / Saida: %.2lf\n\n", num1, num2, calculo);
			continuar = 'n';
			break;
		case 2:
			printf("\nDigite dois numeros que preencham, respectivamente, a operacao: ___ - ___\n");
			scanf("%lf%lf", &num1, &num2);
			calculo = num1 - num2;
			printf("\n\nEntrada: (%.2lf) - (%.2lf) / Saida: %.2lf\n\n", num1, num2, calculo);
			continuar = 'n';
			break;
		case 3:
			printf("\nDigite dois numeros que preencham, respectivamente, a operacao: ___ * ___\n");
			scanf("%lf%lf", &num1, &num2);
			calculo = num1 * num2;
			printf("\n\nEntrada: (%.0lf) * (%.0lf) / Saida: ", num1, num2);
			int i; //Requisito 5 abaixo Linhas 68 a 86
			if(num2 >= 0){
				for(i = 1; i <= num2; i++){ //Requisito 2 (i++)
					if(i == 1)
						printf("(%.0lf)", num1);
					else printf("+(%.0lf)", num1);
				}
				printf(" = %.0lf\n\n", calculo);
			}
			else{
				i = -1;
				while(i >= num2){
					if(i == -1)
						printf("(-1)*((%.0lf)", num1);
					else printf("+(%.0lf)", num1);
					i -= 1;//Requisito 2 (i -= 1)
				}
				printf(") = %.0lf\n\n", calculo);
			}
			continuar = 'n';
			break;
		case 4:
			printf("\nDigite dois numeros que preencham, respectivamente, a operacao: ___ / ___\n");
			scanf("%lf%lf", &num1, &num2);
			if(num2 == 0){ //Requisito 6
				printf("\n\nAlerta de divisao por 0!\n\n");
				continuar = 'n';
				break;
			}
			else{
				calculo = num1 / num2;
				printf("\n\nEntrada: (%.2lf) / (%.2lf) / Saida: %.2lf\n\n", num1, num2, calculo);
				continuar = 'n';
			}
			break;
		case 5: 
			printf("\nDigite o raio R (m) do circulo para descobrir sua area A=PI*R^2: ");
			scanf("%lf", &raio);
			printf("\nCirculo de raio R = %.2lf m tem area de %.2lf m^2\n\n", raio, PI* (raio*raio));
			continuar = 'n';
			break;
		case 0:
			break;
		}
	}
	return 0;
}
