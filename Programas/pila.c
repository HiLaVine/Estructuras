#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"C:\Programacion\Estructuras3\Elem\Elempila.h"
#include"C:\Programacion\Estructuras3\Pila\Pila.h"

int main(){
	
	Pila p=empty();
	p=push('4',push('5',push('6', empty())));

	ImpElem(top(p));
	ImpElem(top(pop(p)));
	return 0;
}