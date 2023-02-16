
#include <stdio.h>
int main(){
  double horas,minutos,segundos;
  double segundosTotais;

  scanf("%lf", &horas);
  scanf("%lf", &minutos);
  scanf("%lf", &segundos);

  segundosTotais = (horas * 3600) + (minutos * 60) + segundos;

  printf("O TEMPO EM SEGUNDOS E = %.0lf", segundosTotais);
  return 0;
}