#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int *y;

    printf("Informe um número:\n");
    scanf("%d", &x);

    y = &x;
    *y = 12;

    y = y + 1;
    *y = *y + 5;

    printf("O valor de x é %d", x);
    return 0;
}