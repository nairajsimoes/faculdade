/* Numa central de atendimento, as fichas de número par vão para o guichê A e as de 
número ímpar para o guichê B. O programa deve ler o número da ficha e informar o 
guichê de atendimento. Dica: lembre do resto da divisão. Desenvolva um programa em 
C99 para resolver esse problema. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	// quais sao as variaveis?
	int ficha;
	
	//quais sao as entradas de dados?
	printf("Digite o numero da sua ficha: ");
	scanf("%i", &ficha);
	
	// quais sao os processamentos e saida de dados?
	
	if(ficha % 2 == 0){
		printf("Va para o guiche A.");
	}
	else {
		printf("Va para o guiche B.");
	}
	
	return 0;
	
}