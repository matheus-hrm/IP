#include <Stdio.h>
#include <string.h>

void searchChar(char c, char *string){
  int i, j, k, count = 0;
  char *aux = string;
  for(i = 0; i < strlen(string); i++){
    if(string[i] == c){
      printf("Caractere %c encontrado na posicao %d", c, i);
    }
  }
  printf("Caractere %c nao encontrado", c);
}

int main(){
  int entradas;

  scanf("%d",&entradas);

  while(entradas--){
    char string[500], c;
    scanf("%c %[^\n]", &c ,string);
    searchChar(c, string);

  }

  return 0;
}