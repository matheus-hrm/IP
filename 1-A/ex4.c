#include <stdio.h>

int main(){
  
  double delta, a, b, c, x1, x2;

  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);
  
  delta = (b * b) - (4 * a * c);
  x1 = (-b + sqrt(delta)) / (2 * a);
  x2 = (-b - sqrt(delta)) / (2 * a);
  
  printf("O VALOR DE DELTA E = %.2lf\n", delta);
  
  return 0;
}