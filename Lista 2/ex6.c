#include <stdio.h>

int main(void){

  int tamanho, i , j, soma = 0;

  scanf("%d", &tamanho);

  int vetor[tamanho];

  for(i = 0; i < tamanho; i++){
    scanf("%d", &vetor[i]);
  }

  for( i = 0; i < tamanho; i++){
    soma+=vetor[i];
  }

  printf("%d", soma);

  return 0;
}