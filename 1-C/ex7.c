#include <stdio.h>

int main(void){

  int matricula, i = 0;
  double notafinal,
         nota1, lista1,
         nota2, lista2,
         nota3, lista3,
         nota4, lista4,
         nota5, lista5,
         nota6, frequencia,
         nota7, mediaprova,
         nota8, medialista;
  double trabalhofinal;

  while(matricula != -1){
    scanf("%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &matricula, &nota1, &nota2, &nota3, &nota4, &nota5, &nota6, &nota7, &nota8, &lista1, &lista2, &lista3, &lista4, &lista5, &trabalhofinal, &frequencia);

    if(matricula == -1){
      break;
    } else {
      mediaprova = (nota1 + nota2 + nota3 + nota4 + nota5 + nota6 + nota7 + nota8) / 8;
      medialista = (lista1 + lista2 + lista3 + lista4 + lista5) / 5;
      notafinal = (mediaprova * 0.7) + (medialista * 0.15)+ (trabalhofinal * 0.15);
      if (notafinal > 6 && frequencia > 96)
      {
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n", matricula, notafinal);
      } else if(notafinal < 6 && frequencia > 96){
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", matricula, notafinal);
      } else if(notafinal > 6 && frequencia < 96){
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, notafinal);
      } else if(notafinal < 6 && frequencia < 96){
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, notafinal);
      }
      
    }
  }
  
  
  return 0;
}
