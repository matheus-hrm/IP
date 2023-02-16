#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
        cliente aux = c[j];
        c[j] = c[i];
        c[i] = aux;
      } else if((2*(c[i].vezes * c[i].valor_medio) - c[i].atraso) == (2*(c[j].vezes * c[j].valor_medio) - c[j].atraso)){
        if(strcmp(c[i].cpf, c[j].cpf) < 0){
          cliente aux = c[j];
          c[j] = c[i];
          c[i] = aux;
        }
      }
    }
  }
}

void invertevetor(cliente c[], int n_clientes){
  int i, j;
  for(i = 0, j = n_clientes-1; i < j; i++, j--){
    cliente aux = c[i];
    c[i] = c[j];
    c[j] = aux;
  }
}

int main(void){

  int n_clientes;

  scanf("%d", &n_clientes);

  cliente *c = (cliente*) malloc(n_clientes * sizeof(cliente));

  int i;
  if (c == NULL) {
      fprintf(stderr, "Erro ao alocar memoria\n");
      exit(1);
    }

  for(i = 0; i < n_clientes; i++){
    getchar();
    scanf("%[^\n]", c[i].nome);
    getchar();
    scanf("%s", c[i].cpf);
    scanf("%d", &c[i].vezes);
    scanf("%f", &c[i].valor_medio); 
    scanf("%d", &c[i].atraso); 
  }
  
  ordena(c, n_clientes);
  invertevetor(c, n_clientes);
  
  for(i =  0; i < n_clientes;  i++){
    printf("%s\n", c[i].nome);
    printf("%s\n", c[i].cpf);
    printf("%d\n", c[i].vezes);
    printf("%.2f\n", c[i].valor_medio);
    printf("%d\n", c[i].atraso);
    printf("\n");
  }

  return 0;
}