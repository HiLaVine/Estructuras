#include<stdio.h>
#include<stdlib.h> 
#include"C:\Programacion\Estructuras3\Elem\Elem.h"
#include"C:\Programacion\Estructuras3\Lista\Lista.h"
// Lista cons(Elem, Lista); es lo mismo que cons:Elem, Lista -->Lista;

int main(){
	Elem a;
	Lista x=vacia();
	Lista y=vacia();

	esvacia(x)? printf("si\n"):printf("no\n");
	
	printf("Dame un dato!!\n");
	a=LeeElem();
	x=cons(a,x);

	printf("Dame un dato!!\n");
	a=LeeElem();
	x=cons(a,x);

	x=cons(60, cons(50, cons(40,x)));

	puts("---------------------\n");


	esvacia(x)? printf("si\n"):printf("no\n");
	fflush(stdin);

	puts("---------------------\n");

	ImpLista(x);

	puts("---------------------\n");

	printf("la lista tiene %d elementos\n", NumElems(x));  

	puts("---------------------\n");

	y=cons(45, cons(20, cons(70,y)));

	ImpLista(y);

	puts("---------------------\n");


	ImpLista(PegaListas(x,y));

	return 0;
}