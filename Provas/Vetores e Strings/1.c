#include <stdio.h>
#include <string.h>

void maiusculas(char *s) {
  int i;
  for(i=0;s[i] != '\0';i++){
    if (s[i]>='a' && s[i]<='z'){
      s[i] = 'A' + (s[i] - 'a'); // tentei também com s[i] = s[i] - 32; e não funcionou  
    }
  }
}

int main(void) {
    char s[10000];
    while((scanf("%[^\n]", s)) != EOF){
      getchar();
      maiusculas(s);
      printf("%s\n");
    }
    return 0;
}