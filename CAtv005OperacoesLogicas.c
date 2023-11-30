#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	float m;
	
	printf("Insira a nota:\n");
	scanf("%f", &m);

	if(m < 4.0 ){
		printf("Reprovado!\n");
	}	
	
	if(m >= 4.0 && m < 7.0){
		printf("Tem direito a exame!\n");
	}
	
	if(m >= 7.0){
		printf("Passou direto\n");
	}

	return 0;
}
