#include <stdio.h>
#include <stdlib.h>

/* 
A cantina da faculdade quer agilizar o caixa. O programa deve ler o preço de um lanche e a quantidade comprada, e mostrar o valor total a pagar com duas casas decimais. 
Desenvolva um programa em C para resolver esse problema. 
 */
 
int main(void){
	
	// quais são as variavéis?
	float Preco, Quantidade, Total;
	
	// quais são as entradas de dados?
	printf("Digite o preco do seu lanche: ");
	scanf("%f", &Preco);
	
	printf("Digite a quantidade que quer: ");
	scanf("%f", &Quantidade);
	
	// quais são os processamentos dos dados?
	Total = Preco * Quantidade;
	
	// quais são as saídas de dados?
	printf("Total = %f\n",Total);
	
	return 0;	
}
