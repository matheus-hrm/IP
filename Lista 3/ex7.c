#include <stdio.h>
#include <string.h>

char * function(int n,char string[]){
  int i;
  if(n==0){
    return NULL;
  }
  if(n>strlen(string)){
    return string;
  }
  for(i=0;i<n;i++){
    printf("%c",string[i]);
  }
  printf("\n");
}

int main(void){
  int entradas;

  scanf("%d",&entradas);

  while(entradas--){
    int prefixo;
    char string[500], novastring[500];
    scanf("%d %[^\n]",&prefixo, string);
    function(prefixo,string);
  }
  return 0;
}