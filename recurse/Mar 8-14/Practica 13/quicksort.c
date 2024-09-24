#include <stdlib.h>
#include <stdio.h>
#include "ordena.h"
#define TAM_ENT 10000

int main(){
  srand(1);
int vector[TAM_ENT],i, c=0, cont, j;
  for(i=0;i<TAM_ENT;i++)
	  vector[i]=i;
	for(j=0;j<TAM_ENT;j+=100){
		cont=0;

      quicksort(vector,c,j-1, &cont);

    printf("%d\t%d\n", j, cont);
  }
	return 0;
}
 

