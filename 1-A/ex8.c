#include <stdio.h>

int main(int argc, char const *argv[]){
  double custoFinal, custoInicial, distribuidor, imposto;

  scanf("%lf", &custoInicial);
  scanf("%lf", &distribuidor);
  scanf("%lf", &imposto);

  custoFinal = custoInicial + (custoInicial * (distribuidor / 100)) + (custoInicial * (imposto / 100));

  printf("O VALOR DO CARRO E = %.2lf", custoFinal);

  return 0;
}
