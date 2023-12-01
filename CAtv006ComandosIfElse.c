#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	float m;
	
	printf("Insira a nota:\n");
	scanf("%f", &m);

	if(m >= 7.0){
		printf("Passou direto!\n");
	} else {
		printf("Reprovado!\n");		
	}
	
	return 0;
}
