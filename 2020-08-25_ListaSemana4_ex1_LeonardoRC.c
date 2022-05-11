#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.141592


/* 
		
	Lista Semana 4
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	Baseado no exerc�cio anterior, adapte o exerc�cio abaixo de modo que as opera��es
	aritm�ticas sejam fun��es que retornem seus respectivos valores.
	A estrutura de controle switch() deve ser utilizada para a escolha da opera��o desejada,
	sendo elas:
	1: Opera��o somar; assinatura : double somar(double x , double y ) ;
	2: Opera�� subtratir: assinatura : double subtrair(double x , double y ) ;
	3: Opera��o multiplicar: assinatura : double multiplicar (double x , double y ) ;
	4: Opera��o dividir: assinatura : double dividir (double x , double y );
	5: Opera��o �rea do c�rculo (A=PI*R^2): assinatura : double areacirculo (double R) ;
	0: Opera��o sair do programa;
	6: Outro n�mero qualquer: Opera��o n�o encontrada: assinatura : opcaoinvalida().
	A fun��o opcaoinvalida() deve escrever na tela a seguinte mensagem: �OP��O N�O
	ENCONTRADA�.
		
*/

double somar(double num1, double num2){
	return num1 + num2;
}
double subtrair(double num1, double num2){
	return num1 - num2;
}
double multiplicar(double num1, double num2){
	double resultado_mult;
	
	resultado_mult = num1 * num2;
	printf("\n\nEntrada: (%.0lf) * (%.0lf) / Saida: ", num1, num2);
	int i; 
	if(num2 >= 0){
		for(i = 1; i <= num2; i++){ 
			if(i == 1)
				printf("(%.0lf)", num1);
			else printf("+(%.0lf)", num1);
		}
		printf(" = %.0lf\n\n", resultado_mult);
	}
	else{
		i = -1;
		while(i >= num2){
			if(i == -1)
				printf("(-1)*((%.0lf)", num1);
			else printf("+(%.0lf)", num1);
			i -= 1;
		}
		printf(") = %.0lf\n\n", resultado_mult);
	}
	return resultado_mult;
}
double dividir(double num1, double num2){
	if(num2 == 0){
		printf("\n\nAlerta de divis�o por 0!\n\n");
		return 0;
	}
	else
		return num1 / num2;
}
double area_circulo(double raio){
	return PI*(raio*raio);
}
double sair_programa(){
	return 0;
}
char opcaoinvalida(){
	printf("\nOp��o n�o encontrada!\n\n");
	return 's';
}


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	int operacao = -1;
	double calculo, p_num, s_num, raio_circulo;
	char continuar = 's';
	
	printf("SIMULACAO DE CALCULADORA\n\n");
	while(operacao != 0 && continuar =='s'){ 
		printf("Digite a opera��o desejada: \n[1] SOMAR \n[2] SUBTRAIR\n[3] MULTIPLICAR\n[4] DIVIDIR\n[5] �REA DO C�RCULO (A = PI.R�)\n[0] SAIR DO PROGRAMA\n\n");
		scanf("%d", &operacao);
		if(operacao > 0 && operacao < 5){
			printf("\nDigite dois numeros para realizar a opera��o desejada: ");
			scanf("%lf%lf", &p_num, &s_num);
		}
		else if(operacao == 5){
			printf("\nDigite o raio do c�rculo: ");
			scanf("%lf", &raio_circulo);
		}
		continuar = 'n';			
		switch(operacao){
		case 1:
			calculo = somar(p_num, s_num);
			break;
		case 2:
			calculo = subtrair(p_num, s_num);
			break;
		case 3:
			calculo = multiplicar(p_num, s_num);
			break;
		case 4:
			calculo = dividir(p_num, s_num);
			break;
		case 5:
			calculo = area_circulo(raio_circulo);
			break;
		case 0:
			operacao = sair_programa();
			break;
		default:
			continuar = opcaoinvalida();
			break;	
		}
	}
	if(operacao != 0)
		printf("\n\nResultado da opera��o: %.2lf", calculo);
	return 0;
}
