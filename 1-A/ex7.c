#include <stdio.h>

int main(int argc, char const *argv[]){
  double lado1, lado2, lado3;
  double perimetro, area;
  
  scanf("%lf %lf %lf", &lado1, &lado2, &lado3);

  perimetro = (lado1 + lado2 + lado3) / 2;
  area = sqrt(perimetro * (perimetro - lado1) * (perimetro - lado2) * (perimetro - lado3));

  printf("A AREA DO TRIANGULO E = %.2lf\n", area);

  return 0;
}
