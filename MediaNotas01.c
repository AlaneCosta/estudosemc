#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	float n1, n2, n3, n4;
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a primeira nota: ");
	scanf("%f", &n2);	
	printf("Digite a primeira nota: ");
	scanf("%f", &n3);
	printf("Digite a primeira nota: ");
	scanf("%f", &n4);
	
	printf("A média das notas é : %.2f\n", (n1+n2+n3+n4)/4);
	
	return(0);

}
