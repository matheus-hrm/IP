 #include <stdio.h> 
#include <stdlib.h>
#include <string.h>

typedef struct{
  char nome[50];
  double preco;
} Produto;

Produto *p;

int main(void){

  int n;
  scanf("%d", &n);
  while(n--){
    int produtos;
    int i;
    
    
    scanf("%d", &produtos);
    
    Produto *p = (Produto*) malloc(produtos * sizeof(Produto));
    if(p == NULL){
     exit(1);
    }
    
    for(i = 0; i < produtos; i++){
      scanf("%s %lf", p[i].nome, &p[i].preco);
    }
    
    int compras;
    double total = 0;
    
    scanf("%d", &compras);
    
    for(i = 0; i < compras; i++){
      char nome[50];
      int quantidade;
    
      scanf("%s %d", nome, &quantidade);
      int j;
    
      for(j = 0; j < produtos; j++){
        if(strcmp(nome, p[j].nome) == 0){
          total += p[j].preco * quantidade;
        }
      }
    }
    printf("R$ %.2lf\n", total);
    free(p);
  }

  
  return 0;
} 
