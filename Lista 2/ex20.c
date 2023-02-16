#include <stdio.h>
#include <stdlib.h>

double valorAbsoluto(double x){
  if (x >= 0.0) return x;
  else return -x;
}

double calcula(double vetx[], double vety[], double vetz[], int n){
  int i;
  double x[n], y[n], z[n];
  for(i=0; i < n; i++){
    x[i] = (vetx[i+1] - vetx[i]); 
    y[i] = (vety[i+1] - vety[i]); 
    z[i] = (vetz[i+1] - vetz[i]);
    x[i] = valorAbsoluto(x[i]);
    y[i] = valorAbsoluto(y[i]);
    z[i] = valorAbsoluto(z[i]);
  }
  
  for(i=0; i < n-1; i++){
    if(x[i] > y[i]){
      if(x[i] > z[i]){
        printf("%.2lf\n", x[i]);
      }else{
        if(z[i] > y[i]){ 
          printf("%.2lf\n", z[i]);
        }
      }
    } else if(y[i] > z[i]){
      printf("%.2lf\n", y[i]);
    } else {
      printf("%.2lf\n", z[i]);
    }
  }
}

int main(void){

  int testes;

  scanf("%d", &testes);

  int i; 
  double vetx[testes], vety[testes], vetz[testes];

  for(i = 0; i < testes; i++){
    scanf("%lf %lf %lf", &vetx[i], &vety[i], &vetz[i]);
  }

  calcula(vetx, vety, vetz, testes);

  return 0;
}