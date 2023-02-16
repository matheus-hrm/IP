#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *nome[500];
    int matricula;
    float nota;
} aluno;

int main(void){

  char str[100];
  FILE *fptr;

  if(fptr = fopen("test.txt", "wb") == NULL){
    fprintf(stderr, "Error opening file");
    exit(1);
  }

  fscanf(fptr, "%[^/n]s", str);

  printf("%s", str);
  
  fclose(fptr);

  return 0;
}