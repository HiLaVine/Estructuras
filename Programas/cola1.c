#include<stdio.h>
#include<stdlib.h>
#include"C:\Programacion\Estructuras3\Elem\Elem.h"
#include"C:\Programacion\Estructuras3\cola\cola.h"

int main(){

	Cola a=nueva();

	a=formar(formar(formar(formar(nueva(),1),2),3),4);
	ImpElem(primero(a));
	ImpElem(primero(desformar(a)));
	ImpElem(primero(a));
	return 0;
}