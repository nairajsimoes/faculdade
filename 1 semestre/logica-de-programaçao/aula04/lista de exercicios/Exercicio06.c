#include <stdio.h>
#include <stdlib.h>

/* 
 Um motorista quer saber o consumo do carro na viagem. O programa deve ler a distância percorrida em km e a quantidade de litros abastecidos, 
 e mostrar quantos km o carro fez por litro, com duas casas decimais. Desenvolva um programa em C para resolver esse problema. 
 */
 
int main(void){
	
	// quais são as variavéis?
	float Distancia, Litros, Total;
	
	// quais são as entradas de dados?
	printf("Digite a distancia percorrida: ");
	scanf("%f", &Distancia);
	
	printf("Digite quantos litros abastecidos: ");
	scanf("%f", &Litros);
	
	// quais são os processamentos dos dados?
	Total = Distancia / Litros;
	
	// quais são as saídas de dados?
	printf("Total = %f\n", Total);
	
	return 0;	
}
