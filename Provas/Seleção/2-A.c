#include <stdio.h>

int main(void){


  int media1, media2, media3;
  double sobrinho1n1, sobrinho1n2, sobrinho1n3;
  double sobrinho2n1, sobrinho2n2, sobrinho2n3;
  double sobrinho3n1, sobrinho3n2, sobrinho3n3;

  scanf("%lf %lf %lf", &sobrinho1n1, &sobrinho1n2, &sobrinho1n3);
  scanf("%lf %lf %lf", &sobrinho2n1, &sobrinho2n2, &sobrinho2n3);
  scanf("%lf %lf %lf", &sobrinho3n1, &sobrinho3n2, &sobrinho3n3);

  media1 = (int) (sobrinho1n1 + sobrinho1n2 + sobrinho1n3)/3;
  media2 = (int) (sobrinho2n1 + sobrinho2n2 + sobrinho2n3)/3;
  media3 = (int) (sobrinho3n1 + sobrinho3n2 + sobrinho3n3)/3;

  

  if (media1 > media2 && media2 > media3){
    printf("Total de doces a comprar: %d\n",(media1*3)+(media2*2)+(media3*1));
    printf("%d doces para o sobrinho com media %d\n", media1*3, media1);
    printf("%d doces para o sobrinho com media %d\n", media2*2, media2);
    printf("%d doces para o sobrinho com media %d\n", media3*1, media3);
  
  }else if(media1>media2 && media3>media2){
    printf("Total de doces a comprar: %d\n",(media1*3)+(media3*2)+(media2*1));
    printf("%d doces para o sobrinho com media %d\n", media1*3, media1);
    printf("%d doces para o sobrinho com media %d\n", media3*2, media3);
    printf("%d doces para o sobrinho com media %d\n", media2*1, media2); 

  }else if(media2> media1 && media1 > media3){
    printf("Total de doces a comprar: %d\n",(media2*3)+(media1*2)+(media3*1));
    printf("%d doces para o sobrinho com media %d\n", media2*3, media2);
    printf("%d doces para o sobrinho com media %d\n", media1*2, media1);
    printf("%d doces para o sobrinho com media %d\n", media3*1, media3);
  
  }else if(media2>media3 && media3>media1){
    printf("Total de doces a comprar: %d\n",(media2*3)+(media3*2)+(media1*1));  
    printf("%d doces para o sobrinho com media %d\n", media2*3, media2);
    printf("%d doces para o sobrinho com media %d\n", media3*2, media3);
    printf("%d doces para o sobrinho com media %d\n", media1*1, media1);
  
  }else if (media3 > media1 && media1 > media2){
    printf("Total de doces a comprar: %d\n",(media3*3)+(media1*2)+(media2*1));
    printf("%d doces para o sobrinho com media %d\n", media3*3, media3);
    printf("%d doces para o sobrinho com media %d\n", media1*2, media1);
    printf("%d doces para o sobrinho com media %d\n", media2*1, media2);

  }else if(media3 > media2 && media2 > media1){
    printf("Total de doces a comprar: %d\n",(media3*3)+(media2*2)+(media1*1));
    printf("%d doces para o sobrinho com media %d\n", media3*3, media3);
    printf("%d doces para o sobrinho com media %d\n", media2*2, media2);
    printf("%d doces para o sobrinho com media %d\n", media1*1, media1);

  }
  return 0; 
}