#include <stdio.h>

int main(){
  double salario, kW, custokW;
  double desconto = 0.01;
  double consumo;

  scanf("%lf", &salario);
  scanf("%lf", &kW);

  custokW = salario * 0.007;
  consumo = kW * custokW;
  desconto = consumo * 0.9;

  printf("Custo por kW: R$ %.2lf\n", custokW);
  printf("Custo do consumo: R$ %.2lf\n", consumo);  
  printf("Custo com desconto: R$ %.2lf\n",desconto);

  return 0;
}
