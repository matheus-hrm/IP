#include <stdio.h>

int main(){
  //O PRIMEIRO NUMERO NAO E PAR
  int num1, num2;
  int i = 0;
  int soma = 0;

  scanf("%d %d",&num1,&num2);
  soma = num1;
  
  if ((num1%2) != 0 && (num1 != 0)){
    printf("O PRIMEIRO NUMERO NAO E PAR");
    return 0;
  } else {
   for(i=0; i<=num2-1; i++){
      printf("%d ",soma);
      soma = soma + 2;
   }   
  }
  return 0;
}