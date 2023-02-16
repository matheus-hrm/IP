#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//new strcat function

char newstrcat(char *s1, char *s2) {
    char *s = malloc(strlen(s1) + strlen(s2) + 1);
    if(s == NULL) {
        printf("NAO HOUVE MEMORIA PARA A CONCATENACAO\n");
        exit(1);
    }
    int i, j;
    while (s1[i] != '\0') {
        s[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0') {
        s[i] = s2[j];
        i++;
        j++;
    }
    s[i] = '\0';
    return *s;
    free(s);
}

int main(void) {
    int n;
    scanf("%d", &n);
    int i = 0;
    
    char s1[200];
    char s2[200];  
    while (i < n) {
        scanf("%[^\n]s", s1);
        getchar();
        scanf("%[^\n]s", s2);
        getchar();
        char *s = newstrcat(s1, s2);
        printf("%s ", s);
        i++;
    }
    return 0;
}