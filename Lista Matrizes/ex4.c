#include <stdio.h>

int main(void){

  int linhas, colunas;

  while((linhas < 1 || linhas > 10)){
    scanf("%d", &linhas);
  } 
  while((colunas < 1 || colunas > 10 )){
    scanf("%d", &colunas);
  }
  
  int matriz[linhas][colunas];

  int i, j;

  for(i = 0; i < linhas; i++){
    for(j = 0; j < colunas; j++){
      scanf("%d", &matriz[i][j]);
    }
  }

  for(i = 0; i < linhas; i++){
    printf("linha %d: ", i+1);
    for(j = 0; j < colunas; j++){
      if(j == colunas - 1){
        printf("%d", matriz[i][j]);
      } else printf("%d,", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}