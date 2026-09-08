/* O aplicativo de um banco mostra a situação da conta pelo saldo:  positivo, negativo ou zerado. O programa deve ler o saldo e 
informar a situação. Desenvolva um programa em C para resolver esse problema. */
   
#include <stdio.h>
#include <stdlib.h>

int main(void){

    // quais sao as variaveis?
    float saldo;

    // quais sao as entradas de dados?
    printf("Digite o saldo da conta: ");
    scanf("%f", &saldo);

    // quais sao os processamentos e saida de dados?
    if (saldo > 0) {
        printf("Situacao: Saldo positivo.");
    } 
    else if (saldo < 0) {
        printf("Situacao: Saldo negativo.");
    } 
    else {
        printf("Situacao: Saldo zerado.");
    }

    return 0;
}