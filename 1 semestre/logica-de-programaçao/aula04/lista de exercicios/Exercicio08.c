#include <stdio.h>
#include <stdlib.h>

/* 
 O RH de uma empresa calcula o salário mensal dos estagiários pelo valor da hora trabalhada. O programa deve ler o valor da hora e a quantidade de horas trabalhadas no mês, 
 e mostrar o salário do mês com duas casas decimais. Desenvolva um programa em C para resolver esse problema. 
 */
 
int main(void){
	
	// quais são as variavéis?
	float Valor, Quantidade, Total;
	
	// quais são as entradas de dados?
	printf("Digite o valor da hora trabalhada: ");
	scanf("%f", &Valor);
	
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%f", &Quantidade);
	
	// quais são os processamentos dos dados?
	Total = Valor * Quantidade;
	
	// quais são as saídas de dados?
	printf("Total = %f\n", Total);
	
	return 0;	
}
