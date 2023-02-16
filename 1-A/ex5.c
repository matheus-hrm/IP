#include <stdio.h>
#include <math.h>

int main(){
  double volume, altura, areaHex, arestaHex;
  double n = 1/3;

  scanf("%lf %lf", &altura, &arestaHex);

  areaHex = (3 * sqrt(3) * (arestaHex * arestaHex)) / 2;
  volume = (areaHex * altura) *(1.0/3.0) ;
  

  printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", volume);

  return 0;
}