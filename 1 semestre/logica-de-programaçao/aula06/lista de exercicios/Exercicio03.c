/* Na faculdade, o aluno é aprovado quando a média das duas notas é 6,0 ou mais. O 
programa deve ler as duas notas, mostrar a média com duas casas decimais e informar 
se o aluno foi aprovado ou reprovado. Desenvolva um programa em C99 para resolver 
esse problema. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	// quais são as variaveis?
	float N1, N2, Media;
	
	//quais são as entradas de dados?
	printf("Digite o valor da N1: ");
	scanf("%f", &N1);
	
	printf("Digite o valor da N2: ");
	scanf("%f", &N2);
	
	// quais sao os processamentos e saida de dados?
	Media = (N1 + N2)/2;
	
	printf("Media: %.2f\n", Media);
	
	if(Media >= 6){
		printf("Aluno aprovado!");
	}
	else {
		printf("Aluno reprovado.");
	}
	
	return 0;
	
}