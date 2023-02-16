#include <stdio.h>

int main(){
  int hora;
  double valor, valorAcrescimo;

  scanf("%d", &hora);

  valor = (hora / 3) * 10.0;
  valorAcrescimo = (hora % 3) * 5.0;
  valor = valor + valorAcrescimo;
  
  printf("O VALOR A PAGAR E = %.2lf\n", valor);
  
  return 0;
}