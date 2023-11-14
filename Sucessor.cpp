#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int numero, numant, numsuc;
	
	printf("Digite um número inteiro:");
	scanf("%d", &numero);
	numant = numero - 1;
	numsuc = numero + 1;
	printf("O antecessor do número informado é: %d\n", numero);
	printf("O antecessor do número informado é: %d\n", numant);
	printf("O sucessor do número informado é: %d\n", numsuc);
	return (0);
}
