#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_MAX 50 

typedef struct{
  int numerador;
  int denominador;
} Fracao;

//cria um vetor de ponteiros para Fracao

Fracao *vet[TAM_MAX];

int main(void){
  int testes;
  int count = 0;
  scanf("%d", &testes);

  while(testes--){ //enquanto houver testes
    int n;  //numero de fracoes
    scanf("%d", &n); //le o numero de fracoes
    int i;
    for(i = 0; i < n; i++){
      vet[i] = (Fracao*) malloc(sizeof(Fracao));
      if(vet == NULL){
        exit(1);
      }
      scanf("%d/%d", &vet[i]->numerador, &vet[i]->denominador);
    }
    int none = 0;
    printf("Caso de teste %d\n", ++count);
    int j;
    for(i = 0; i < n; i++){
      for(j = i+1; j < n; j++){
        int bottom = (vet[i]->numerador * vet[j]->denominador);
        int top = (vet[i]->denominador * vet[j]->numerador); 
        if (top == bottom){
          printf("%d/%d equivalente a %d/%d\n", vet[i]->numerador, vet[i]->denominador, vet[j]->numerador, vet[j]->denominador);
          none++;
        }
      }
    }
    if (none == 0){
      printf("Nao ha fracoes equivalentes na sequencia\n");
    
    }
    free(vet);
  }
  return 0;
} 