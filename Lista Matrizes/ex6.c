#include <stdio.h>

int main(void){

  double matriz[2][2];
  int i, j, k;

  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    scanf("%lf", &matriz[i][j]);
    }
  }
  
  double matrizquad[2][2];

  for(i=0;i<2;i++){
    matrizquad[i][j] = 0;
    for(j=0;j<2;j++){
      for(k=0;k<2;k++)
      matrizquad[i][j] += matriz[i][k] * matriz[k][j];
    }
  }

  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      printf("%.3lf ", matrizquad[i][j]);
    }
    printf("\n");
  }

  return 0;
}