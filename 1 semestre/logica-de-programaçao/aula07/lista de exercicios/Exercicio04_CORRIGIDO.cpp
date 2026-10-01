/* A coordenação quer a média de uma turma. O programa deve ler quantos alunos fizeram a prova e, depois, a nota de cada um; 
ao final, mostra a média da turma com duas casas decimais. Considere pelo menos um aluno. 
Desenvolva um programa em C para resolver esse problema. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	// variaveis
	int qtd_alunos;
	float nota, soma=0, media;
	
	// entrada
	printf("Digite a quantidade de alunos: ");
	scanf("%i", &qtd_alunos);
	
	for(int i=1;i<=qtd_alunos;i++){
		printf("Digite a nota %i do aluno: ", i);
		scanf("%f", &nota);
		soma+=nota;
	}
	
	// processamento 
	media = soma/qtd_alunos;
	
	// saida
	printf("A media e %.2f\n", media);
	
	return 0;
}