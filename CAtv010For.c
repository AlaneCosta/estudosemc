#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int i = 10;
	
	for(i=1; i<=10; i++){
		printf("%d ", i);
	}	
				
	return 0;
}
