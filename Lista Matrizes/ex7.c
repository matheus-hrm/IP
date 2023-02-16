#include <stdio.h>

int main (void) {

  int matriz[6][6];

  int i, j, k;

  for (i=0;i<6;i++){
    for(j=0;j<6;j++){
      scanf("%d", &matriz[i][j]);
    }
  }

  int soma = 0;
  int temp = -9*7;
  
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      soma = 0;
      soma += matriz[i][j]+matriz[i][j+1]+matriz[i][j+2] + matriz[i+1][j+1] + matriz[i+2][j]+matriz[i+2][j+1]+matriz[i+2][j+2];
      if(soma > temp){
        temp = soma;
      }
    }
  }

  printf("%d\n", temp);


  return 0;
}