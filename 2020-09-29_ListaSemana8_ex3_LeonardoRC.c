#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 4
#include <locale.h>
/* 
	Lista Semana 8 - Exerc�cios Vetores e Ponteiros em C
	LEONARDO RODRIGUES DE CASTRO
	PT3008479	
	
	3 - (Obrigat�rio) Fa�a um programa que passe tr�s n�meros por argumento e calcule as
	ra�zes da equa��o ax� + bx + c = 0. Utilize Bhaskara. Se houver uma s� raiz, pode imprimir
	duas vezes. N�o � necess�rio prever casos em que a equa��o n�o tem raiz.	
	
*/
double bhaskara1(double a, double b, double c){ //equivale ao x' da formula de Bhaskara
	return (-b + sqrt(pow(b,2) - 4*a*c))/2*a;
}

double bhaskara2(double a, double b, double c){//equivale ao x'' da formula de Bhaskara
	return (-b - sqrt(pow(b,2) - 4*a*c))/2*a;
}

int main(int argc, char *argv[]){
	setlocale(LC_ALL,"");

	if(argc < 4){
		printf("\nERRO: Voc� precisa passar 3 argumentos v�lidos como par�metro!");
		exit(1);
	}
	double raiz1, raiz2;
	double a = strtod(argv[1],0);//coeficientes da equa��o do segundo grau
	double b = strtod(argv[2],0);
	double c = strtod(argv[3],0);
	raiz1 = bhaskara1(a,b,c);
	raiz2 = bhaskara2(a,b,c);
	if(raiz1 == raiz2)
		printf("\nDados: \na = %lf\nb = %lf\nc = %lf\n\nTemos como �nica ra�z: %lf\n", a,b,c,raiz1);
	else printf("\nDados: \na = %lf\nb = %lf\nc = %lf\n\nTemos as ra�zes: %lf e %lf\n", a,b,c,raiz1,raiz2);
	return 0;
}
