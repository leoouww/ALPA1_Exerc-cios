#include <stdio.h>
#include <stdlib.h>

/* 

	Lista Semana 2 - Estruturas de Repeticao
	LEONARDO RODRIGUES DE CASTRO	
	
	7. Para uma turma de 45 alunos, construa um algoritmo que determine:
	a) A idade média dos alunos com menos de 1,70m de altura;
	b) A altura média dos alunos com mais de 20 anos. 
	
*/

int main(int argc, char *argv[]) {
	int idade, idade_lim = 20, soma_idade = 0, cont = 1, cont_med_idade = 0, alunos = 45; //Alterando-se a quantidade de alunos, aplica-se mais facilmente a testagem do programa
	double altura, soma_altura = 0, altura_lim = 1.70, cont_med_altura = 0.0;
	
	do{
		printf("Entre com idade e altura do aluno %d: ", cont);
		scanf("%d%lf", &idade,&altura);
		if(altura < altura_lim){
			cont_med_idade = cont_med_idade + 1;
			soma_idade = soma_idade + idade;
		}
		if(idade > idade_lim){
			cont_med_altura = cont_med_altura + 1.0;
			soma_altura = soma_altura + altura;
		}
		cont = cont + 1;		
	}while(cont <= alunos);
	if(cont_med_idade != 0) //Testagem precisa ser feita para garantir que nao seja feita divisao por zero
		printf("\na) A idade media dos alunos com menos de 1,70m de altura foi de: %d anos", soma_idade / cont_med_idade);
	else
		printf("\na) Nao houve alunos com menos de 1,70m");
	if(cont_med_altura != 0.0)
		printf("\n\nb) A altura media dos alunos com mais de 20 anos foi: %.2lfm\n", soma_altura / cont_med_altura);	
	else
		printf("\n\nb) Nao houve alunos com mais de 20 anos");
	return 0;
}
