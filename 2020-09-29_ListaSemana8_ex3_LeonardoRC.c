#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 4
#include <locale.h>
/* 
	Lista Semana 8 - Exercícios Vetores e Ponteiros em C
	LEONARDO RODRIGUES DE CASTRO
	PT3008479	
	
	3 - (Obrigatório) Faça um programa que passe três números por argumento e calcule as
	raízes da equação ax² + bx + c = 0. Utilize Bhaskara. Se houver uma só raiz, pode imprimir
	duas vezes. Não é necessário prever casos em que a equação não tem raiz.	
	
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
		printf("\nERRO: Você precisa passar 3 argumentos válidos como parâmetro!");
		exit(1);
	}
	double raiz1, raiz2;
	double a = strtod(argv[1],0);//coeficientes da equação do segundo grau
	double b = strtod(argv[2],0);
	double c = strtod(argv[3],0);
	raiz1 = bhaskara1(a,b,c);
	raiz2 = bhaskara2(a,b,c);
	if(raiz1 == raiz2)
		printf("\nDados: \na = %lf\nb = %lf\nc = %lf\n\nTemos como única raíz: %lf\n", a,b,c,raiz1);
	else printf("\nDados: \na = %lf\nb = %lf\nc = %lf\n\nTemos as raízes: %lf e %lf\n", a,b,c,raiz1,raiz2);
	return 0;
}
