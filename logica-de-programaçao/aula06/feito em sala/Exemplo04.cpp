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
		case 2:
			printf("Numero: dois\n");
		case 3:
			printf("Numero: tres\n");
	}
	
	return 0;
}




