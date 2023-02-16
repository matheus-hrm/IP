#include <stdio.h>

int main(void)
{
  int conteudo, dureza, resistencia, grau;
  
  scanf("%d\n", &conteudo);
  scanf("%d\n", &dureza);
  scanf("%d", &resistencia);
  
  if (conteudo >= 7 && dureza < 50 && resistencia < 80000) {
    printf("ACO DE GRAU = 7");
  } else if (conteudo < 7 && dureza < 50 && resistencia < 80000) {
    printf("ACO DE GRAU = 8");
  } else if (conteudo < 7 && dureza >= 50 && resistencia <= 80000) {
    printf("ACO DE GRAU = 9");
  } else if (conteudo < 7 && dureza >= 50 && resistencia >= 80000) {
    printf("ACO DE GRAU = 10");
  }
  return 0;
}