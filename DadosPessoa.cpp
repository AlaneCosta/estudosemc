#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	char nome[30];
	int idade, ano;
	float altura;
	
	printf("Digite o nome \n");
	scanf("%s", &nome);
	printf("Digite a idade \n");
	scanf("%d", &idade);
	printf("Digite a altura \n");
	scanf("%f", &altura);
	ano = 2023 - idade;
	
	printf("\n O nome é: %s", nome);
	printf("\n A altura é: %.2f", altura);
	printf("\n A idade é: %d", idade);
	printf("\n O ano de nascimento foi: %d", ano);
	return (0);
}


