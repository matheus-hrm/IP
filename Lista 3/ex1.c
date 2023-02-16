#include <stdio.h>
#include <string.h>

void combina(char *string, char *string2){
  int i =0, j = 0, tam1 = strlen(string), tam2 = strlen(string2);
  if(tam1>tam2){
  while(i<tam1){   
    printf("%c", string[i]);
    if(j<tam2) printf("%c", string2[j]);
    i++;j++;
  }
  printf("\n");
  } else {
   while(j<tam2){
    if(i<tam1) printf("%c", string[i]);
    printf("%c", string2[j]);
    i++;j++;
  }
  printf("\n");
  }
}

int main(void){

  int entradas, i;

  scanf("%d", &entradas);

  for(i=0;i<entradas;i++){
    char string[51], string2[51];
    scanf("%s" "%s", string, string2);
    combina(string, string2);
  }
}