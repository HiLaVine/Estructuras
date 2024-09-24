#include<stdio.h>
#include<stdlib.h>
#define TAM_ENT 100

int particion(int[], int);
void quicksort(int[], int);

int main(){
	int i,n,datos[TAM_ENT];

	srand(1);

	for(i=0;i<TAM_ENT;i++)
		datos[i]=rand()%TAM_ENT;

	printf("Arreglo sin ordenar: \n");

	for(i=0;i<TAM_ENT;i++)
		printf("%d\t", datos[i]);
	
	
	quicksort(datos,TAM_ENT);

	printf("\nArreglo ordenado: \n");

	for(i=0;i<TAM_ENT;i++)
		printf("%d\t", datos[i]);
	
	return 0;
}

int particion(int a[], int n){
	int p=0, q=1, k=0, m=0;

	while((p<(n-1)) && (q<n)){
		while((q<n) && (a[p]<a[q]))
			q++;
		if (q<n){
			m=a[q];
			for(k=q;k>p;k--)
				a[k]=a[k-1];
			a[p]=m;
			p++; q=p+1;
		}
	}
	return p;
}

void quicksort (int a[], int n){
	int p;
	if (n>1){
		p=particion(a,n);
		quicksort(a,p);
		quicksort(a+p+1, n-p-1);
	}
}

