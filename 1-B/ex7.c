#include <stdio.h>

int main(void){

  int numerox, numeroy;

  scanf("%d", &numerox);

  if (numerox < 1){
    numeroy = numerox;
    printf("Y = %d\n",numeroy);  
  } if (numerox > 1){
    numeroy = (numerox * numerox);
    printf("Y = %d\n",numeroy);
  }else if (numerox == 1) {
    printf("Y = 0\n");
  }
    
  return 0;
}