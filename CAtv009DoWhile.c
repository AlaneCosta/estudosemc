#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int i = 10;
	
	do {	
		printf("%d\n", i);
		i++;
	}
	while(i >= 10 && i <= 50); 
					
	return 0;
}
