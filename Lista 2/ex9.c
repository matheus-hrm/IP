#include <stdio.h>

double calculadistancia(double x[], double y[], double z[], int pontos){
  int i;
  double distancia[pontos];
  
  for(i = 0; i < pontos; i++){
    distancia[i] = sqrt(pow(x[i] - x[i+1], 2) + pow(y[i] - y[i+1], 2) + pow(z[i] - z[i+1], 2));
  }

  for(i = 0; i<pontos -1 ; i++){
    printf("%.2lf\n", distancia[i]);
  }
}

int main(void) {

  int pontos, i, j;

  scanf("%d", &pontos);

  double x[pontos], y[pontos], z[pontos];

  for(i=0; i<pontos; i++){
    scanf("%lf %lf %lf", &x[i], &y[i], &z[i]);
  }
  
  calculadistancia(x, y, z, pontos);

  return 0;
}