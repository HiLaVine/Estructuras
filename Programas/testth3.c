#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include"C:\Programacion\Estructuras3\Elem\ElemTH.h"
#include"C:\Programacion\Estructuras3\Lista\Listat.h"
#include"C:\Programacion\Estructuras3\Tablashash\TablasHash.h"

int main(int argc, char *argv[]){

	FILE *in=fopen(*++argv, "r");
	Elem e;
	int i=0, n=97;
	TablaH paises;

	paises=consTH(n);

	for(i=0;i<59;i++)
		paises=insertaTH(e=FLeeElem(in),paises,n);
	ImpTablaH(paises, n);

	return 0;
}