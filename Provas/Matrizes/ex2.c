#include <stdio.h>

/*Escreva um programa para ler matrizes quadradas e verificar se elas são matrizes identidade ou não.
Uma matriz quadrada é denominada matriz identidade se: a) a sua diagonal principal contém apenas o
número 1 e, b) todos os elementos da matriz que não estão na diagonal principal são iguais a zero.*/

int main(void){

  int testes;

  scanf("%d", &testes);

  while(testes--){
    int d;

    scanf("%d", &d);

    int matriz[d][d];

    int i, j;

    for(i = 0; i < d; i++){
      for(j = 0; j < d; j++){
        scanf("%d", &matriz[i][j]);
      }
    }
    int cont = 0;
    for(i = 0; i < d; i++){
      if(cont > 0) break;
      for(j = 0; j < d; j++){
        if(i == j && matriz[i][j] != 1){
          printf("Nao identidade");
          cont++;
          break;
        } else if(i != j && matriz[i][j] != 0){
          printf("Nao identidade");
          cont++;
          break;
        }else if (i == d - 1 && j == d - 1){
          printf("Identidade");
          break;
        }
      }
    }
    printf("\n");
  }

  return 0;
}
