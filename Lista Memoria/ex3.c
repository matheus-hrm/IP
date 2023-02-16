#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *saudacoes[24] = { "Feliz Natal!", "Frohliche Weihnachten!", "Frohe Weihnacht!", "Chuk Sung Tan!",
				"Feliz Navidad!", "Kala Christougena!", "Merry Christmas!", "Merry Christmas!",
				"Merry Christmas!", "Feliz Natal!", "God Jul!", "Mutlu Noeller", "Feliz Navidad!",
				"Feliz Navidad!", "Feliz Navidad!", "Merry Christmas!", "Merry Christmas!", "Nollaig Shona Dhuit!",
				"Zalig Kerstfeest!", "Buon Natale!", "Buon Natale!", "Milad Mubarak!", "Milad Mubarak!", "Merii Kurisumasu!" };

char *paises[24] = {"brasil", "alemanha","austria", "coreia", "espanha", "grecia", "estados-unidos", 
                "inglaterra", "australia", "portugal", "suecia", "turquia", "argentina",
                "chile", "mexico", "antardida", "canada", "irlanda", "belgica", "italia",
                "libia", "siria", "marrocos", "japao"};

typedef struct traduzir{ 
    char saudacao[24];
    char pais[24];
} traduz;

traduz *vet[24];

char buffer[24];

int main(){ 

    int i = 0;  
        
    for(i = 0; i<24; i++){
        vet[i] = (traduz *) malloc (sizeof(traduz));
        strcpy(vet[i]->saudacao, saudacoes[i]);
        strcpy(vet[i]->pais, paises[i]);
        if (vet[i] == NULL){
            exit(1);
        }
    } 
    int c = 0;
    
    while(scanf("%s", buffer) != EOF){
        c = 0;
        for(i = 0; i<24; i++){
            if(strcmp(buffer, vet[i]->pais) == 0){
                printf("%s\n", vet[i]->saudacao);
                c++;
            }
        }
        if(c == 0){
            printf("-- NOT FOUND --\n");
        }     

    }   
    
    for(i = 0; i<24; i++){
        free(vet[i]);
    }
    return 0;
} 

  
  