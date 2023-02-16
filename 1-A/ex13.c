#include <stdio.h>

int main(){
  double a,b,c,d,e,f;
  double x, y;
  double D, Dx, Dy;

  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);
  scanf("%lf", &d);
  scanf("%lf", &e);
  scanf("%lf", &f);

  D =  (d*b - a*e);
  Dx = (b*f - c*e);
  Dy = (c*d-a*f)  ;

  x = Dx/D;
  y = Dy/D;

  printf("O VALOR DE X E = %.2lf\n", x);
  printf("O VALOR DE Y E = %.2lf", y);

  return 0;
}