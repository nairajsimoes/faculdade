
/* Uma empresa de tecnologia está desenvolvendo um sistema inicial para análise financeira de cinco setores internos. 
O programa deverá ler o nome e o gasto de cada setor. Depois, deverá calcular e apresentar o total geral dos gastos, a média dos gastos e o percentual 
que cada setor representa em relação ao total geral. Desenvolva um programa em C para resolver esse problema. */

#include <stdio.h>
#include <stdlib.h>
 
int main(void){
	
	// quais são as variáveis
	float G1, G2, G3, G4, G5, T, M, P1, P2, P3, P4, P5;
	char N1[30], N2[30], N3[30], N4[30], N5[30];
 
	// quais são as entrada de dados;
	printf("Qual o nome do setor? ");
	scanf("%s", N1);
	
	printf("Qual o gasto desse setor? ");
	scanf("%f", &G1);
	
	printf("Qual o nome do setor? ");
	scanf("%s", N2);
	
	printf("Qual o gasto desse setor? ");
	scanf("%f", &G2);

	printf("Qual o nome do setor? ");
	scanf("%s", N3);
	
	printf("Qual o gasto desse setor? ");
	scanf("%f", &G3);
	
	printf("Qual o nome do setor? ");
	scanf("%s", N4);
	
	printf("Qual o gasto desse setor? ");
	scanf("%f", &G4);

	printf("Qual o nome do setor? ");
	scanf("%s", N5);
	
	printf("Qual o gasto desse setor? ");
	scanf("%f", &G5);
	
	// qual é o processamento dos dados?
	T = G1 + G2 + G3 + G4 +G5;
	M = T/5;
	P1 = (G1/T) * 100;
	P2 = (G2/T) * 100;
	P3 = (G3/T) * 100;
	P4 = (G4/T) * 100;
	P5 = (G5/T) * 100;
	
	// quais são as saidas de dados?
	printf("T = %f\n",T);
	printf("M = %f\n",M);
	printf("P1 = %f\n",P1);
	printf("P2 = %f\n",P2);
	printf("P3 = %f\n",P3);
	printf("P4 = %f\n",P4);
	printf("P5 = %f\n",P5);
	
	return 0;
	
}
