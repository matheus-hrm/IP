#include <stdio.h>

int main(void){
  
  int n , m, i, j = 0, size, busca;

  scanf("%d", &n);

  int vetor[n];

  for( i = 0; i < n; i++){
    scanf("%d", &vetor[i]);
  }

  scanf("%d", &m);
  
  for(i = 0; i < m; i++){
    scanf("%d", &busca);
    for(j=0; j < n; j++){
      if(busca == vetor[j]){
        printf("ACHEI\n");
        break;
      } else if (j==n-1){
        printf("NAO ACHEI\n");
        break;
      }
    }
  }    

  return 0;
}