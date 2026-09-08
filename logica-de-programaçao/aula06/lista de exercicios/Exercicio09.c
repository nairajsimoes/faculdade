/* Uma calculadora simples lê dois números e o símbolo da operação (+, -, * ou /) e 
mostra o resultado com duas casas decimais. Para qualquer outro símbolo, deve avisar 
que a operação é inválida. Considere que, na divisão, o segundo número não será zero. 
Desenvolva um programa em C para resolver esse problema. */

#include <stdio.h>
#include <stdlib.h>

int main(void){

// quais sao as variaveis?
    float N1, N2, resultado;
    char simbolo_operacao;

    // quais sao as entradas de dados?
    printf("Digite o primeiro numero: ");
    scanf("%f", &N1);

    printf("Digite o segundo numero: ");
    scanf("%f", &N2);

    printf("Digite o simbolo da operacao matematica: ");
    scanf(" %c", &simbolo_operacao); 

    // quais sao os processamentos e saida de dados?
    
    if (simbolo_operacao == '+') {
        resultado = N1 + N2;
        printf("Resultado: %.2f", resultado);
    } 
    else if (simbolo_operacao == '-') {
        resultado = N1 - N2;
        printf("Resultado: %.2f", resultado);
    } 
    else if (simbolo_operacao == '*') {
        resultado = N1 * N2;
        printf("Resultado: %.2f", resultado);
    } 
    else if (simbolo_operacao == '/') {
        resultado = N1 / N2;
        printf("Resultado: %.2f", resultado);
    } 
    else {
        printf("Operacao invalida.");
    }

    return 0;
}