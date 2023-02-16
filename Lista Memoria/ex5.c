#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main(void){
  int n;
  scanf("%d", &n);


  typedef struct curso{
  int codigo;
  double valor;
  char nome[100];
} curso;

typedef struct aluno{
    char nome[500];
    int codigo;
    int creditos;
}aluno;
  
  int i;

  curso *c = (curso*) malloc(n * sizeof(curso));
  if (c == NULL){
    exit(1);
  }
  

  for(i = 0; i < n; i++){
    scanf("%d", &c[i].codigo);
    scanf("%lf", &c[i].valor);
    scanf("%[^\n]", c[i].nome);
  }
  
  int m;
  scanf("%d", &m);

  aluno *a = (aluno*) malloc(m * sizeof(aluno));
  if (a == NULL){
    exit(1);
  }

  for(i = 0; i < m; i++){
    getchar();
    scanf("%[^\n]s", a[i].nome);
    scanf("%d", &a[i].codigo);
    scanf("%d", &a[i].creditos);
  } 


  int j;

  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      if(c[i].codigo == a[j].codigo){
        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n", a[j].nome, c[i].nome, a[j].creditos, c[i].valor, c[i].valor * a[j].creditos);
      }
    }
  }
  free(c);
  free(a);

  return 0;

}