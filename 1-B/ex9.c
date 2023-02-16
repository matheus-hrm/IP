#include <stdio.h>

int main(void)
{
  int numOriginal, unMilhar, unCentena, unDezena, unUnidade;

  scanf("%d", &numOriginal);

  if (numOriginal > 0 && numOriginal < 10000){
    
    if (numOriginal < 10) {
      
      unUnidade = numOriginal;
       
      if (unUnidade < 2) {
         
      printf("(primeira ordem) %d = %d unidade",numOriginal, unUnidade);
        
      return 0;
      
      } else if (unUnidade > 1) {
      
      printf("(primeira ordem) %d = %d unidades",numOriginal, unUnidade);  
      
      return 0;
      }    
    } else if (numOriginal < 100) {
      
      unDezena = numOriginal/10;
      unUnidade = numOriginal%10;
      
      if (unDezena > 1 && unUnidade > 1) {
         
        printf("(primeira ordem) %d = %d dezenas e %d unidades",numOriginal, unDezena, unUnidade);
        
        } else if (unDezena > 1 && unUnidade < 2) {
        
          printf("(segunda ordem) %d = %d dezenas + %d unidade",numOriginal, unDezena, unUnidade);

        } else if (unDezena < 2 && unUnidade > 1) {
          
          printf("(segunda ordem) %d = %d dezena + %d unidades",numOriginal, unDezena, unUnidade);
        
        } else if (unDezena < 2 && unUnidade < 2) {
          
          printf("(segunda ordem) %d = %d dezena + %d unidade",numOriginal, unDezena, unUnidade);
        }
    } else if (numOriginal < 1000) {
       
      unCentena = numOriginal/100;
      unDezena = (numOriginal%100)/10;
      unUnidade = (numOriginal%100)%10;

      if (unCentena > 1 && unDezena > 1 && unUnidade > 1) {
        
        printf("(terceira ordem) %d = %d centenas + %d dezenas + %d unidades = %d + %d + %d",numOriginal, unCentena, unDezena, unUnidade, unCentena * 100, unDezena * 10, unUnidade);

        } else if (unCentena > 1 && unDezena > 1 && unUnidade < 2) {
          
          printf("(terceira ordem) %d = %d centenas + %d dezenas + %d unidade = %d + %d + %d",numOriginal, unCentena, unDezena, unUnidade, unCentena * 100, unDezena * 10, unUnidade);
  
        } else if (unCentena > 1 && unDezena < 2 && unUnidade > 1) {
          
          printf("(terceira ordem) %d = %d centenas + %d dezena + %d unidades = %d + %d + %d",numOriginal, unCentena, unDezena, unUnidade, unCentena * 100, unDezena * 10, unUnidade);
  
        } else if (unCentena > 1 && unDezena < 2 && unUnidade < 2) {
          
          printf("(terceira ordem) %d = %d centenas + %d dezena + %d unidade = %d + %d + %d",numOriginal, unCentena, unDezena, unUnidade, unCentena * 100, unDezena * 10, unUnidade);
  
        } else if (unCentena < 2 && unDezena > 1 && unUnidade > 1) {
          
          printf("(terceira ordem) %d = %d centena + %d dezenas + %d unidades = %d + %d + %d",numOriginal, unCentena, unDezena, unUnidade, unCentena * 100, unDezena * 10, unUnidade);
  
        } else if (unCentena < 2 && unDezena > 1 && unUnidade < 2) {
          
          printf("(terceira ordem) %d = %d centena + %d dezenas + %d unidade = %d + %d + %d",numOriginal, unCentena, unDezena, unUnidade, unCentena * 100, unDezena * 10, unUnidade);
  
        } else if (unCentena < 2 && unDezena < 2 && unUnidade > 1) {
            
          printf("(terceira ordem) %d = %d centena + %d dezena + %d unidades = %d + %d + %d",numOriginal, unCentena, unDezena, unUnidade, unCentena * 100, unDezena * 10, unUnidade);
    
        } else if (unCentena < 2 && unDezena < 2 && unUnidade < 2) {
            
          printf("(terceira ordem) %d = %d centena + %d dezena + %d unidade = %d + %d + %d",numOriginal, unCentena, unDezena, unUnidade, unCentena * 100, unDezena * 10, unUnidade);
    
        }
    } else if (numOriginal < 10000) {

      unMilhar = numOriginal/1000;
      unCentena = (numOriginal%1000)/100;
      unDezena = ((numOriginal%1000)%100)/10;
      unUnidade = ((numOriginal%1000)%100)%10;

      if (unMilhar > 1 && unCentena > 1 && unDezena > 1 && unUnidade > 1) {
        
        printf("(quarta ordem) %d = %d milhares + %d centenas + %d dezenas + %d unidades = %d + %d + %d + %d",numOriginal, unMilhar, unCentena, unDezena, unUnidade, unMilhar * 1000, unCentena * 100, unDezena * 10, unUnidade);

        } else if (unMilhar > 1 && unCentena > 1 && unDezena > 1 && unUnidade < 2) {
          
          printf("(quarta ordem) %d = %d milhares + %d centenas + %d dezenas + %d unidade = %d + %d + %d + %d",numOriginal, unMilhar, unCentena, unDezena, unUnidade, unMilhar * 1000, unCentena * 100, unDezena * 10, unUnidade);
  
        } else if (unMilhar > 1 && unCentena > 1 && unDezena < 2 && unUnidade > 1) {
          
          printf("(quarta ordem) %d = %d milhares + %d centenas + %d dezena + %d unidades = %d + %d + %d + %d",numOriginal, unMilhar, unCentena, unDezena, unUnidade, unMilhar * 1000, unCentena * 100, unDezena * 10, unUnidade);
  
        } else if (unMilhar > 1 && unCentena > 1 && unDezena < 2 && unUnidade < 2) {
          
          printf("(quarta ordem) %d = %d milhares + %d centenas + %d dezena + %d unidade = %d + %d + %d + %d",numOriginal, unMilhar, unCentena, unDezena, unUnidade, unMilhar * 1000, unCentena * 100, unDezena * 10, unUnidade);
        
        } else if (unMilhar > 1 && unCentena < 2 && unDezena > 1 && unUnidade > 1) {
          
          printf("(quarta ordem) %d = %d milhares + %d centena + %d dezenas + %d unidades = %d + %d + %d + %d",numOriginal, unMilhar, unCentena, unDezena, unUnidade, unMilhar * 1000, unCentena * 100, unDezena * 10, unUnidade);
  
        } else if (unMilhar > 1 && unCentena < 2 && unDezena > 1 && unUnidade < 2) {
          
          printf("(quarta ordem) %d = %d milhares + %d centena + %d dezenas + %d unidade = %d + %d + %d + %d",numOriginal, unMilhar, unCentena, unDezena, unUnidade, unMilhar * 1000, unCentena * 100, unDezena * 10, unUnidade);
  
        } else if (unMilhar > 1 && unCentena < 2 && unDezena < 2 && unUnidade > 1) {
          
          printf("(quarta ordem) %d = %d milhares + %d centena + %d dezena + %d unidades = %d + %d + %d + %d",numOriginal, unMilhar, unCentena, unDezena, unUnidade, unMilhar * 1000, unCentena * 100, unDezena * 10, unUnidade);
  
        } else if (unMilhar > 1 && unCentena < 2 && unDezena < 2 && unUnidade < 2) {
          
          printf("(quarta ordem) %d = %d milhares + %d centena + %d dezena + %d unidade = %d + %d + %d + %d",numOriginal, unMilhar, unCentena, unDezena, unUnidade, unMilhar * 1000, unCentena * 100, unDezena * 10, unUnidade);
  
        } else if (unMilhar < 2 && unCentena > 1 && unDezena > 1 && unDezena > 1) {
          
          printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezenas + %d unidades = %d + %d + %d + %d",numOriginal, unMilhar, unCentena, unDezena, unUnidade, unMilhar * 1000, unCentena * 100, unDezena * 10, unUnidade);

        } else if (unMilhar < 2 && unCentena > 1 && unDezena > 1 && unUnidade < 2) {
          
          printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezenas + %d unidade = %d + %d + %d + %d",numOriginal, unMilhar, unCentena, unDezena, unUnidade, unMilhar * 1000, unCentena * 100, unDezena * 10, unUnidade);
  
        } else if (unMilhar < 2 && unCentena > 1 && unDezena < 2 && unUnidade > 1) {
          
          printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezena + %d unidades = %d + %d + %d + %d",numOriginal, unMilhar, unCentena, unDezena, unUnidade, unMilhar * 1000, unCentena * 100, unDezena * 10, unUnidade);
  
        } else if (unMilhar < 2 && unCentena > 1 && unDezena < 2 && unUnidade < 2) {
          
          printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezena + %d unidade = %d + %d + %d + %d",numOriginal, unMilhar, unCentena, unDezena, unUnidade, unMilhar * 1000, unCentena * 100, unDezena * 10, unUnidade);
        
        } else if (unMilhar < 2 && unCentena < 2 && unDezena > 1 && unUnidade > 1) {
          
          printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezenas + %d unidades = %d + %d + %d + %d",numOriginal, unMilhar, unCentena, unDezena, unUnidade, unMilhar * 1000, unCentena * 100, unDezena * 10, unUnidade);
        } else if (unMilhar < 2 && unCentena < 2 && unDezena > 1 && unUnidade < 2) {
          
          printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezenas + %d unidade = %d + %d + %d + %d",numOriginal, unMilhar, unCentena, unDezena, unUnidade, unMilhar * 1000, unCentena * 100, unDezena * 10, unUnidade);
  
        } else if (unMilhar < 2 && unCentena < 2 && unDezena < 2 && unUnidade > 1) {
          
          printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezena + %d unidades = %d + %d + %d + %d",numOriginal, unMilhar, unCentena, unDezena, unUnidade, unMilhar * 1000, unCentena * 100, unDezena * 10, unUnidade);
  
        } else if (unMilhar < 2 && unCentena < 2 && unDezena < 2 && unUnidade < 2) {
          
          printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezena + %d unidade = %d + %d + %d + %d",numOriginal, unMilhar, unCentena, unDezena, unUnidade, unMilhar * 1000, unCentena * 100, unDezena * 10, unUnidade);
  
        }
    }
  } else printf("Numero invalido!");

  return 0;
}