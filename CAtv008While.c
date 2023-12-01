#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int i = 1;
	
	while(i <= 10) {
		printf("%d\n", i);
		i++;
	}
					
	return 0;
}
