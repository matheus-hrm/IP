#include <stdio.h>

int main(){

  int n, i, fatorial = 1;
  scanf("%d", &n);
  for(i = 1; i <= n; i++){
    fatorial = fatorial * i;
  }
  printf("%d! = %d\n", n, fatorial);


  return 0;
}