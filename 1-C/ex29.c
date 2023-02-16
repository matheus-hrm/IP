#include <stdio.h>
#define use_math_defines

long fat(int n){
  if(n == 0) return 1;
  return n * fat(n-1);
}

int main(void){

  int n, i;
  double x, y;

  scanf("%lf",&x);
  scanf("%d",&n);

  for(i = 0; i <= n ; i++){
    y = y + pow(-1.0,i) * pow (x,(2*i)+1) / fat((2.0*i)+1.0);
  }

  printf("seno(%.2lf) = %.6lf\n",x,y);


  return 0;
}