#include<stdio.h>
#include"C:\Programacion\Estructuras3\Arreglos\arreglos.h"
#include"C:\Programacion\Estructuras3\Ordenamiento\ordenamiento.h"

int busqbin(int [], int);

int main(){

	int a[100], e, n;
	printf("De cuantas posiciones quiere su arreglo: \n");
	scanf("%d",&n);
	printf("Ingrese %d datos: \n", n);
	LeeArreglo(arreglo, n);
	Burbuja(a,n);
	Imparreglo(arreglo, n);
	printf("Cual es el elemento que buscas?\n");
	scanf("%d",&t);
	i=busqbin(a,n,t);
	t>=0?printf("El elemnto %d esta en %d\n", t, i);
		printf("El elemto %d no esta en el arreglo.\n");



	return 0;
}

int busqbin(int a[], int n, int t){
	int i=0, d=n-1, m=(d-i)/2;

	while (i<d){
		if (t==a[m])
			return m;
		else if(t<a[m]){
			i=m;
			m=(d-i)/2;
		}else{
			d=m;
			m=(d-i)/2;
		}

	}
	return -1;
}