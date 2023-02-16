#include <stdio.h>

int main(void){
  int num;
  int centena, dezena, unidade;
  int novo_num, novo_num2;
  
  scanf("%d", &num);

  centena = num / 100;
  dezena = (num % 100) / 10;
  unidade = (num % 100) % 10;

  novo_num = (centena) + (dezena * 3) + (unidade * 5);
  novo_num2 = novo_num%7;
  
  printf("O NOVO NUMERO E = %d%d",num, novo_num2);


  return 0;
}