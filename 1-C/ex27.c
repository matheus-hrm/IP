#include <stdio.h>
#include <math.h>

long fat (int n){
  return (n < 2) ? 1 : n * fat(n-1);
}

int main(){

  int n, i, j;
  double x, z = 0.0;

  scanf("%lf", &x);
  scanf("%d", &n);

  for (i = 0; i <= n; i++ ){
    z = z + ( ( pow(-1.0 , i)*pow(x, (2.0*i)) ) / (fat(2*i)) );
  }

  printf("cos(%.2lf) = %.6lf\n", x, z );

  return 0;
}