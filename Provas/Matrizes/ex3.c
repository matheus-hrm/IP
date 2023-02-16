#include <stdio.h>

// Matriz simétrica esquisita se e somente se a ij = a ji para todo i e j no intervalo [1, n]

int main(void){

  int testes;

  scanf("%d", &testes);

  while(testes--){
    int n;

    scanf("%d", &n);

    int matriz[n][n];

    int i, j;

    for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
        scanf("%d", &matriz[i][j]);
      }
    }
    int matriz2[n][n];
    
    int k, l;
    for(i = 0,k = n - 1 ; i < n, k >= 0; i++, k--){
      for(j = 0,l = n - 1; j < n, l >= 0; j++, l--){
      matriz2[k][l] = matriz[i][j];     
      }
    }
    int esquisita = 0;
    int nao = 0;
    for(i = 0; i < n; i++){
      if(nao > 0) break;
      for(j = 0; j < n; j++){
        if(matriz[i][j] != matriz2[j][i]){
          printf("NAO ESQUISITA\n");
          nao++;
        } else {
          esquisita++;
        }
      }
    }

    if(esquisita == n*n) printf("ESQUISITA\n");
  }

  return 0;
}