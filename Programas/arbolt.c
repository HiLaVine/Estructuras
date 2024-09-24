#include<stdio.h>
#include<stdlib.h>
#include"C:\Programacion\Estructuras3\Elem\Elem.h"
#include"C:\Programacion\Estructuras3\ArBin\ArBin.h"

int main(){

	ArBin a=vacioAB();
	ArBin b=vacioAB();
	ArBin c=vacioAB();

	a=consAB(25, vacioAB(), vacioAB());
	c=consAB(5, vacioAB(), vacioAB());
	b=consAB(200, a, c);

	esvacioAB(a)?puts("si"):puts("no");

	//ImpElem(raiz(b));
	//ImpElem(raiz(izqAB(b)));
	//ImpElem(raiz(derAB(b)));

	printf("\nPreOrd\n");
	PreOrd(b);
	printf("\nInOrd\n");
	InOrd(b);
	printf("\nPostOrd\n");
	PostOrd(b);

	return 0;
}