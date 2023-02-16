#include <stdio.h>

int main(){
  int numero;
  int n1, n2, n3;
  int temp;
 
  scanf("%d", &numero);
 
  n1 = numero / 100;
  n2 = (numero % 100) / 10;
  n3 = (numero % 100) % 10;

  temp = n1;
  n1 = n3;
  n3 = temp;

  printf("%d%d%d", n1, n2, n3);

  return 0;
}
