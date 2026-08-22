#include <stdio.h>
#include <stdlib.h>

/* 
 O sistema de uma operadora registra a duração das ligações em minutos. O programa deve ler o total de minutos de uma ligação e mostrar essa duração em horas e minutos. 
 Exemplo: 130 minutos viram 2 horas e 10 minutos. Dica: pense na divisão inteira e no resto da divisão. 
 Desenvolva um programa em C para resolver esse problema.
 */
 
int main(void){
	
	// quais são as variavéis?
	int Minutos, Minutos_Restantes, Horas, Total;
	
	// quais são as entradas de dados?
	printf("Digite o total de minutos registrados: ");
	scanf("%i", &Minutos);
	
	// quais são os processamentos dos dados?
	Horas = Minutos/60; 
	Minutos_Restantes = Minutos % 60; 
	Total = Horas + Minutos_Restantes;
	
	// quais são as saídas de dados?
	printf("%i horas e %i minutos\n", Horas, Minutos_Restantes);
	
	return 0;	
}
