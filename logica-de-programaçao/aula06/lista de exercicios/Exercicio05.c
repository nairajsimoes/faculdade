/*  Uma empresa recebeu orçamentos de dois fornecedores para o mesmo serviço. O 
programa deve ler os dois valores e informar qual fornecedor é o mais barato, ou avisar 
se os valores empataram. Desenvolva um programa em C99 para resolver esse problema. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	// quais sao as variaveis?
	float Fornecedor1, Fornecedor2;
	
	//quais sao as entradas de dados?
	printf("Qual o valor do Fornecedor 1? ");
	scanf("%f", &Fornecedor1);

	printf("Qual o valor do Fornecedor 2? ");
	scanf("%f", &Fornecedor2);
	
	// quais sao os processamentos e saida de dados?
	if (Fornecedor1 > Fornecedor2){
		printf("O fornecedor 2 tem valor mais barato.");
	}
	else if (Fornecedor1 == Fornecedor2){
		printf("Os valores dos dois fornecedores empataram.");
	}
	else {
		printf("O fornecedor 1 tem valor mais barato.");
	}
	
	return 0;
	
}