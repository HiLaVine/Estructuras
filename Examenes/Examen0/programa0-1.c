/* 
Farrera Mendez Emmanuel Sinai
30/Noviembre/2021
Grupo: 2CM2
Examen 0
Pregunta 1*/

#include<stdio.h>
#include<stdlib.h>
#include"C:\Programacion\Estructuras3\Examenes\Examen0\Elem.h"
#include"C:\Programacion\Estructuras3\Examenes\Examen0\Listat.h"

int main(){
	
	Lista a=vacia();
	Lista b=vacia();

	a=cons(1, cons(2, cons(3, cons(10, vacia()))));

	ImpElem(ultimo(a));


	return 0;
}