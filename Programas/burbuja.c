#include<stdio.h>
#include<stdlib.h>
#include"C:\Programacion\Estructuras3\Elem\Elem.h"
#include"C:\Programacion\Estructuras3\Arreglos\arreglos.h"
#include"C:\Programacion\Estructuras3\Ordenamiento\ordenamiento.h"

void seleccion(int[], int);

int main(){

	int a[100], dato;
	int n=0, i=0;

	printf("Dame los datos a ordenar\n");
	scanf("%d",n);
	LeeArreglo(a, n);

	Burbuja(a,n);

	ImpArreglo(a, n);


}

