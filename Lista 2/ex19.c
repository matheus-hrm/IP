#include <stdio.h>

int verifica(int *vetor, int elementos){
  int i, j = 0;
  int vetunicos[elementos];
  for(i = 0; i < elementos; i++){
    if(vetor[i] != vetor[i+1]){
      vetunicos[j] = vetor[i];
      j++;
    }
  }
  for(i = 0; i < j; i++){
    printf("%d\n", vetunicos[i]);
  }
}

int main(void){

  int elementos;

  scanf("%d", &elementos);

  int vet[elementos], i;

  for(i = 0; i < elementos; i++){
    scanf("%d", &vet[i]);
  }

  verifica(vet, elementos);

  return 0;
}