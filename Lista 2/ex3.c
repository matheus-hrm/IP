#include <stdio.h>

int main(void){

  int tamanho, i;

  scanf("%d", &tamanho);

  int vetor[tamanho];

  for(i = 0; i < tamanho; i++){
    scanf("%d", &vetor[i]);
  }

  for(i = tamanho-1 ; i >= 0; i--){
    printf("%d ", vetor[i]);
  }


  return 0;
}