#include <stdlib.h>
#include <stdio.h>
#define TAM_ENT 100

 
 int main()
 {
	int vector[TAM_ENT], numElem,i;
    srand(1);

  for(i=0;i<TAM_ENT;i++)
	  vector[i]=i;

  printf("Arreglo sin ordenar: \n");

  for(i=1;i<=TAM_ENT;i++)
		printf("%d\t", vector[i]);

return 0;
}
	
	