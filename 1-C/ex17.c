#include <stdio.h>

int main(void){

  int linhas, colunas;
  int i, j, d;

  scanf("%d", &linhas);
  scanf("%d", &colunas);

  
    for(i=2; i<=linhas; i++){
      for(j=1; j<=colunas; j++){
        if(j==i){
          break;
        }
        
        if(j!=1){
          printf("-(%d,%d)", i,j);
        } else {
          printf("(%d,%d)", i,j);
        }
      }    
      
      d++;
      printf("\n");
  }
  return 0;
}