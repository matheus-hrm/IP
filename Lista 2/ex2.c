#include <stdio.h>

int main(void){

  int tamanho, i, j, comparador, contador = 0;

  do{
    scanf("%d", &tamanho);
  } while (tamanho > 1000 || tamanho < 1);
  
  int vetor[tamanho];

  for (i = 0; i < tamanho; i++){
    scanf("%d", &vetor[i]);
  } 

  scanf("%d", &comparador);

  for (j = 0; j < tamanho; j++){
    if (vetor[j] >= comparador){
      contador++;
    }
  }

  printf("%d", contador);
  return 0;
}