#include <stdio.h>

int main(void)
{
  int n, j; //quantidade de times do campeonato
  int i = 0, cont=1; //contador

  scanf("%d", &n);

  if (n < 2) {
    
    printf("Campeonato invalido!");
    return 0;

  } 
      for(i = 1;i<= n; i++) {
        for(j=1;j<=n;j++) {
          if (i != j && i<j){
            printf("Final %d: Time%d X Time%d\n", cont, i, j);
            cont++;
          }
        }
      }
    
  return 0;
}
