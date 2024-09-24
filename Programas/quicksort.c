#include<stdio.h>
#include"C:\Programacion\Estructuras3\Ordenamiento\ordenamiento.h"

int main(){
	int i,n,a[100];

	for(i=0;i<10;i++)
		scanf("%d", &(a[i]));

	quicksort(a,10);

	printf("Arreglo ordenado: \n");

	for(i=0;i<10;i++)
		printf("%d\t", a[i]);

	return 0;
}
