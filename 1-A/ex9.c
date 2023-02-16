#include <stdio.h>

int main(){
  
  double massa, aceleracao, tempo;
  double pista, trabalho, velocidade;

  scanf("%lf", &massa); //massa em toneladas cv pra metros
  scanf("%lf", &aceleracao);
  scanf("%lf", &tempo); // tempo gasto na decolagem
  
  velocidade = aceleracao * tempo;
  
  printf("VELOCIDADE = %.2lf\n",velocidade * 3.6);
  
  pista = (aceleracao * tempo * tempo) / 2;

  printf("ESPACO PERCORRIDO = %.2lf\n", pista);

  trabalho = ((massa*1000) * (velocidade * velocidade)) / 2;

  printf("TRABALHO REALIZADO = %.2lf\n", trabalho); 
  return 0;
}
