#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int idade = 0;
	float peso = 0.0;
	
	printf("Digite uma idade:\n");
	scanf("%d", &idade);
	
	printf("Digite um peso:\n");
	scanf("%f", &peso);
	
	printf("Idade informada: %d.\n", idade);
	printf("Peso informado: %.1f.\n", peso);
	return 0;
}
