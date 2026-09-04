#include <stdio.h>
#include <stdlib.h>

int main(void){
	char letra;
	
	printf("Digite um letra: ");
	scanf("%c",&letra);
	
	if(letra == 'c'){
		printf("Achou!");
		
	}else{
		printf("Tente novamente!");
	}
	
	return 0;
}
