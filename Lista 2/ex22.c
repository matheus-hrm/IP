#include <stdio.h>

int main(void){

	int n, d, nApagados, tamanhoNumero, topo, i;
	char numero[100001], entrada;

	scanf("%d %d", &n, &d);

	while(n != 0 || d != 0){
		
		nApagados = 0;
		topo = -1;
		tamanhoNumero = n - d;

		for(i = 0; i < n; i++){

			scanf(" %c", &entrada);
			
			while(nApagados < d && topo > -1 && entrada > numero[topo]){
				nApagados++;
				topo--;
			}

			if(tamanhoNumero > topo+1){
				topo++;
				numero[topo] = entrada;
			}
		}

		numero[topo+1] = '\0';

		printf("%s\n", numero);
		scanf("%d %d", &n, &d);
	}

	return 0;
}
