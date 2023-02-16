#include <stdio.h>

int main(void)
{
  double soma = 0;
  double num;
  int i = 0;

  scanf("%lf", &num);
 
  if (num > 1 && num != 0) {
    while (i < num) {
      soma += 1.0 / (i + 1);
      i++;
    }
    printf("%.6lf ", soma);
  } else {
    printf("Numero invalido!");
  }
  return 0;
}