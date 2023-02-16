#include <stdio.h>

void checa(int anoes[]){
  int i, j, k, soma = 0;
  for(j=0,k=0;j<9;j++){
    
    for(i=j;i<9;i++){
      soma += anoes[i];
      if(soma == 100) 
      break;
    }
    soma = 0;
  }
}

int main(void){
  int testes;

  scanf("%d",&testes);

  while(testes--){
    int anoes[8], i;
    for(i = 0;i < 9; i++){
      scanf("%d",&anoes[i]);
      checa(anoes);
    }
  }

  return 0;
}