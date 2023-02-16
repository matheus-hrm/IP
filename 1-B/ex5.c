#include <stdio.h>

int main(void){

  double intervalo;
  
  scanf("%lf", &intervalo);

  if (intervalo < 10.0 && intervalo >= 9.0){
    printf("NOTA = %.1lf CONCEITO = A\n", intervalo);
  } else if (intervalo < 9 && intervalo >= 7.5){
      printf("NOTA = %.1lf CONCEITO = B\n", intervalo);
    } else if (intervalo < 7.5 && intervalo >= 6.0){
        printf("NOTA = %.1lf CONCEITO = C\n", intervalo);
      } else  
          printf("NOTA = %.1lf CONCEITO = D\n", intervalo);
      
  return 0;
}