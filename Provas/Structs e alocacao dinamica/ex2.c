#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_MAX 3

typedef struct cliente{
  char nome[301];
  int atraso;
  char cpf[12];
  float valor_medio;
  int vezes;
} cliente;

void ordena(cliente c[], int n_clientes){
  int i, j;
  for(i = 0; i < n_clientes; i++){
    for(j = i+1 ; j < n_clientes; j++){
      if((2*(c[i].vezes * c[i].valor_medio) - c[i].atraso) > (2*(c[j].vezes * c[j].valor_medio) - c[j].atraso)) {
        cliente aux = c[i];
        c[i] = c[j];
        c[j] = aux;
      } else if((2*(c[i].vezes * c[i].valor_medio) - c[i].atraso) == (2*(c[j].vezes * c[j].valor_medio) - c[j].atraso)){
        if(strcmp(c[i].nome, c[j].nome) > 0){
          cliente aux = c[i];
          c[i] = c[j];
          c[j] = aux;
        }
      }
    }
  }
}

int main(void){

  cliente *c = (cliente*) malloc(TAM_MAX * sizeof(cliente));
  

  int i = 0;
  char espaco;
  int k = TAM_MAX;

  if (c == NULL) {
      fprintf(stderr, "Erro ao alocar memoria\n");
      exit(1);
    }
  
  scanf("%[^\n]", c[i].nome);
  getchar();
  scanf("%s", c[i].cpf);
  scanf("%d", &c[i].vezes);
  scanf("%f", &c[i].valor_medio);
  while(scanf("%d", &c[i].atraso) != EOF){
    getchar();
    i++;
    if(i == k){
      k += TAM_MAX;
      c = (cliente*) realloc(c, k * sizeof(cliente));
    }
    scanf("%[^\n]", c[i].nome);
    getchar();
    scanf("%s", c[i].cpf);
    scanf("%d", &c[i].vezes);
  scanf("%f", &c[i].valor_medio);
  }

  ordena(c, i);
  int j;
  for(j = 0; j < i; i++){
    printf("%s\n", c[j].nome);
    printf("%s\n", c[j].cpf);
    printf("%d\n", c[j].vezes);
    printf("%.2f\n", c[j].valor_medio);
    printf("%d\n", c[j].atraso);
    printf("\n");
  }

  return 0;
}