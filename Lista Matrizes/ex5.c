#include <stdio.h> 

int main(){
  int linhas, colunas;
  scanf("%d %d", &linhas, &colunas);

  int matriz[linhas][colunas];

  int i, j;

  int count = 0;

  for(i = 0; i < linhas; i++){
    for(j = 0; j < colunas; j++){
      if(count == 0){
        matriz[i][j] = 1;
        count++;
      }else {
        matriz[i][j] = 0;
        count--;
      }
    }
    if(count == 0) count++;
    else count--;
  }

  for(i = 0; i < linhas; i++){
    for(j = 0; j < colunas; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}