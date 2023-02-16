#include <stdio.h>

int main(void){

  double pi = 3.1416;
  double raioc, raioe, altura ;
  double volumecilindro,volumeesfera;
 
  scanf("%lf %lf", &raioc, &altura); //raio e altura do cilindro

  scanf("%lf", &raioe); //raio da esfera

  volumeesfera = (4 * pi * (raioe * raioe * raioe)/3);
  volumecilindro = pi * (raioc * raioc) * altura;

  printf("Sao necessarias: %.2lf esferas de raio %.2lf.", volumecilindro/volumeesfera, raioe);

  return 0;
}