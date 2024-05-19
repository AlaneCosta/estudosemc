#include <stdio.h>
#include <stdio.h>

int main() {
  int *p;
  int *vetor;
  p = (int *) malloc (sizeof(int));
  vetor = (int *) malloc (sizeof(int)*10);

  if (p == NULL){
    printf("Erro!\n");
  }          
  else {
    *p = 10;
    printf("p: %d\n", *p);
    free(p);
  }  

  if (vetor == NULL){
    printf("Erro!\n");
  }          
  else {
    *vetor = 60;
    printf("p: %d\n", *vetor);
    free(vetor);  
  }
}          