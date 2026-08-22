#include <stdio.h>
#include <stdlib.h>

/* 
Uma estação meteorológica registra a temperatura em graus Celsius, 
mas o relatório internacional pede o valor em Fahrenheit. O programa deve ler a 
temperatura em Celsius e mostrar a convertida, usando a fórmula 
F = C * 9 / 5 + 32.  Desenvolva um programa em C para resolver esse problema. 
 */

int main(void){
	
	// quais são as variavéis?
	float F, C;
	
	// quais são as entradas de dados?
	printf("Digite a temperatura ");
	scanf("%i",&C);
	
	// quais são os processamentos dos dados?
	F = C*9/5+32; 
	
	// quais são as saídas de dados?
	printf("F = %i\n",F);
	
	return 0;
	
}
