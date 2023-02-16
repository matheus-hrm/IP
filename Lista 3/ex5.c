#include <stdio.h>
#include <string.h>

int main(void){

  int i,num1,num2;
  char string[300];

  while(scanf("%d %d",&num1, &num2) != EOF){
  
    sprintf(string,"%d",num1+num2);
    
    for(i=0;i<strlen(string);i++){
      if(string[i] != '0'){
        printf("%c",string[i]);
      }
    }
    
    printf("\n");
  }
  return 0;
}