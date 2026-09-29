/* Uma loja de materiais de construcao da desconto conforme o valor da compra: 
   10% para compras de R$ 500,00 ou mais, 5% para compras de R$ 200,00 ou mais, 
   e sem desconto abaixo disso. O programa deve ler o valor da compra e mostrar 
   o desconto aplicado e o valor final, com duas casas decimais. Desenvolva um 
   programa em C99 para resolver esse problema. */

#include <stdio.h>
#include <stdlib.h>

int main(void){

    // quais sao as variaveis?
    float compra, desconto, valorfinal;

    // quais sao as entradas de dados?
    printf("Digite o valor da compra: R$ ");
    scanf("%f", &compra);

    // quais sao os processamentos e saída de dados?
    if (compra >= 500.00) {
        desconto = compra * 0.10;
    } 
    else if (compra >= 200.00) {
        desconto = compra * 0.05;
    } 
    else {
        desconto = 0.00;
    }

    valorfinal = compra - desconto;

    printf("Desconto aplicado: R$ %.2f\n", desconto);
    printf("Valor final a pagar: R$ %.2f\n", valorfinal);

    return 0;
}