#include <stdio.h>

int main(void){

  int elementos, i, maior, menor;

  scanf("%d", &elementos);

  int vetor[elementos];

  for(i = 0; i < elementos; i++){
    scanf("%d", &vetor[i]);
  }

  for(i = 0; i < elementos; i++){
    if(i==0){
      maior = vetor[i];
      menor = vetor[i];
    }
    if(vetor[i] > maior) maior = vetor[i];
    if(vetor[i] < menor) menor = vetor[i];
  }

  for(i = 0; i < elementos; i++){
    if(i==elementos-1) printf("%d", vetor[i]);
    else printf("%d ", vetor[i]);
  }

  printf("\n");

  for(i = elementos - 1; i >= 0; i--){
    if(i==0) printf("%d", vetor[i]);
    else printf("%d ", vetor[i]);
  }

  printf("\n");
  
  printf("%d\n",maior);
  printf("%d\n",menor);
  
  return 0;
}