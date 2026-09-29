#include <stdio.h>
#include <stdlib.h>

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
