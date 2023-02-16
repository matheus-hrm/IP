#include <stdio.h>

int main (void){

  int matriz[10][10];

  int linhas , colunas;
  
  scanf("%d %d",&linhas,&colunas);
  
  while((linhas > 10 || linhas < 1)||(colunas > 10 && colunas < 1)){
    scanf("%d %d",&linhas, &colunas);
  }
  
  int colunaInicial = 0, colunaFinal = colunas;
  int linhaInicial= 0, linhaFinal = linhas;

  int i, j, k, l;

  for(i = 0; i < linhas; i++){
    for(j = 0; j < colunas; j++){
      scanf("%d",&matriz[i][j]);
    }
  }
  while(linhaInicial!=linhaFinal || colunaInicial!=colunaFinal){
    for(i = colunaInicial; i < colunaFinal; i++){
      printf("%d ",matriz[linhaInicial][i]);
    }
    linhaInicial++;
    for(i = linhaInicial; i < linhaFinal; i++){
      printf("%d ",matriz[i][colunaFinal-1]);
    } 
    colunaFinal--;
    for(i = colunaFinal-1; i >= colunaInicial; i--){
      printf("%d ",matriz[linhaFinal-1][i]);
    }
    linhaFinal--;
    for(i = linhaFinal-1; i >= linhaInicial; i--){
      printf("%d ",matriz[i][colunaInicial]);
    }
    colunaInicial++;
  }



  return 0;
}