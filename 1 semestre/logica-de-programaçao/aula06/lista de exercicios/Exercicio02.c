#include <stdio.h>
#include <stdlib.h>

/* Um terminal de autoatendimento de banco tem três opções: 1 para saldo, 2 para extrato e 3 para encerrar. O programa deve ler a opção digitada e
mostrar a mensagem correspondente; para qualquer outro valor, deve avisar que a opção é inválida. Desenvolva um programa em C para resolver esse problema */

int main(void){
	// variaveis
	int opcao;
	
	// entrada
	printf("Digite a opcao desejada: ");
	scanf("%i", &opcao);
	
	switch(opcao) {
		case 1:
			printf("Saldo\n");
			break;
		case 2:
			printf("Extrato\n");
			break;
		case 3:
			printf("Encerrar\n");
			break;
		default:
			printf("Opcao nao registrada.");
	}
	
	return 0;
	
}