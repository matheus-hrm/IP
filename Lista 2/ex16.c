#include <stdio.h>

int main(void){

  int alunos, presencas, i, j, soma = 0;

  scanf("%d %d", &alunos, &presencas);

  int vetor[alunos];

  for(i = 0; i < alunos; i++){
    scanf("%d", &vetor[i]);
  }

  for(i = 0; i < alunos; i++){
    if(vetor[i] <= 0)
    soma++;
  }

  if(soma < presencas){
    printf("SIM");
  } else {
    printf("NAO\n");
    for(i = alunos; i > -1; i--){
      if(vetor[i] <= 0) printf("%d\n", i+1);
    }
  }

  return 0;
}