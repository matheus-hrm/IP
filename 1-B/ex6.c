#include <stdio.h>

int main(void){
  double salario, salarioAjustado;

  scanf("%lf", &salario);

  if (salario <= 300){
    salarioAjustado = salario * 0.5 + salario;
    printf("SALARIO COM REAJUSTE = %.2lf\n", salarioAjustado);
  } else if (salario > 300) {
      salarioAjustado = salario * 0.3 + salario;
      printf("SALARIO COM REAJUSTE = %.2lf\n", salarioAjustado);
    }
  
  return 0;
}