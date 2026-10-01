/* No caixa do mercado, o operador registra o preço de cada produto e digita 0 para fechar a compra. O programa deve ler preços até receber 0 e mostrar o total da compra
com duas casas decimais. Desenvolva um programa em C para resolver esse problema.*/

#include <stdio.h>

int main(){
	
    // quais são as variáveis?
    float produto, total=0; i=1;
 
    // processamento dos dados e entrada
	do{
		printf("Digite o valor do produto %i: ",i);
		scanf("%f",&produto);
		if(produto>=0){
			total+=produto;
			i++;
		}else{
			printf("Erro! nao pode ter produto negativo\n");
		}
	}while(produto!=0);
	
	// saída
	printf("O valor total e %.2f\n",total);
	
	return 0;
}