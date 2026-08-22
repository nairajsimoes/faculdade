#include <stdio.h>
#include <stdlib.h>

/*  O almoxarifado de uma fábrica recebe mercadoria em caixas fechadas. O programa deve ler quantas caixas chegaram e quantas unidades vêm em cada caixa, 
e mostrar o total de unidades recebidas. Desenvolva um programa em C para resolver esse problema. */

int main(void){
	
		// quais são as variavéis?
	int Caixas, Unidades, Total;
	
	// quais são as entradas de dados?
	printf("Digite quantas caixas chegaram: ");
	scanf("%i", &Caixas);
	
	printf("Digite quantas unidades tem cada caixa: ");
	scanf("%i", &Unidades);
	
	// quais são os processamentos dos dados?
	Total = Caixas * Unidades;
	
	// quais são as saídas de dados?
	printf("Total = %i\n",Total);
	
	return 0;	
	
	
	
	
}
