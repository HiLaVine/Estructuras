#include<stdio.h>
#include<stdlib.h>
#include"C:\Programacion\Estructuras3\Elem\Elem.h"
#include"C:\Programacion\Estructuras3\ABB\ABB.h"

int main(){
	
	Elem e=1;
	ABB a=vacioAB();

	while ((e=LeeElem())!=0){
		a=InsOrd(e, a);
	}

	InOrd(a);

	printf("Altura del arbol: %d\n", altura(a));
	return 0;
}
