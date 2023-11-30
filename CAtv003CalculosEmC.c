#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define texto "Entrada e saída de dados."


int main() {
	setlocale(LC_ALL,"");
	int A, B, soma, subt, mult, divis;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &A);
	
	printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	soma = A + B;
	subt = A - B;
	mult = A * B;
	divis = A / B;

	
	printf("\nResultados:\n");
	printf("Soma: %d \n", soma);
	printf("subtração: %d \n", subt);	
	printf("multiplicação: %d \n", mult);
	printf("Divisão: %d \n", divis);
	return 0;
}
