#include <stdio.h>

int main (void) {

  int dimensao;
  scanf("%d", &dimensao);

  int matriz[dimensao][dimensao];

  int i, j;

  for(i=0;i<dimensao;i++){
    for(j=0;j<dimensao;j++){
      scanf("%d", &matriz[i][j]);
    }
  }
  i = 0;
  while(dimensao--){  
    printf("%d\n", matriz[i][i]);
    i++;
  }

  return 0;
}