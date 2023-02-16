#include <stdio.h>

int main(void){

  int num1, num2, num3;
  int divisor = 2, mmc = 1, i;

  scanf("%d %d %d", &num1, &num2, &num3);
  
  while (num1 != 1 || num2 != 1 || num3 != 1){
    
    for(i=divisor;num1 % divisor == 0 || num2 % divisor == 0 || num3 % divisor == 0; i++){
      printf("%d %d %d :%d\n", num1, num2, num3,divisor);
      if (num1 % divisor == 0){
        num1 /= divisor;
      }
      if (num2 % divisor == 0){
        num2 /= divisor;
      }
      if (num3 % divisor == 0){
        num3 /= divisor;
      }
      mmc *= divisor;
      if(num1 == 1 && num2 == 1 && num3 == 1){
        break;
      }
    }
    if(divisor == 2) divisor++;
    else divisor += 2;
  }
  printf("MMC: %d\n",mmc);
  
  return 0;
}