#include <stdio.h>
#include <stdlib.h>

int xi;
int *ptr_xi;
int y;

void imprimir() {
        printf("O valor de xi = %d \n", xi);
        printf("O endereço de &xi = %p \n", &xi);   
        printf("O endereço de ptr_xi = %p \n", ptr_xi);
        printf("O valor do ptr_xi = %d \n", *ptr_xi);   

}
int main() {
    xi = 55;
    ptr_xi = &xi;
    imprimir();

    xi = 520;
    imprimir();

    *ptr_xi = 20;
    imprimir();

    getchar();
    return 0;
}