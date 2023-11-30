#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define texto "Entrada e saída de dados."


int main() {
	setlocale(LC_ALL,"");
	
	int dado = 10;
	printf("Dado antes do incremento: %d.\n", dado);

	dado++;
	printf("Dado depois do incremento: %d.\n", dado);	
	
	dado--;
	printf("Dado depois do decremento: %d.\n", dado);	
	
	dado+= 3;
	printf("Dado depois do incremento em 3 unidades: %d.\n", dado);
	
	dado-= 2;
	printf("Dado depois do decremento em 2 unidades: %d.\n", dado);	
	
	dado *= 10;
	printf("Dado depois de multiplicar por 10: %d.\n", dado);	


	return 0;
}
