#include <stdio.h>

void printfreq(int freq[]){
  int i;
  printf("(");
  for(i=0; i<5; i++){
    if(i == 4){
      printf("%d", freq[i]);
    }
    else printf("%d,", freq[i]);
  }
  printf(")\n");
}

int freqdistance(int str[],int str2[]){
  int i, j;
  double sum = 0;
  for(i = 0; i < 5; i++){
    sum += pow((str[i] - str2[i]), 2);
  }
  printf("%.2lf",sqrt(sum));
}

int main(void){

  char str[1001], str2[1001], fim[1];
  int freq[5] = {0}, freq2[5] = {0};

  int i;

  scanf("%[^;] %[;^] %[^\n]", str,fim, str2);

  if(fim[0] == ';')
  {
  for(i=0; str[i] != '\0'; i++){
    switch (str[i]){
      case 'a':
        freq[0]++;
        break;

      case 'e':
        freq[1]++;
        break;

      case 'i':
        freq[2]++;
        break;

      case 'o':
        freq[3]++;
        break;

      case 'u':
        freq[4]++;
        break;

      case 'A':
        freq[0]++;
        break;
      
      case 'E':
        freq[1]++;
        break;
      
      case 'I':
        freq[2]++;
        break;
      
      case 'O':
        freq[3]++;
        break;
      
      case 'U':
        freq[4]++;
        break;
    }
  }
  for(i=0; str2[i] != '\0'; i++){
    switch (str2[i]){
      case 'a':
        freq2[0]++;
        break;

      case 'e':
        freq2[1]++;
        break;

      case 'i':
        freq2[2]++;
        break;

      case 'o':
        freq2[3]++;
        break;

      case 'u':
        freq2[4]++;
        break;

      case 'A':
        freq2[0]++;
        break;
      
      case 'E':
        freq2[1]++;
        break;
      
      case 'I':
        freq2[2]++;
        break;
      
      case 'O':
        freq2[3]++;
        break;
      
      case 'U':
        freq2[4]++;
        break;
    }
  }

  printfreq(freq);
  printfreq(freq2);
  freqdistance(freq, freq2);
  }
  else printf("FORMATO INVALIDO!"); 
  return 0;
}
