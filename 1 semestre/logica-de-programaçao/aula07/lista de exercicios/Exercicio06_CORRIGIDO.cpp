/* O controle de qualidade de uma fábrica testa 10 peças por lote, registrando o peso de cada uma. 
O programa deve ler os 10 pesos e contar quantas peças ficaram dentro do padrão (entre 95,0 e 105,0 gramas) e quantas ficaram fora. 
Desenvolva um programa em C para resolver esse problema. */

#include <stdio.h>

int main()
{
    // variaveis
    float peso;
    int fora=0; padrao=0;
  
	// entrada e processamento 
	for(int i=1;i<=10;i++){
		printf("Digite peso da %i peca: ",i);
		scanf("%f",&peso);
		if(peso>=95 && peso<=105){
			padrao++;
		}else{
			fora++;
		}
	}
	
	// saída
	printf("A quantidade de pecas padrao e %i\n",padrao);
	printf("A quantidade de pecas fora do padrao e %i\n",fora);
	
	return 0;
}
