/* O centro de lançamento de um foguete precisa de uma contagem regressiva. O programa deve ler o número inicial da contagem 
e mostrar os valores até 0, terminando com a mensagem de lançamento. Desenvolva um programa em C para resolver esse problema. */

#include <stdio.h>

int main(){
	
	// quais sao as variaveis?
	int numero;
	
	// quais sao as entradas?
	printf("Digite o numero inicial da contagem: ");
	scanf("%i", &numero);
	
	// processamento e saída dos dados
	for (int i = numero; i >= 0; i--) 
	{
   	 printf("%d\n", i);
    }
    
    printf("Lancamento!\n");
      
    return 0;
}