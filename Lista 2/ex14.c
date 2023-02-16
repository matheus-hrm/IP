#include <stdio.h>

double fmediana(double *vetor, int n){
  int i, j, aux;
  for(i = 0; i < n-1; i++){
    for(j = i+1; j < n; j++){
      if(vetor[j] < vetor[i]){
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }
  if(n%2 == 0){
    return (vetor[n/2] + vetor[(n/2)-1])/2;
  }
  else{
    return vetor[n/2];
  }

}

int main(void){

  int entradas, i ,j;

  scanf("%d", &entradas);

  double vetor[entradas], mediana = 0;

  for(i = 0; i < entradas; i++){
    scanf("%lf", &vetor[i]);
  }
  
  printf("%.2lf\n", fmediana(vetor, entradas));
}