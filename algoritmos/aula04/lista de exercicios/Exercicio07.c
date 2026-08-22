#include <stdio.h>
#include <stdlib.h>

/* 
 Um grupo de amigos jantou num restaurante e vai dividir a conta em partes iguais. O programa deve ler o valor total da conta e o número de pessoas, 
 e mostrar quanto cada um deve pagar, com duas casas decimais. Desenvolva um programa em C para resolver esse problema. 
 */
 
int main(void){
	
	// quais são as variavéis?
	float Conta, Total;
	int pessoas;
	
	// quais são as entradas de dados?
	printf("Digite o total da conta: ");
	scanf("%f", &Conta);
	
	printf("Digite a quantidade de pessoas: ");
	scanf("%i", &Pessoas);
	
	// quais são os processamentos dos dados?
	Total = Conta / Pessoas;
	
	// quais são as saídas de dados?
	printf("Total = %f\n",Total);
	
	return 0;	
}
