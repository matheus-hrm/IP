#include <stdio.h>

void ordena(float *v, int alunos, int matricula[]){
  int i, j;
  float aux;
  int troca;
  for(i=0;i<alunos;i++){
    for(j=i+1;j<alunos;j++){
      if(v[i] > v[j]){
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
        troca = matricula[i];
        matricula[i] = matricula[j];
        matricula[j] = troca;
      }
    }
  }
}

int main(void){
  int alunos;

  scanf("%d", &alunos);

    int matricula[alunos];
    float nota[alunos];
    int i;

    for(i=0;i<alunos;i++){
      scanf("%d %f", &matricula[i], &nota[i]);
    }
    
    ordena(nota, alunos, matricula);
    
    int j = 1;
    
    for(i=alunos-1;i>=0;i--){  
      printf("%d - Matricula: %d - Nota: %.1f\n",j, matricula[i], nota[i]);
      j++;
    }
  
  return 0;
}