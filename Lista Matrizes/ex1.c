#include <stdio.h>

int main(void){
  
  int i, j;
  double matriz[2][2];
  
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    scanf("%lf", &matriz[i][j]);
    }
  }

  double det = matriz[0][0]*matriz[1][1] - matriz[0][1]*matriz[1][0];

  printf("%.2lf", det);


  return 0;
}