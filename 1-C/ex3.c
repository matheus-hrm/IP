#include <stdio.h>

int main(){
  int n, quadrado;
  int i = 0;
  scanf("%d", &n);

  for(i = 0; i <= n; i++){
    if(i % 2 == 0 && i != 0){
      quadrado = i * i;
      printf("%d^2 = %d\n", i, quadrado);
    }
  }

  return 0;
}