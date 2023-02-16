#include <string.h>
#include <stdio.h>

int main(void){

  int entradas, i;

  scanf("%d", &entradas);

  while(entradas--){
    
    int a, b, d = 0;
    char string[61105];
    char* atual = string;
    int vet[12221];
    
    scanf("%d %d", &a, &b);
    
    for(i=a;i<=b;i++){
      d = sprintf(atual,"%d",i);
      atual += d;
    }
    printf("%s", string);
    
    for(atual--;atual!=string-1;atual--){
      printf("%c", *atual);
    }
    printf("\n");
  }
  return 0;
}