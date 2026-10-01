/* O controle de qualidade de uma fábrica testa 10 peças por lote, registrando o peso de cada uma. 
O programa deve ler os 10 pesos e contar quantas peças ficaram dentro do padrão (entre 95,0 e 105,0 gramas) e quantas ficaram fora. 
Desenvolva um programa em C para resolver esse problema. */

#include <stdio.h>

int main()
{
    // variaveis
    int dentro, fora;
    float peso;

    // processamento e entrada de dados
    for (int i = 1; i <= 10; i++)
    {
        printf("Digite o peso da peca %i: ", i);
        scanf("%f", &peso);
        
        // não consegui terminar o exercício.