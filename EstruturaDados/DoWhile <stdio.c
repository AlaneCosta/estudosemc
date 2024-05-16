#include <stdio.h>
#include <stdlib.h>

void solicitarNumero() {
    printf("Por favor, digite o número 25\n");
}

void mensagemErro() {
    printf("Número informado diferente de 25\n");
}

int main() {
    int x;
    int *y;

    do {
        solicitarNumero();
        scanf("%d", &x);

        if (x != 25) {
            mensagemErro();
        }
    } while (x != 25);

    y = &x;
    *y = 12;

    y = y + 1;
    *y = *y + 5;

    printf("O valor de x é %d\n", x);
    return 0;
}