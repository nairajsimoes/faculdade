/* Uma lanchonete quer um caixa que atenda vários clientes sem fechar o programa. O menu tem tres opções:
1 mostra o cardapio, 2 mostra o horario de funcionamento e 0 encerra. O programa deve repetir o menu após cada
operação e só encerrar quando a opção for 0; opção inválida mostra aviso e volta ao menu. Desenvolva um programa em C para resolver esse problema. */

#include <stdio.h>

int main(){
	
	// variaveis
	int opcao; 
	
	// entrada
	//processament e saida
	do {
		printf("1 - cardapio\n");
		printf("2 - horario\n");
		printf("0 - encerra\n");
		printf("Digite uma opção: ");
		scanf("%i", &opcao);
		}
		
		switch(opcao){
            case 1: 
                printf("cardapio\n");
                break;
            case 2:
                printf("hotario\n");
                break;
            case 0:
                break;
            default:
                printf("Erro opcao invalida\n");
        }
    }while(opcao!=0);

 

    return 0;
}