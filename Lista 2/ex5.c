#include <stdio.h>

int main(){

  int tamanho, i, j = 0;
  int guarda_indice[100] , guarda_valor[100] = {0} , contador = 0;
  
  while(tamanho!=0){
    scanf("%d", &tamanho);
      
    if(tamanho == 0) break;
    
    int vetor[tamanho];

    for(i = 0; i < tamanho; i++){
      scanf("%d", &vetor[i]);
    }
    for(i = 0; i < tamanho; i++){
      if(guarda_valor[j] < vetor[i]){
        guarda_valor[j] = vetor[i];
        guarda_indice[j] = i;
      }
    }
    j++;
    contador++;
  } 

  for(j = 0; j < contador; j++){
    printf("%d %d\n",guarda_indice[j], guarda_valor[j]);
  }
  return 0;
}