#include <stdio.h>

  int main(){
    double celsius = 0, fahrenheit = 0;
    int n, i = 0, j = 0;
    scanf("%d", &n);
      for(i = 0; i < n; i++){
        scanf("%lf", &fahrenheit);
        celsius = ((fahrenheit - 32) * 5)/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n",fahrenheit, celsius);
        celsius = 0;
        fahrenheit = 0;
      }
  return 0;
}