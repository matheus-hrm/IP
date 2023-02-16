#include <stdio.h>

void selectionsort(int vetor[], int size){
  int i, j, menor, aux;
  menor = vetor[0];
  for(i=0; i < size-1 ; i++){
    menor = i;
    for(j = i+1; j < size; j++){
      if(vetor[j] < vetor[menor])
        menor = j;
      
      if(menor != i){
        aux = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = aux;
      }
    }
  }
}

int menordistancia(int vetor[], int size){
  //dois elementos mais próximos

  int i, j, aux, steps = 0;
  unsigned int  menor = 10000000 ;
  for(i=0; i < size; i++){
    for(j = i+1; j < size; j++){
      steps++;
      if((vetor[j] - vetor[i]) < menor){
        menor = vetor[j] - vetor[i];
        
      }
    }
  }
  printf("%d %d", menor, steps);
}

int main(void){

  int entradas;

  scanf("%d", &entradas);
  
  if(entradas < 1 || entradas > 10) return 0;

  while (entradas != 0){

    int size , i , j;
    
    scanf("%d", &size);
    
    if(size < 2 || size > 1001) break;
    
    int vetor[size];

    for(i = 0; i < size; i++){
      scanf("%d", &vetor[i]);
    }

    selectionsort(vetor, size); 

    menordistancia(vetor,size);
    printf("\n");
    entradas--;
  }

  return 0;
}