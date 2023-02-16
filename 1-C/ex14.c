#include <stdio.h>

int main(void){
  double  valorhora, salario;
  int i, matricula, horas;

  while(1){
    scanf("%d %d %lf", &matricula, &horas, &valorhora);
    getchar();
    if(matricula == 0){
      break;
    } 
    salario = horas * valorhora;
    printf("%d %.2lf\n", matricula, salario);
  } 
  return 0;
}