/* ) Uma loja de camisetas trabalha com três tamanhos: P por R$ 39,90, M por R$ 44,90 
e G por R$ 49,90. O programa deve ler a letra do tamanho e mostrar o preço; para 
qualquer outra letra, deve avisar que o tamanho não existe. Considere que a letra será 
digitada em maiúscula. Desenvolva um programa em C99 para resolver esse problema */

#include <stdio.h>
#include <stdlib.h>

#define PRECO_P 39.90
#define PRECO_M 44.90
#define PRECO_G 49.90

int main(void){

    // quais sao as variaveis?
    char TAM;

    //quais sao as entradas de dados?
    printf("Qual o tamanho da camiseta? ");
    scanf(" %s", &TAM);

    // quais sao os processamentos e saida de dados?
    if (TAM == 'P') {
        printf("Preco: R$ %.2f", PRECO_P);
    } 
    else if (TAM == 'M') {
        printf("Preco: R$ %.2f", PRECO_M);
    } 
    else if (TAM == 'G') {
        printf("Preco: R$ %.2f", PRECO_G);
    } 
    else {
        printf("Tamanho nao existe.\n");
    }

    return 0;
}