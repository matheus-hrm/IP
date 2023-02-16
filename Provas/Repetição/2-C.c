#include <stdio.h>
#define S 1

int main(void){

  int i,j, temp = 0;
  double aprovados = 0; 
  double taxaaprovacao[20], taxantiga = 0;
  int numcursos, curso[20], alunos, matricula;
  char resposta;

  scanf("%d", &numcursos);

    for( i=0; i<numcursos; i++){
      alunos = 0;
      aprovados = 0;
      scanf("%d", &curso[i]);
      scanf("%d", &alunos);
      for(j=0; j<alunos; j++){
        scanf("%d %c", &matricula, &resposta);
        if(resposta == 1 || resposta == 'S'){
          aprovados++;
        }
      }
      taxaaprovacao[i] = (aprovados/alunos)*100;
      if(taxaaprovacao[i]>taxantiga){
        taxantiga = taxaaprovacao[i];
        temp = curso[i];
      }
    }
    for(i=0; i<numcursos; i++){
      printf("Curso %d\nPorcentagem de alunos que farao o exame %.2lf\n", curso[i], taxaaprovacao[i]);
    }
    printf("O curso com o maior numero de alunos escolhido e = %d\n",temp);
  
  return 0;
}