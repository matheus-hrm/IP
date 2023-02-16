#include <stdio.h>

int selectionsort(int *vetor, int n){
  int i, menor, indicemenor, j, aux;
  for(i = 0; i < n-1; i++){
    menor = vetor[i];
    indicemenor = i;
    for(j = i+1; j < n; j++){
      if(vetor[j] < menor){
        menor = vetor[j];
        indicemenor = j;
      }
    }
    aux = vetor[i];
    vetor[i] = vetor[indicemenor];
    vetor[indicemenor] = aux;
  }
}

int main(void){

  int entradas;

  scanf("%d", &entradas);

  int vetor[entradas], i;

  for(i = 0; i < entradas; i++){
    scanf("%d", &vetor[i]);
  }
  
  selectionsort(vetor, entradas);

  for(i = 0; i < entradas; i++){
    printf("%d\n", vetor[i]);
  }
}