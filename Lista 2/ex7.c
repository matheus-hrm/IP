#include <stdio.h>

int maior_elemento(int vetor[], int tamanho){
  int i, maior = vetor[0];
  for(i = 0; i < tamanho; i++){
    if(vetor[i] > maior){
      maior = vetor[i];
    }
  }
  return maior;
}

int main(void){

  int tamanho, i, j,maior = 0, freq = 0;

  while(tamanho != 0){
    scanf("%d", &tamanho);
    if(tamanho == 0)  break;

    int vetor[tamanho];

    for(i = 0; i < tamanho; i++){
      scanf("%d", &vetor[i]);
    }
  
    maior = maior_elemento(vetor, tamanho);

    for(i=0;i<maior+1;i++){
      freq = 0;
      for(j=0;j<tamanho;j++){
        if ((vetor[j]) <= i){
          freq++;
        }
      }
      printf("(%d) %d\n",i, freq);
    }
  }
  return 0;
}
