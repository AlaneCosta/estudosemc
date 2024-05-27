#include <stdlib.h>
#include <stdio.h>

#define tamanho 4

struct tipo_pilha{
    int dados[tamanho];
    int ini;
    int topo;
};

struct tipo_pilha pilha;

//empilha os elementos
int empilha(int elemento){
    if(pilha.topo == tamanho){
        printf("fila cheia.\n");
        getchar();
    } 
    else {
        pilha.dados[pilha.topo] = elemento;
        pilha.topo++;
    }
}
//desempilha os elementos
int desempilha(){
    int elemento;
    if(pilha.topo == pilha.ini){
        printf("Fila vazia.\n");
        getchar(); //system("pause") no windows
        return -1;
    }
    else {
        elemento = pilha.dados[pilha.topo];
        pilha.topo--;
        return pilha.dados[pilha.topo];
    }
}

// Imprime todos os elementos da pilha
void imprime_pilha() {
    if(pilha.topo == pilha.ini) {
        printf("Pilha vazia.\n");
    } else {
        printf("Elementos na pilha:\n");
        for(int i = 0; i < pilha.topo; i++) {
            printf("%d\n", pilha.dados[i]);
        }
    }
}

int main(){
    
    imprime_pilha();

    empilha(8);
    empilha(10);
    empilha(12);
    empilha(14);

    printf("--------------------\n");
    imprime_pilha();
    printf("--------------------\n");
    printf("Elemento desempilhado: %d\n", desempilha());    
    printf("Elemento desempilhado: %d\n", desempilha());
    printf("Elemento desempilhado: %d\n", desempilha());
    printf("Elemento desempilhado: %d\n", desempilha()); 
}