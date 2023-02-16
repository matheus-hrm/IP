#include <stdio.h>
#define N_MAX 499999

int main (void){

  int n1, n2, j, k, i;

  scanf("%d %d",&n1, &n2);

  int vet1[n1], vet2[n2];
  int vet3[(n1+n2)];

  for(i=0;i<n1;i++)
    scanf("%d",&vet1[i]);
  
  for(i = 0; i<n2; i++)
    scanf("%d",&vet2[i]);
  
  for(i=0,j=0,k=0;j<(n1+n2);){
    if(vet1[k]>vet2[j]){
      vet3[i] = vet2[j];
      j++; i++;
    } else {
      vet3[i] = vet1[k];
      k++; i++;
    }
  }
  
  for(i=0;i<(n1+n2);i++){
    printf("%d\n",vet3[i]);
  }

  return 0;
}