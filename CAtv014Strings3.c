#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {	
	setlocale(LC_ALL, "Portuguese");
	
	char origem[N] = {"Olá, mundo!"};
	char destino[N];
	
	printf("Antes do strcpy:\n");
	puts(origem);
	puts(destino);
	
	strcpy(destino,origem);
	
	printf("Depois do strcpy:\n");
	puts(origem);
	puts(destino);
	
	return(0);
}
