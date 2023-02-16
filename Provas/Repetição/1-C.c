#include <stdio.h>
#define FEMININO 1
#define MASCULINO 2



int main(void){

  int numentrevistados, sim = 0, nao = 0; 
  int i, homens = 0, mulheres = 0;
  double feminino_sim = 0, masculino_nao = 0;
  double percent_feminino_sim = 0, percent_masculino_nao = 0;

  scanf("%d", &numentrevistados);

  for(i=0;i<numentrevistados;i++){
    int sexo, resposta;
    
    scanf("%d %d", &sexo, &resposta);
    
    if(sexo == FEMININO && resposta == 1){
      feminino_sim++;
    }else if(sexo == MASCULINO && resposta == 2){
      masculino_nao++;
    }
    if(sexo == MASCULINO) homens++;
    if(sexo == FEMININO) mulheres++;
    if(resposta == 1){
      sim++;
    }else nao++; 
  
  }
  
  percent_feminino_sim = (feminino_sim/mulheres)*100;
  percent_masculino_nao = (masculino_nao/homens)*100;

  printf("SIM = %d\n", sim);
  printf("NAO = %d\n", nao);
  printf("FEMININO - SIM = %.2lf\n", percent_feminino_sim);
  printf("MASCULINO - NAO = %.2lf\n", percent_masculino_nao);

  return 0;
}