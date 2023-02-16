#include <stdio.h>

int main(void){

  int entradasA, entradasB;

  do{
  scanf("%d",&entradasA);
  }while(entradasA < 1 || entradasA > 100);

  do{
  scanf("%d",&entradasB);
  }while(entradasB < 1 || entradasB > 100);

  int i, j, vetA[entradasA], vetB[entradasB];

  for(i=0;i<entradasA; i++){
    scanf("%d",&vetA[i]);
    if(i>0 && vetA[i] == vetA[i-1]){
      do{
        scanf("%d",&vetA[i]);
      }while(vetA[i]==vetA[i-1]);
    }
  }
  for(i=0;i<entradasB; i++){
    scanf("%d",&vetB[i]);
    if(i>0 && vetB[i] == vetB[i-1]){
      do{
        scanf("%d",&vetB[i]);
      }while(vetB[i]==vetB[i-1]);
    }
  }
  
  int uniao[entradasA+entradasB], 
      interseccao[entradasA+entradasB],
      intersec = 0,
      uni = 0;

  for( i = 0; i < entradasA; i++){
    uniao[i] = vetA[i];
  }









  for( i = 0; i < entradasA; i++ ){
    for ( j = 0; j < entradasB; j++ ){
        if(vetA[i] == vetB[i]) interseccao[i] = vetA[i];
        intersec++;
    }
  }
  printf("(");
  for(i=0;i<intersec;i++){
    if(i == intersec-1) printf("%d)\n",interseccao[i]);
    else printf("%d,",interseccao[i]);
  }
  return 0;
}