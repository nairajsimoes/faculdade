/* No caixa do mercado, o operador registra o preço de cada produto e digita 0 para fechar a compra. O programa deve ler preços até receber 0 e mostrar o total da compra
com duas casas decimais. Desenvolva um programa em C para resolver esse problema.*/

#include <stdio.h>

int main(){
	
    // quais são as variáveis?
    float valor, total = 0;

    // quais são as entradas de dados?
    printf("Digite o valor do produto (Ou digite 0 para finalizar): ");
    scanf("%f", &valor);

    // processamento dos dados e entrada
    while (valor != 0) {
        total = total + valor;

        printf("Digite o valor do produto (Ou digite 0 para finalizar): ");
        scanf("%f", &valor);
    }

    // saídas de dados
    printf("Total da compra: R$ %.2f\n", total);

    return 0;
}