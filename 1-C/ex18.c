#include <stdio.h>

int main (void) {

  int t = 0, i, k, j, numa, numb;
  int na1 =0, na2 = 0, na3 = 0, nb1 = 0, nb2 = 0, nb3 = 0;
  int invert1 = 0, invert2 = 0;

  scanf("%d", &t);
  for(i=0;i<t;i++){

  scanf("%d", &numa);
  scanf("%d", &numb);
  
  na1 = numa % 10;
  na2 = (numa % 100) - na1;
  na3 = numa / 100;
  invert1 = (na1 * 100) + (na2) + (na3);

  nb1 = numb % 10;
  nb2 = (numb % 100) - nb1;
  nb3 = numb / 100;
  invert2 = (nb1 * 100) + (nb2) + (nb3);
  
  if(invert1>invert2){
    printf("%d\n", invert1);
  } else printf("%d\n", invert2); 

  }
  return 0;
}