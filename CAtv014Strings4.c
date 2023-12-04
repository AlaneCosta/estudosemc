#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {	
	setlocale(LC_ALL, "Portuguese");
	
	char s1[N] = {"Lógica de"};
	char s2[N] = {" Programação!"};
	
	printf("Antes do strcpy:\n");
	printf("str1: %s\n", s1);
	printf("str2: %s\n", s2);
	
	strcat(s1,s2);
	
	printf("Depois do strcat:\n");
	puts(s1);
	
	return(0);
}
