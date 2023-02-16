#include <stdio.h>

int main(void)
{
  unsigned long int data;
  unsigned int mes, dia, ano;

  scanf("%u", &data);

  dia = data/1000000;
  mes = data/10000%100;
  ano = data%10000;
  
  //meses com 31 dias = 1, 3, 5, 7, 8, 10, 12
  //meses com 30 dias = 4, 6, 9, 11
  //mes com 28 dias = 2

  if (dia>31 || mes>12 || dia == 0 || mes == 0) {
    printf("Data invalida!");
  
  } else if(mes == 2 && dia > 28){ 
  
    printf("Data invalida!");
  
  } else if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30){
  
    printf("Data invalida!");
  
  } else if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && dia > 31){

    printf("Data invalida!");
  
  } else if (mes == 1) {
      printf("%u de janeiro de %u", dia, ano);
    
    } else if (mes == 2) {
    
      printf("%u de fevereiro de %u", dia, ano);
    
    } else if (mes == 3) {
    
      printf("%u de março de %u", dia, ano);
    
    } else if (mes == 4) {
    
      printf("%u de abril de %u", dia, ano);
    
    } else if (mes == 5) {
    
      printf("%u de maio de %u", dia, ano);
    
    } else if (mes == 6) {
    
      printf("%u de junho de %u", dia, ano);
    
    } else if (mes == 7) {
    
      printf("%u de julho de %u", dia, ano);
    
    } else if (mes == 8) {
    
      printf("%u de agosto de %u", dia, ano);
    
    } else if (mes == 9) {
    
      printf("%u de setembro de %u", dia, ano);
    
    } else if (mes == 10) {
    
      printf("%u de outubro de %u", dia, ano);
    
    } else if (mes == 11) {
    
      printf("%u de novembro de %u", dia, ano);
    
    } else if (mes == 12) {
    
      printf("%u de dezembro de %u", dia, ano);
    }
  
  return 0;
}