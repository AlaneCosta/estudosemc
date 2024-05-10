#define tamanho 5
 
struct tfila {
            int dados[tamanho];
            int ini;
            int fim;
};
 
struct tfila fila;
 
void remove() {
            int i;
            for (i = 0; i < tamanho; i++) {
                        fila.dados[i] = fila.dados[i+1];
            }
            fila.dados[fila.fim] = 0;
            fila.fim--;
}