/* Dados dois números qual é o maior? */
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int n1, n2;
	
	// entrada
	printf("Digite 1 numero: ");
	scanf("%i",&n1);
	printf("Digite 2 numero: ");
	scanf("%i",&n2);
	
	// processamento e saída
	if(n1<n2){
		printf("N2 e o maior numero\n");
	}else{
		printf("N1 e o maior numero\n");
	}
	
	return 0;
}