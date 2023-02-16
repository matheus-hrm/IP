#include <stdio.h>


void copiaMatriz(int matriz[10][10], int matriz2[10][10], int n){

  int i, j;

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      matriz2[i][j] = matriz[i][j];
    }
  }
}

void powMatrix(){

}

int main(){

  int n;
  scanf("%d",&n);

  int matriz[10][10];

  int i, j, k;

  scanf("%d",&k);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d",&matriz[i][j]);
    }
  }

  int matriz2[10][10];
  double resultado[10][10];

  copiaMatriz(matriz, matriz2, n);

  for(i = 0; i < k - 1; i++){
    powMatrix(matriz, matriz2,resultado, n);
    copia
  }




  return 0;
}