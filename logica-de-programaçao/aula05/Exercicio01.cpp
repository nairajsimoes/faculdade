
/* Uma indústria automobilística precisa calcular o valor final de venda de um automóvel. O programa deverá ler o custo de fábrica do veículo, 
calcular o valor do distribuidor, correspondente a 28% do custo de fábrica, e o valor dos impostos, correspondente a 45% do custo de fábrica. 
Ao final, deverá apresentar o custo de fábrica, o valor do distribuidor, o valor dos impostos e o valor final do automóvel. 
Desenvolva um programa em C para resolver esse problema. */

#include <stdio.h>
#include <stdlib.h>
 
int main(void){
	
	// quais são as variáveis
	float C, D, I, VF;
 
	// quais são as entrada de dados;
	printf("Qual o valor do custo de fabrica? ");
	scanf("%f", &C);
	
	// qual é o processamento dos dados?
	D =  0.28 * C;
	I = 0.45 * C;
	VF = C + D + I;
	
	// quais são as saidas de dados?
	printf("C = %f\n",C);
	printf("I = %f\n",I);
	printf("D = %f\n",D);
	printf("VF = %f\n",VF);
	
	return 0;
	
}
