#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int i;
	
	for(i=1; i<=10; i++){

		if(i == 5){
			continue;
		}
		printf("%d ", i);
	}	
				
	return 0;
}
