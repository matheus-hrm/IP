#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_MAX 3

typedef struct frac {
  int numerador;
  int denominador;
} Fracao;


int main (void) {
  
  Fracao *vet = (Fracao*) malloc(sizeof(Fracao) * TAM_MAX);
  int testes;
  int count = 0;
  int tam = TAM_MAX;
  char espaco;
  
  scanf("%d", &testes);
  
  while (testes--){
    int i = 0;
    int j;
    scanf("%d/%d%c", &vet[i].numerador, &vet[i].denominador,&espaco);
    while(espaco != '\n') {
		i++;
		if (i == tam){
			Fracao *aux=realloc(vet, sizeof(Fracao) * (i+1));
			if(!aux){
				exit(1);
			}
			tam = i+1;
			vet=aux; //Fazer vet receber o endereco da area realocada
		}
		scanf("%d/%d%c", &vet[i].numerador, &vet[i].denominador,&espaco);
    }
    int k = i;
    int none = 0;
    printf("Caso de teste %d\n", ++count);
    for(i = 0; i < tam; i++){
      for (j = i+1; j < tam; j++){
        int bottom =  (vet[i].numerador * vet[j].denominador);
        int top = (vet[i].denominador * vet[j].numerador);
        if(top == bottom){
          printf("%d/%d equivalente a %d/%d\n", vet[i].numerador, vet[i].denominador, vet[j].numerador, vet[j].denominador);
          none++;
        }
      }
    }
    if (none == 0){
      printf("Nao ha fracoes equivalentes na sequencia\n");
   
    }
    
  }
  free(vet);
  return 0;
}