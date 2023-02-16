#include <stdio.h>

int main(){
  int n, i = 0;
  int npessoas;
  double pop, geral, arq, cad;
  double renda;
  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d %lf %lf %lf %lf", &npessoas, &pop, &geral, &arq, &cad);
    
    renda = npessoas*(pop/100) + npessoas*5.0*(geral/100) + npessoas*10.0*(arq/100) + npessoas*20.0*(cad/100);
    
    printf("A RENDA DO JOGO N. %d E = %.2lf\n",i+1, renda);
    
  }
  return 0;
}