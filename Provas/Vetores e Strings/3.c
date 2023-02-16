#include <stdio.h>
#include <string.h>

char compare(char *s1, char *s2){
  int i;
  for(i=0;s1[i] != '\0' || s2[i] != '\0';i++){
    if(s1[i] != s2[i]){
      if(s1[i] > s2[i]){
        return 1;
        break;
      } else 
      return 2;
      break;
    }
  }
  if(s1[i] == '\0' && s2[i] == '\0'){
    return 0;
  }
}

int main(void){
  char s1[500], s2[500];
  
  int testes;
  scanf("%d", &testes);

  getchar();

  while(testes--){
    scanf("%[^\n]", s1);
    getchar();
    scanf("%[^\n]", s2);
    getchar();

    if(compare(s1, s2) == 0){
      printf("=\n");
    } else if(compare(s1, s2) == 1){
      printf(">\n");
    } else if(compare(s1, s2) == 2){
      printf("<\n");
    }
  }
}