#include<stdio.h>
#include<stdlib.h>
#include"C:\Programacion\Estructuras3\Elem\Elem.h"
#include"C:\Programacion\Estructuras3\Heap\Heap.h"
#include"C:\Programacion\Estructuras3\Lista\Listat.h"

ArBin insertacompleto(Lista, ArBin);

int main(){

	ArBin a=vacioAB();
	Lista l=vacia();
	Elem e;

	ImpNivelporNivelAB(a);

	while(e=LeeElem())
        l=cons(e,l);
	
	ImpNivelporNivelAB(insertacompleto(l,a));
		
	return 0;
}

Heap insertacompleto(Lista l, ArBin a){
	if(esvacia(l))
		return a;
	else 
		return insertacompleto(resto(l), HazCompleto(cabeza(l), a));
}