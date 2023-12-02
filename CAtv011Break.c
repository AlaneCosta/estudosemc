#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int i;
	
	for(i=1; i<=10; i++){
		printf("%d ", i);
		
		if(i == 5){
			break;
		}
	}	
				
	return 0;
}
