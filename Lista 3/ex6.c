#include <stdio.h>
#include <string.h>

int main(void){

  char string[201];

  while(scanf("%s", string) != EOF){
    int i, j;
    int tam = strlen(string);
    for(i=0, j=tam-1; i<=j; i++, j--){
      if(string[i] != string[j]){
        printf("nao\n");
        break;
      } else { printf("sim\n");
      break;
      }
    }
  }
  return 0;
}