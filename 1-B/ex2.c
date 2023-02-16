#include <stdio.h>

int main(void){
  int conta;
  double consumo, valor;
  char tipo;

  scanf("%d %lf %c", &conta, &consumo, &tipo);

  switch (tipo){
  case 'R':
    valor = (consumo * 0.05) + 5;
    printf("CONTA = %d\n", conta);
    printf("VALOR DA CONTA = %.2lf\n", valor);
    break;
  case 'C':
    if (consumo <= 80){
      valor = (consumo * 0.25);
      printf("CONTA = %d\n", conta);
      printf("VALOR DA CONTA = %.2lf\n", valor);
      break;
    } else {
      consumo = consumo - 80;
      valor = (consumo * 0.25) + 500;
      printf("CONTA = %d\n", conta);
      printf("VALOR DA CONTA = %.2lf\n", valor);
      break;
    }
  case 'I':
    if (consumo <= 100){
      
      valor = (consumo * 0.04);
      printf("CONTA = %d\n", conta);
      printf("VALOR DA CONTA = %.2lf\n", valor);
      break;
    } else {
      consumo = consumo - 100;
      valor = (consumo * 0.04) + 800;
      printf("CONTA = %d\n", conta);
      printf("VALOR DA CONTA = %.2lf\n", valor);
      break;
    }
    break;
  }
}