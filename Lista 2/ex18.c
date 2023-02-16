#include <stdio.h>

int verificacpf(int vetor[]){
  int i, j, somab1 = 0, somab2 = 0;
  
  for(i = 0; i < 9; i++){
    somab1 += vetor[i] * (i+1);
  }

  for(i = 9, j = 0; i > 0; i--, j++){
    somab2 += vetor[j] * i;
  }

  somab1 = (somab1 % 11);
  if(somab1 == 10) somab1 = 0;

  somab2 = (somab2 %11);
  if(somab2 == 10) somab2 = 0;

  if(somab1 == vetor[9] && somab2 == vetor[10]){
    printf("CPF valido\n");
  }else{
    printf("CPF invalido\n");
  }
}

int main(void){

  int testes;

  scanf("%d", &testes);

  while(testes != 0){
    int vet[10], i, j;

    for(i = 0; i < 11; i++){
      scanf("%d", &vet[i]);
    } 
    verificacpf(vet);
    
    testes--;
  }
  return 0;
}