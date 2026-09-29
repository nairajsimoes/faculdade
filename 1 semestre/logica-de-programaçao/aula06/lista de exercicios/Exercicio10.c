/* ) Uma loja de camisetas trabalha com três tamanhos: P por R$ 39,90, M por R$ 44,90 
e G por R$ 49,90. O programa deve ler a letra do tamanho e mostrar o preço; para 
qualquer outra letra, deve avisar que o tamanho não existe. Considere que a letra será 
digitada em maiúscula. Desenvolva um programa em C99 para resolver esse problema */

#include <stdio.h>
#include <stdlib.h>

#define PRECOP 39.90
#define PRECOM 44.90
#define PRECOG 49.90

int main(void){

    // quais sao as variaveis?
    char TAMANHO;

    //quais sao as entradas de dados?
    printf("Qual o tamanho da camiseta? ");
    scanf(" %s", &TAMANHO);

    // quais sao os processamentos e saida de dados?
    if (TAMANHO == 'P') {
        printf("Preco: R$ %.2f", PRECOP);
    } 
    else if (TAMANHO == 'M') {
        printf("Preco: R$ %.2f", PRECOM);
    } 
    else if (TAMANHO == 'G') {
        printf("Preco: R$ %.2f", PRECOG);
    } 
    else {
        printf("Tamanho nao existe.\n");
    }

    return 0;
}