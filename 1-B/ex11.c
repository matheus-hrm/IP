#include <stdio.h>

int main(void)
{
  double a, b, c, x1, x2, delta;

  scanf("%lf %lf %lf", &a, &b, &c);

  delta = b*b - 4*a*c;

  if (delta == 0) {
  
    x1 = -b/(2*a);
    printf("RAIZ UNICA\n");
    printf("X1 = %.2lf\n", x1);
  
  } else if (delta > 0) {

    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);

    printf("RAIZES DISTINTAS\n");
    printf("X1 = %.2lf\n", x1);
    printf("X2 = %.2lf\n", x2);
  
  } else {
    printf("RAIZES IMAGINARIAS\n");
  } 
  
  return 0;
}