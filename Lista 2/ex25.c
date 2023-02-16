#include <stdio.h>

int checaacertos(int dezenas[], int numaposta[]){
  int acertos = 0;
  int i, j;
  for(i=0; i<6; i++){
    for(j=0; j<6; j++){
      if(dezenas[i] == numaposta[j]){
        acertos++;
      }
    }
  }
  return acertos;
}

void printresults(int sena, int quina, int quadra){
  if(sena == 0){
    printf("Nao houve acertador para sena\n"); 
  }else{
    printf("Houve %d acertador(es) da sena\n", sena);
  }
  if(quina == 0){
    printf("Nao houve acertador para quina\n");
  }else{
    printf("Houve %d acertador(es) da quina\n", quina);
  }
  if(quadra == 0){
    printf("Nao houve acertador para quadra\n");
  }else{
    printf("Houve %d acertador(es) da quadra\n", quadra);
  }
}

int main(void){

  int dezenas[6];
  int i, j=0, quadra = 0, quina = 0, sena = 0;

  for(i=0; i<6; i++){
    scanf("%d", &dezenas[i]);
  }

  int apostas;

  scanf("%d", &apostas);

  while(apostas--){
    int numaposta[6];
    int acertos = 0;
    
    for(i=0; i<6; i++){
      scanf("%d", &numaposta[i]);
    }
    
    acertos = checaacertos(dezenas, numaposta);
    
    if(acertos == 4) quadra++;  
    if(acertos == 5)  quina++;
    if(acertos == 6)   sena++;
    acertos = 0;
  }
  printresults(sena, quina, quadra);
  return 0;
}