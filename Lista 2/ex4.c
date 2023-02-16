#include <stdio.h>

int main(void){

  int tamanho, i;

  scanf("%d", &tamanho);

  int vetor[tamanho];

  for(i = 0; i < tamanho; i++){
    scanf("%d", &vetor[i]);
  }

  for(i = 0 ; i < tamanho ; i++){
    printf("%d ", vetor[i]);
  }

  return 0;
}