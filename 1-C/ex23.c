#include <stdio.h>

int main(void){

  int n, i = 2, soma = 1; // numero perfeito

  scanf("%d", &n);

  printf("%d = 1", n);
    
  do{
    if(n%i==0){
      printf(" + %d", i);
      soma = soma + i;
    }
    i++;
    }while(i<n);
  
    if(soma == n){
      printf(" = %d (NUMERO PERFEITO)\n", soma);
    } else 
      printf(" = %d (NUMERO NAO E PERFEITO)\n", soma);

  return 0;
}