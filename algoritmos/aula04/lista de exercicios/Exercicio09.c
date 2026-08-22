#include <stdio.h>
#include <stdlib.h>

/* 
 Uma professora registra duas notas de prova por aluno. O programa deve ler as duas notas e mostrar a soma e a média, com duas casas decimais. 
 Desenvolva um programa em C para resolver esse problema. 

 */
 
int main(void){
	
	// quais são as variavéis?
	float N1, N2, Soma, Media;
	
	// quais são as entradas de dados?
	printf("Digite a nota 1: ");
	scanf("%f", &N1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &N2);
	
	// quais são os processamentos dos dados?
	Soma = N1 + N2;
	Media = Soma / 2;
	
	// quais são as saídas de dados?
	printf("Soma = %f\n", Soma);
	printf("Media = %f\n", Media);
	
	return 0;	
}
