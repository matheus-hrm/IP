#include <stdio.h>

int main(){
  double fahrenheit, celsius;
  double polegada, milimetros;
  
  scanf("%lf", &fahrenheit);
  scanf("%lf", &polegada);
  
  milimetros = polegada * 25.4;
  celsius = ( 5 * (fahrenheit - 32)) / 9;

  printf("O VALOR EM CELSIUS = %.2lf\n",celsius);
  printf("A QUANTIDADE DE CHUVA E = %.2lf", milimetros);

  return 0;
}