#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include"C:\Programacion\Estructuras3\Elem\ElemTH.h"
#include"C:\Programacion\Estructuras3\Lista\Listath.h"
#include"C:\Programacion\Estructuras3\Tablashash\TablasHash.h"

int main(int argc, char *argv[]){

	FILE *in=fopen(*++argv, "r");
	Elem e;
	int i=0, n=97;
	TablaH paises;
	char pal[80];

	paises=consTH(n);

	/*for(i=0;i<59;i++)
		paises=insertaTH(e=FLeeElem(in),paises,n);
	ImpTablaH(paises, n);*/

	printf("Cual paise quieres consultar?\n");
	scanf("%s", &pal);

	Consulta(paises, pal, n);
	
	return 0;
}