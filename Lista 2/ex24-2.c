#include <stdio.h>

int countingSort(int vet[], int n){
  int i, maior = 0;
  for(i = 0; i < n; i++){
    if(vet[i] > maior){
      maior = vet[i];
    }
  }
  int vCount[maior+1], vOrd[n-1];
  
  for(i = 0; i <= maior+1; i++){
    vCount[i] = 0;
  }
  for(i = 0; i < n; i++){
    vCount[vet[i]]++;
  }
  for(i = 1; i <= maior; i++){
    vCount[i]+= vCount[i-1];
  }
  for(i = n-1; i >= 0; i--){
    vOrd[vCount[vet[i]]-1] = vet[i];
    vCount[vet[i]]--;
  }
  for(i = 0; i < n; i++){
    vet[i] = vOrd[i];
  }
  for(i = 0; i < n; i++){
    if (i == n-1) printf("%d\n", vet[i]);
    else printf("%d ", vet[i]);
  }
}

int main(void) {
  
  int entradas, i;

  do{
    scanf("%d", &entradas); 

    int vetor[entradas];    

    for(i = 0; i < entradas; i++) {
      scanf("%d", &vetor[i]);
    }
    countingSort(vetor, entradas);
  
  }while(entradas != 0);

  return 0;
}