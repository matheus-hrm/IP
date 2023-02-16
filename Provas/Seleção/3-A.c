#include <stdio.h>

int main(void){

  double salario;
  double imposto;

  scanf("%lf", &salario);

  if(salario<=2000){
    printf("Isento");
  }else if(salario>2000 && salario<=3000){
    imposto = (salario-2000)*0.08;
    printf("R$ %.2lf", imposto);
  }else if(salario>3000 && salario<=4500){
    imposto = (salario-3000)*0.18 + 1000*0.08;
    printf("R$ %.2lf", imposto);
  }else if(salario>4500){
    imposto = (salario-4500)*0.28 + 1500*0.18 + 1000*0.08;
    printf("R$ %.2lf", imposto);
  }

  return 0;
}
