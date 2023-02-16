#include <stdio.h>

int main(){
  int i = 0, inicial = 0, razao = 0, n = 0, soma = 0;
  scanf("%d %d %d", &inicial, &razao, &n);
  for(i = 0; i < n-1; i++){
    soma = soma + inicial;
    inicial = inicial + razao;
  }
  printf("%d\n", soma+inicial);
  return 0;
}