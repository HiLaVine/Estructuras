#include<stdio.h>
#include<stdlib.h>
#include"C:\Programacion\Estructuras3\Elem\Elem.h"
#include"C:\Programacion\Estructuras3\Bicola\Bicola.h"

int main(){

	BiCola q=nuevaBi();

	esnuevaBi(q)? puts("si"): puts("no");

	formarBiIzq(12,q);

	ImpElem(izquierdoBi(q));

	formarBiDer(q,5);

	ImpElem(derechoBi(q));
}