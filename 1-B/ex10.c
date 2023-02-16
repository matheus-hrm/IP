#include <stdio.h>

int main(void)
{
  double num1,num2,num3;

  scanf("%lf",&num1);
  scanf("%lf",&num2);
  scanf("%lf",&num3);    

  if (num1 < num2 && num2 < num3) {
    
    printf("%.2lf, %.2lf, %.2lf",num1,num2,num3);
  
  } else if (num1 < num3 && num3 < num2) {
  
    printf("%.2lf, %.2lf, %.2lf",num1,num3,num2);
  
  } else if (num2 < num3 && num3 < num1) {
  
    printf("%.2lf, %.2lf, %.2lf",num2,num3,num1);
  
  } else if (num2 < num1 && num1 < num3) {

    printf("%.2lf, %.2lf, %.2lf",num2,num1,num3);
  
  } else if (num3 < num1 && num1 < num2) {
  
    printf("%.2lf, %.2lf, %.2lf",num3,num1,num2);
  
  } else if (num3 < num2 && num2 < num1) {
  
    printf("%.2lf, %.2lf, %.2lf",num3,num2,num1);
  }
  return 0;
}