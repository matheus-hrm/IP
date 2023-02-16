#include <stdio.h>

int main(){
  double raio, altura;
  double valor, circulo, cilindro, area;
  
  scanf("%lf", &raio);
  
  scanf("%lf", &altura);
  
  circulo = 3.14 * (raio * raio);
  cilindro = 2 * 3.14159 * raio * altura;
  area = (2 * circulo) + cilindro;
  valor = area * 100;
  
  printf("O VALOR DO CUSTO E = %.2lf\n",valor);
  
  return  0;
}