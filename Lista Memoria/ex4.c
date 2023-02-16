#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct Vetor{
    double x;
    double y;
    double z;
    double w;
    double norma;
} Vetor;

Vetor *v;

void ordenaVetor(Vetor *v){
    int i, j;
    Vetor aux;
    for(i = 0; i < 4; i++){
        for(j = i+1; j < 4; j++){
            if(v[i].norma > v[j].norma){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}


void imprimeVetor(Vetor *v){
    int i;
    for(i = 0; i < 4; i++){
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) - Norma: %.2lf \n", v[i].x, v[i].y, v[i].z, v[i].w, v[i].norma);
    }
}

void liberaVetor(Vetor *v){
    free(v);
}

int main (void) {
    int testes, i;
    scanf("%d", &testes);

    Vetor *v = (Vetor*) malloc(testes * sizeof(Vetor));
    if(v == NULL){
        exit(1);
    }

    for(i = 0; i < testes; i++){
        scanf("%lf %lf %lf %lf", &v[i].x, &v[i].y, &v[i].z, &v[i].w);
        v[i].norma = sqrt(pow(v[i].x,2) + pow(v[i].y,2) + pow(v[i].z,2) + pow(v[i].w,2));
    }
    
    
    ordenaVetor(v);
    imprimeVetor(v);
    liberaVetor(v);

    return 0;
}