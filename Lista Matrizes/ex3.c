#include <stdio.h>

int main(void){

  int ordem;

  scanf("%d", &ordem);

  int matriz[ordem][ordem];

  int i, j;

  for(i=0;i<ordem;i++){
    for(j=0;j<ordem;j++){
      scanf("%d", &matriz[i][j]);
    }
  }
  int k = ordem - 1;
  i = 0;
  while(ordem--){
    printf("%d\n", matriz[i][k]);
    i++;
    k--;
  }

  return 0;
}