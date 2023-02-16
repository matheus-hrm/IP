#include <stdio.h>

void selectionsort(int *vetor, int n){
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

void frequencia(int *vetor, int n, int *vezes){
  int i, j;
  for(i = 0; i < n; i++){
    for(j = i+1 ; j < n; j++){
      if(vetor[i] == vetor[j]){
        vezes[i]++;
      }
    }
  }
}

int main(void){


  int entradas, i, j, indice = 0, repeticoes = 0, maiorfreq;

  scanf("%d", &entradas);

  int vetor[entradas], vezes[1000] = {0};

  for( i = 0; i < entradas; i++){
    scanf("%d", &vetor[i]);
  }
  
  selectionsort(vetor, entradas);

  frequencia(vetor, entradas, vezes);

  for(i = 0; i< entradas; i++){
    if(vezes[i] > repeticoes){
      repeticoes = vezes[i];
      maiorfreq = vetor[i];
    }
    else if(vezes[i] == repeticoes){
      if(vetor[i] < maiorfreq){
        maiorfreq = vetor[i];
      }
    }
  }

  printf("%d\n", maiorfreq);
  printf("%d\n", repeticoes+1);

  return 0;
}