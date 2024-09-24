#include<stdio.h>
#include"C:\Programacion\Estructuras3\Elem\ElemTH.h"

int main(int argc, char *argv[]){

	FILE *in=fopen(*++argv, "r");
	Elem e;
	int i=0;

	while(i<20){
		e=FLeeElem(in);
		ImpElem(e);
		i++;
	}
	return 0; 
}