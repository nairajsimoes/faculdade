/*
1 Uma autoescola só aceita matrícula de quem já tem 18 anos ou 
mais. O programa deve ler a idade do candidato e informar se a 
matrícula pode ou não ser feita. Desenvolva um programa em C para 
resolver esse problema
*/
#include <stdio.h>
#include <stdlib.h>

#define D 3
#define M 9
#define A 2026

// 2/9/2008


int main(void){
	// variáveis
	int dia, mes, ano;
	
	// entrada
	printf("Digite o dia nascimento: ");
	scanf("%i",&dia);
	printf("Digite o mes nascimento: ");
	scanf("%i",&mes);
	printf("Ditite o ano nascimento: ");
	scanf("%i",&ano);
	
	// processamento e saída
	if((A-18) > ano){
		printf("Pode fazer.");
	}else{
		if((A-18) == ano && M > mes){
			printf("Pode fazer.");
		}else{
			if((A-19)==ano && M==mes && D>=dia){
				printf("Pode fazer.");
			}else{
				printf("Nao pode fazer.");
			}
		}
	}

	return 0;
}




