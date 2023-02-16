#include <stdio.h>
#include <math.h>

long fatorial(int n){
  if (n == 0)  return 1;
  return n * fatorial(n - 1);
}


int main(void){
  
  int n, i;
  double x, y;

  scanf("%lf", &x);
  scanf("%d", &n);
 
  for(i = 0; i <= n; i++ ){
    y = y + (float) pow(x,i)/ fatorial(i);
  }
 
  printf("e^%.2lf = %.6lf\n", x, y );
 
 
 return 0;
}