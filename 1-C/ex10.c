#include <stdio.h>

int main(void){
  double num, k, inicio, incremento, temp, temp1, temp2, temp3;
  int i;

  scanf("%lf", &num);
  scanf("%lf", &inicio);
  scanf("%lf", &k);
  scanf("%lf", &incremento);

  if(num > 0 && num < 9){
    temp = inicio;
    temp1 = inicio;
    temp2 = inicio;
    temp3 = inicio;
    printf("Tabuada de soma:\n");
      for(i = 0; i < k; i++, temp += incremento){
        printf("%.2lf + %.2lf = %.2lf\n", num, temp,num + temp);
      }
    printf("Tabuada de subtracao:\n");
      for(i = 0; i < k; i++, temp1 += incremento){
        printf("%.2lf - %.2lf = %.2lf\n", num, temp1,num - temp1);
      }
    printf("Tabuada de multiplicacao:\n");
      for(i = 0; i < k; i++, temp2 += incremento){
        printf("%.2lf x %.2lf = %.2lf\n",num, temp2,num * temp2);
      }  
    printf("Tabuada de divisao:\n");
      for(i = 0; i < k; i++, temp3 += incremento){
        printf("%.2lf / %.2lf = %.2lf\n",num, temp3, num / temp3);
      }
  } 
  return 0;
}