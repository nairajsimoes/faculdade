/* Uma professora do ensino fundamental quer um programa para treinar tabuada com a turma. O programa
deve ler um número e mostrar a tabuada dele, de 1 a 10, no formato: 7 x 1 = 7. Desenvolva um programa em C 
para resolver esse problema. */

#include <stdio.h>

int main()
{
	// quais sao as variaveis?
	int numero;
	
	// entrada
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	// processamento e saida
	for (int i=1; i<=10; i=i+1){
		printf("%i x %i = %i\n",numero,i,i*numero);
    }
	return 0;
}