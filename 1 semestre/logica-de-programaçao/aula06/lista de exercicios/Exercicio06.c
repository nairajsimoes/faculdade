/* Um clube organiza a natação por faixa de idade: até 12 anos é a turma infantil; de 13 
a 17, a juvenil; de 18 a 59, a adulta; e com 60 anos ou mais, a master. O programa deve 
ler a idade do nadador e informar a turma. Desenvolva um programa em C99 para resolver esse problema. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	// quais sao as variaveis?
	int idade;
	
	//quais sao as entradas de dados?
	printf("Qual a idade do nadador? ");
	scanf("%i", &idade);
	
	// quais sao os processamentos e saida de dados?
	if (idade <=12){
		printf("Turma infantil.");
	}
	else if (idade>=13 && idade<=17){
		printf("Turma juvenil.");
	}
	else if(idade>=18 && idade<60){
		printf("Turma adulta.");
	}
	else {
		printf("Turma master.");
	}
	
	return 0;
}