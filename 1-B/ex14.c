#include <stdio.h>

int main(void)
{
  int matricula, num_dependentes;
  double salario_min, salario_func, taxa_imposto, imposto_bruto, imposto_liquido;

  scanf("%d %lf %d %lf %lf", &matricula, &salario_min, &num_dependentes, &salario_func, &taxa_imposto);

  if (salario_func > 12 * salario_min){
    imposto_bruto = 0.2 * salario_func;
  } else if (salario_func > 5 * salario_min){
    imposto_bruto = 0.08 * salario_func;
  } else if (salario_func <= 5 * salario_min){
    imposto_bruto = 0;
  }

  imposto_liquido = imposto_bruto - (num_dependentes * 300); 

  taxa_imposto = (taxa_imposto/100) * salario_func;

  imposto_liquido = imposto_liquido - taxa_imposto;

  if (imposto_liquido < 0){
    printf("MATRICULA = %d\n", matricula);
    printf("IMPOSTO BRUTO = %.2lf\n", imposto_bruto);
    printf("IMPOSTO LIQUIDO = %.2lf\n", imposto_liquido+ taxa_imposto);
    printf("RESULTADO = %.2lf\n", imposto_liquido);
    printf("IMPOSTO A RECEBER\n");
  } else if (imposto_liquido == 0){
    printf("MATRICULA = %d\n", matricula);
    printf("IMPOSTO BRUTO = %.2lf\n", imposto_bruto);
    printf("IMPOSTO LIQUIDO = %.2lf\n", imposto_liquido+ taxa_imposto);
    printf("RESULTADO = %.2lf\n", imposto_liquido );
    printf("IMPOSTO QUITADO\n");
  } else if (imposto_liquido > 0){
    printf("MATRICULA = %d\n", matricula);
    printf("IMPOSTO BRUTO = %.2lf\n", imposto_bruto);
    printf("IMPOSTO LIQUIDO = %.2lf\n", imposto_liquido+ taxa_imposto);
    printf("RESULTADO = %.2lf\n", imposto_liquido);
    printf("IMPOSTO A PAGAR\n");
  }
  return 0;
}