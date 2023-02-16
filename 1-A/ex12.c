#include <stdio.h>

int main(){
  int reais;

  int notas100, notas50, notas10, notas1;
  
  scanf("%d", &reais);

  notas100 = reais / 100;
  notas50 = (reais % 100) / 50;
  notas10 = ((reais % 100) % 50) / 10;
  notas1 = (((reais % 100) % 50) % 10) / 1;

  printf("NOTAS DE 100 = %d\n", notas100);
  printf("NOTAS DE 50 = %d\n", notas50);
  printf("NOTAS DE 10 = %d\n", notas10);
  printf("MOEDAS DE 1 = %d\n", notas1);


  return 0;
}