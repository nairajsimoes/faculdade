/* A coordenação quer a média de uma turma. O programa deve ler quantos alunos fizeram a prova e, depois, a nota de cada um; 
ao final, mostra a média da turma com duas casas decimais. Considere pelo menos um aluno. 
Desenvolva um programa em C para resolver esse problema. */

#include <stdio.h>

int main(){
	
    // quais são as variaveis?
    int alunos; float nota, soma, media;

    // entrada de dados
    printf("Quantos alunos fizeram a prova? ");
    scanf("%i", &alunos);

    // processamento e entrada de dados
    for (int i = 1; i <= alunos; i++)
    {
        printf("Digite a nota do aluno %i: ", i);
        scanf("%f", &nota);
    }
    
    soma = soma + nota;

    media = soma / alunos;

    // saída de dados
    printf("Media da turma: %.2f\n", media);

    return 0;
}