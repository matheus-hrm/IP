#include <stdio.h>

void ordena(int *x, int *y, int *z){
    if(*x>*z) troca(x, z);
    if(*x>*y) troca(x, y);
    if(*y>*z) troca(y, z);
}

void troca(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void){
    int x, y, z; 
    char n1, n2, n3; 

    
    scanf("%d %d %d\n", &x, &y, &z);
    scanf("%c %c %c", &n1, &n2, &n3);

    ordena(&x, &y, &z);

    if(n1=='A' && n2=='B' && n3=='C'){
        printf("%d %d %d\n", x, y, z);
    }else if(n1=='A' && n2=='C' && n3=='B'){
        printf("%d %d %d\n", x, z, y);
    }else if(n1=='B' && n2=='A' && n3=='C'){
        printf("%d %d %d", y, x, z);
    }else if(n1=='B' && n2=='C' && n3=='A'){ 
        printf("%d %d %d\n", y, z, x);
    }else if(n1=='C' && n2=='A' && n3=='B'){
        printf("%d %d %d\n", z, x, y);
    }else if(n1=='C' && n2=='B' && n3=='A'){
        printf("%d %d %d\n", z, y, x);
    }
    return 0;
}
