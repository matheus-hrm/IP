#include <stdio.h>
#define max sizeof(int)

int main (void){
  int n;

  while(scanf("%d",&n)!=EOF){
    int bin[max], i, j;
      for(i=0;i<n;i++){
        if(i==0) bin[i] = 0;
        
        if (i%2 != 0){ 
          bin[i] = 1;
        } else bin[i] = 0; 
    
      }
  }
  return 0;
}