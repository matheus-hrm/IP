#include <stdio.h>

int main(){
  
  int habA, habB;
  int i = 0;
  float taxaA = 0.03, taxaB = 0.015;
  
  scanf("%d", &habA);
  scanf("%d", &habB);

  for(i = 0;habA < habB; i++){
    habA = habA + (habA * taxaA);
    habB = habB + (habB * taxaB);
  }
  
  printf("ANOS = %d\n", i);
  
  return 0;
} 


    