#include <stdio.h>

int ordenacrescente(double a, double b, double c, double d){
  double temp;
  if(a>b){
    temp = a;
    a = b;
    b = temp;
  }
  if(a>c){
    temp = a;
    a = c;
    c = temp;
  }
  if(a>d){
    temp = a;
    a = d;
    d = temp;
  }
  if(b>c){
    temp = b;
    b = c;
    c = temp;
  }
  if(b>d){
    temp = b;
    b = d;
    d = temp;
  }
  if(c>d){
    temp = c;
    c = d;
    d = temp;
  }
  printf("%.2lf %.2lf %.2lf %.2lf\n", a,b,c,d);
  return 0;
}
int ordenacrescente2(double a, double b, double c, double d){
  double temp;
  if(a>b){
    temp = a;
    a = b;
    b = temp;
  }
  if(a>c){
    temp = a;
    a = c;
    c = temp;
  }
  if(a>d){
    temp = a;
    a = d;
    d = temp;
  }
  if(b>c){
    temp = b;
    b = c;
    c = temp;
  }
  if(b>d){
    temp = b;
    b = d;
    d = temp;
  }
  if(c>d){
    temp = c;
    c = d;
    d = temp;
  }
  printf("%.2lf %.2lf %.2lf %.2lf\n", a,b,d,c);
  return 0;
}

int ordenadecrescente(double a, double b, double c, double d){
  double temp;
  if(a<b){
    temp = a;
    a = b;
    b = temp;
  }
  if(a<c){
    temp = a;
    a = c;
    c = temp;
  }
  if(a<d){
    temp = a;
    a = d;
    d = temp;
  }
  if(b<c){
    temp = b;
    b = c;
    c = temp;
  }
  if(b<d){
    temp = b;
    b = d;
    d = temp;
  }
  if(c<d){
    temp = c;
    c = d;
    d = temp;
  }
  printf("%.2lf %.2lf %.2lf %.2lf\n", a,b,c,d);
  return 0;
}

int main(void){

  double a, b, c, d;
  int i;
  
  while(scanf("%d %lf %lf %lf %lf", &i,&a,&b,&c,&d)!= EOF){
    switch (i){
    case 1:
      ordenacrescente(a,b,c,d);
      break;
    case 2:
      ordenadecrescente(a,b,c,d);
      break;
    case 3:
      ordenacrescente2(a,b,c,d);
      break;
    }
  }
  return 0;
}