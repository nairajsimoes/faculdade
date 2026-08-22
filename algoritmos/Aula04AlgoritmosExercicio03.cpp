#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	// quais são as variavéis?
	int N1, N2, R;
	
	// quais são as entradas de dados?
	printf("Digite um numero: ");
	scanf("%i",&N1);
	printf("Digite outro numero: ");
	scanf("%i",&N2);
	
	// quais são os processamentos dos dados?
	R = N1+N2;
	
	// quais são as saídas de dados?
	printf("R = %i\n",R);
	
	return 0;
	
}
