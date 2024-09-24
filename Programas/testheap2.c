#include<stdio.h>
#include<stdlib.h>
#include"C:\Programacion\Estructuras3\Elem\Elem.h"
#include"C:\Programacion\Estructuras3\Lista\Listat.h"
#include"C:\Programacion\Estructuras3\Heap\Heap.h"


ArBin insertacompleto(Lista, ArBin);

int main(){

	ArBin a=vacioAB();
	Lista l=vacia();
	Elem e;

	while(e=LeeElem())
        l=cons(e,l);
	
	 a=ConsHeap(InsertaCompleto(l,a));
    puts("\n-----Heap-------------\n");
    ImpNivelPorNivelAB(a);
    puts("\n-----Elementos ordenados-------------\n");
    ImpLista(r2HeapSort(a));
    return 0;
		
	return 0;
}

Heap insertacompleto(Lista l, ArBin a){
	if(esvacia(l))
		return a;
	else 
		return insertacompleto(resto(l), HazCompleto(cabeza(l), a));
}