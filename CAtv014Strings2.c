#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char s[10];
	
	printf("Digite algo (leitura pelo gets):\n");
	gets(s);
	fflush(stdin);
	
	puts("Resultado");
	puts(s);
	puts("");
	
	printf("Digite algo (leitura pelo fgets):\n");
	fgets(s, 10, stdin);
	fflush(stdin);
	
	puts("Resultado");
	puts(s);
	puts("");
	
	return(0);
}
