// programa para escrever os numeros

#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int opcao;
	
	// entrada
	printf("Digite uma opcao: ");
	scanf("%i",&opcao);
	
	// processamento e saída
	switch(opcao){
		case 1:
			printf("Numero: um\n");
			break;
		case 2:
			printf("Numero: dois\n");
			break;
		case 3:
			printf("Numero: tres\n");
			break;
		default:
			printf("Numero: nao cadastrado\n");
	}
	
	return 0;
}




