#include <stdio.h>
 /*Dados n e uma seqüência de n números inteiros, determinar o comprimento
máximo de um segmento crescente na sequência. O comprimento do segmento é dado pelo número de
elementos do segmento menos um*/

int main(void){
    int n, nmb, max, ant;
    int i, c;

    c = 0; //contador
    max = 0; //comprimento máximo
    ant = 0; //número anterior

    scanf("%d", &n); //n = tamanho da sequencia

    for(i=0;i<n;i++){ 
      scanf("%d", &nmb);
        if(nmb>ant){ //se o número for maior que o anterior
            c++; //incrementa o contador
            if(c>max){ //se o contador for maior que o comprimento máximo
                max = c; //o comprimento máximo passa a ser o contador
            }
        }else c = 1; //se o número for menor que o anterior, o contador volta a 1
          ant = nmb; //o número anterior passa a ser o número atual
    }
    printf("O comprimento do segmento crescente maximo e: %d\n", max-1);
  return 0;
}