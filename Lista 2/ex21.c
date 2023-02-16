#include <stdio.h>

void selectionsort(int vet[], int elementos){
  int i, j, aux;
  for(i = 0; i < elementos; i++){
    for(j = i+1; j < elementos; j++){
      if(vet[i] > vet[j]){
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
      }
    }
  }
}

int separaParesImpares(int vet[], int elementos){
  int i, j = 0, k = 0;
  int vetpares[elementos], vetimpares[elementos];
  for(i = 0; i < elementos; i++){
    if(vet[i] % 2 == 0){
      vetpares[j] = vet[i];
      j++;
    }else{
      vetimpares[k] = vet[i];
      k++;
    }
  }
  
  selectionsort(vetpares, j);
  selectionsort(vetimpares, k);

  for(i = 0; i < j; i++){
    printf("%u\n", vetpares[i]);
  }
  for(i = k-1; i >= 0; i--){
    printf("%u\n", vetimpares[i]);
  }

}


int main(void){

  int testes;

  scanf("%d", &testes);

  unsigned int vet[testes], i;

  for(i = 0; i < testes; i++){
    scanf("%u", &vet[i]);
  }

  separaParesImpares(vet, testes);

  return 0;
}