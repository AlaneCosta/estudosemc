#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float dep, juros;
	
	printf("--------------------------- \n");
	printf("--------BEM-VINDO!--------- \n");
	printf("--------------------------- \n");	
	printf("Informe o valor do depósito: \n");
	scanf("%f", &dep);
	printf("Informe a taxa de juros: \n");
	scanf("%f", &juros);
	printf("O valor do rendimento será de: R$%.2f \n", dep*(juros/100));
	printf("O valor total será de: R$%.2f \n", dep+(dep*(juros/100)));	
return (0);
}
