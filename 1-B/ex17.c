#include <stdio.h>

int main(void)
{
  double n1, n2, n3, n4;

  scanf("%lf", &n1);
  scanf("%lf", &n2);
  scanf("%lf", &n3);
  scanf("%lf", &n4);

  if(n1 < n2 && n2 < n3 && n3 < n4){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n1, n2, n3, n4);
  } else if (n1 < n2 && n2 < n4 && n4 < n3){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n1, n2, n4, n3);
  } else if (n1 < n3 && n3 < n2 && n2 < n4){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n1, n3, n2, n4);
  } else if (n1 < n3 && n3 < n4 && n4 < n2){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n1, n3, n4, n2);
  } else if (n1 < n4 && n4 < n2 && n2 < n3){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n1, n4, n2, n3);
  } else if (n1 < n4 && n4 < n3 && n3 < n2){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n1, n4, n3, n2);
  } else if (n2 < n1 && n1 < n3 && n3 < n4){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n2, n1, n3, n4);
  } else if (n2 < n1 && n1 < n4 && n4 < n3){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n2, n1, n4, n3);
  } else if (n2 < n3 && n3 < n1 && n1 < n4){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n2, n3, n1, n4);
  } else if (n2 < n3 && n3 < n4 && n4 < n1){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n2, n3, n4, n1);
  } else if (n2 < n4 && n4 < n1 && n1 < n3){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n2, n4, n1, n3);
  } else if (n2 < n4 && n4 < n3 && n3 < n1){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n2, n4, n3, n1);
  } else if (n3 < n1 && n1 < n2 && n2 < n4){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n3, n1, n2, n4);
  } else if (n3 < n1 && n1 < n4 && n4 < n2){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n3, n1, n4, n2);
  } else if (n3 < n2 && n2 < n1 && n1 < n4){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n3, n2, n1, n4);
  } else if (n3 < n2 && n2 < n4 && n4 < n1){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n3, n2, n4, n1);
  } else if (n3 < n4 && n4 < n1 && n1 < n2){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n3, n4, n1, n2);
  } else if (n3 < n4 && n4 < n2 && n2 < n1){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n3, n4, n2, n1);
  } else if (n4 < n1 && n1 < n2 && n2 < n3){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n4, n1, n2, n3);
  } else if (n4 < n1 && n1 < n3 && n3 < n2){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n4, n1, n3, n2);
  } else if (n4 < n2 && n2 < n1 && n1 < n3){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n4, n2, n1, n3);
  } else if (n4 < n2 && n2 < n3 && n3 < n1){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n4, n2, n3, n1);
  } else if (n4 < n3 && n3 < n1 && n1 < n2){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n4, n3, n1, n2);
  } else if (n4 < n3 && n3 < n2 && n2 < n1){
    printf("%.2lf, %.2lf, %.2lf, %.2lf", n4, n3, n2, n1);
  } 
  return 0;
}