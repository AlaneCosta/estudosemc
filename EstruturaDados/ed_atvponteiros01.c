#include <stdio.h>
#include <stdlib.h>

int xi;
int *ptr_xi;

void imprimir() {
        printf("O valor de xi = %d \n", xi);
        printf("O valor de &xi = %p \n", &xi);   
        printf("O valor de ptr_xi = %p \n", ptr_xi);
        printf("O valor de ptr_xi = %d \n", *ptr_xi);   
}
int main() {
    xi = 10;
    ptr_xi = &xi;
    imprimir();

    system("Pause");
    return(0);
}