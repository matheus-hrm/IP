#include <stdio.h>

int main(){
  double nota1, nota2, nota3, media;

  scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

  media = (nota1 + nota2 + nota3) / 3.0;

  if (media < 6.0){
    printf("MEDIA = %.2lf\n", media);
    printf("REPROVADO\n");
  } else {
    printf("MEDIA = %.2lf\n", media);
    printf("APROVADO\n");
    
  }
  return 0;
}