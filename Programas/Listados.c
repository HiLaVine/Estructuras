#include<stdio.h>
#include<stdlib.h>
#include"C:\Programacion\Estructuras3\Elem\Elem.h"
#include"C:\Programacion\Estructuras3\Lista\Listat.h"


int main(){
	
	Lista l, t, x;

	
	l=cons(100,cons(20,cons(20,cons(1,vacia()))));

	t=cons(100,cons(20,cons(20,cons(100,vacia()))));

	//t=cons(20,cons(20,cons(20,vacia())));

	//x=cons(1000,cons(108, vacia()));

	//SonIguales(t,l)? puts("si"): puts("no");

	//Palindroma(t)? puts("si"): puts("no");

	//EstaEn(20, l)? puts("si"): puts("no");

	ImpLista(SustituyeElemiter(5, 20, t));

return 0;
	}