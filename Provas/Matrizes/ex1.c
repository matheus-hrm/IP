#include <stdio.h>

//Escreva um programa pra ler matrizes quadradas e imprimir a diagonal principal e a diagonal secudaria, ambas de baixo pra cima nas matrizes

int main(void){

  int testes;

  scanf("%d", &testes);

  while (testes--){
    int d;
   
    scanf("%d", &d);
  
    int matriz[d][d];
  
    int i, j;

    for (i = 0; i < d; i++){
      for (j = 0; j < d; j++){
        scanf("%d", &matriz[i][j]);
      }
    }

    for(i = d - 1; i >= 0; i--){
      for(j = d - 1; j >= 0; j--){
        if(i == j) printf("%d ", matriz[i][j]);
      }
    }
    printf("\n");
    for(i = d; i >= 0; i--){
      for(j = d; j >= 0; j--){
        if(i + j == d - 1) printf("%d ", matriz[i][j]);
      }
    }
    printf("\n");
  }
  return 0;
}