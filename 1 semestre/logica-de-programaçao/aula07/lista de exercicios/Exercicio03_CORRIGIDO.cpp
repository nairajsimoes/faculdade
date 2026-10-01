/*  O centro de lançamento de um foguete precisa de uma contagem regressiva. O programa deve ler o número inicial da contagem e mostrar os valores até 0, terminando
com a mensagem de lançamento. Desenvolva um programa em C para resolver esse problema. */

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	// variaveis?
	int numero;
	
	// entrada
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	// processamento e saida
	for(int i=numero;i>=0;i--){
		printf("%i\n", i);
	}
	
	return 0;
}