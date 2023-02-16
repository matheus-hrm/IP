#include <stdio.h>

int main(void){
  int numero;

  scanf("%d", &numero);

    if(numero%3 == 0 && numero%5 == 0){
      printf("O NUMERO E DIVISIVEL\n");
      return 0;
    } else {
      printf("O NUMERO NAO E DIVISIVEL\n");
      return 0;
    }
}