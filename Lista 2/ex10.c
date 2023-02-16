#include <stdio.h>

int main(void){

  int quantidadeNotas, i, indiceMaiorNota = 0, contador = 0;

  scanf("%d", &quantidadeNotas);

  int notas[quantidadeNotas], maiornota = 0;
  //exibe o valor da ultima nota e quantas vezes ela aparece
  //exibe a maior nota informada e a posiçao dela no vetor

  for(i = 0; i < quantidadeNotas; i++){
    scanf("%d", &notas[i]);
  }


  for(i = 0; i < quantidadeNotas; i++){
    if(notas[i] > maiornota) indiceMaiorNota = i, maiornota = notas[i];
    if(notas[i] == notas[quantidadeNotas-1]) contador++;
  }

  printf("Nota %d, %d vezes\n",notas[quantidadeNotas-1],contador);
  printf("Nota %d, indice %d", maiornota, indiceMaiorNota);
 
  return 0;
}