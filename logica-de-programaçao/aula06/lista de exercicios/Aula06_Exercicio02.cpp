/*
2) Um terminal de autoatendimento de banco tem três opções: 1 
para saldo, 2 para extrato e 3 para encerrar. O programa deve 
ler a opção digitada e mostrar a mensagem correspondente; para 
qualquer outro valor, deve avisar que a opção é inválida. Desenvolva 
um programa em C para resolver esse problema
*/

#include <stdio.h>
#include <stdlib.h>

#define VALOR 2500
#define DES1 500
#define DES2 900

int main(void){
	// variáveis
	int opcao;

	// entrada
	printf("1 - para saldo\n");
	printf("2 - para extrato\n");
	printf("3 - para sair\n");
	printf("Digite uma opcao: ");
	scanf("%i",&opcao);

	// processamento e saída
	switch(opcao){
		case 1:
			printf("O valor e R$ %i.00\n",VALOR);
			break;
		case 2:
			printf("1 - Cartao R$ %i.00\n",DES1);
			printf("2 - Carro R$ %i.00\n",DES2);
			printf("Saldo R$ %i.00\n",VALOR);
			break;
		case 3:
			printf("Volte logo\n");
			break;
		default:
			printf("Erro! Nao tem opcao\n");
	}

	return 0;
}
