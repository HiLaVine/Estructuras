/* 
Farrera Mendez Emmanuel Sinai
30/Noviembre/2021
Grupo: 2CM2
Examen 0
Pregunta 2*/

#include<stdio.h>
#include<stdlib.h>
#include"C:\Programacion\Estructuras3\Examenes\Examen0\Elem.h"
#include"C:\Programacion\Estructuras3\Examenes\Examen0\Listat.h"

int main(){
	
	Lista a=vacia();
	int n=0;

	printf("Intrduzca cuantos elementos quiere borrar\n");
	scanf("%d", &n);
	a=cons(1, cons(2, cons(3, cons(10, vacia()))));


	ImpLista(cardinal(n,a));


	


	return 0;
}