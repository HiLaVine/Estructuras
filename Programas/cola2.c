#include<stdio.h>
#include<stdlib.h>
#include"C:\Programacion\Estructuras3\Elem\Elem.h"
#include"C:\Programacion\Estructuras3\cola\Coola.h"

void carrusel(Cola);
int tarea(Cola);

int main()
{
	Cola q=nueva();
	q=formar(formar(formar(formar(formar(nueva(),4),6),2),7),5);
	ImpCola(q);
	return 0;
}

void carrusel(Cola q){
	int i;
	for(i=1;i<=10;){
		ImpElem(primero(q));
		formar(desformar(q), primero(q));
		getchar();
	}
}

