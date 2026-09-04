/* Uma autoescola só aceita matrícula de quem já tem 18 anos ou mais. O programa deve ler a idade do candidato e informar se a matrícula pode ou não
ser feita. Desenvolva um programa em C para resolver esse problema. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int idade;
	
	printf("Qual sua idade? ");
	scanf("%i", &idade);
	
	if(idade>=18) {
		printf("Matricula concluida!");
	}
	else {
		printf("Matricula nao pode ser feita.");
	}
	
	return 0;
}