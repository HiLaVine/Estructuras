/* 
Farrera Mendez Emmanuel Sinai
30/Noviembre/2021
Grupo: 2CM2
Examen 0
Pregunta 1*/


#include<stdio.h>
#include<stdlib.h>
#include"C:\Programacion\Estructuras3\Examenes\Examen1\Elem.h"
#include"C:\Programacion\Estructuras3\Examenes\Examen1\Pila.h"
#include"C:\Programacion\Estructuras3\Examenes\Examen1\Listat.h"


Pila nab(Elem , Elem);

Lista merge(Lista, Lista);

Lista reemplazar(Elem, Elem , Lista);


int main(){

	Elem A,B;

	Lista a=vacia();
	Lista b=vacia();
	Lista c=vacia();

	//Pila b=empty();

	a=cons(1, cons(10, cons(3, cons(12, vacia()))));
	b=cons(11, cons(45, cons(15, cons(8, vacia()))));
	c=cons(1, cons(10, cons(3, cons(10, cons(20, cons(10, cons(56, vacia())))))));

	

	puts("Problema 2\n");
	puts("Lista a\n");
	ImpLista(a);
	puts("\n\nLista b\n");
	ImpLista(b);
	puts("\n\nSolucion\n");
    ImpLista(merge(a,b));
    puts("\n");


    printf("Problema 4. Introduzca primero el numero que desea colocar y luego el numero que desea sustituir\n");
    puts("\nLista de prueba\n");
    ImpLista(c);
    puts("\n");
    scanf("%d %d",&A,&B);
    ImpLista(reemplazar(A, B, c));




	return 0;
}




Pila nab(Elem numero , Elem base){

	Pila p=empty();

	int i, a;
	for(i=0;i>=10;i++){
	
		a=(numero/base);
	
	}


}

Lista merge(Lista a, Lista b){

	OrdenaListaAsc(PegaListas(a,b));
}


Lista reemplazar(Elem e1, Elem e2, Lista l){
    if (esvacia(l))
        return l;
    else if(EsIgual(e1, cabeza(l)))
        return cons(e2,reemplazar(e2,e1,resto(l)));
    else 
        return cons(cabeza(l),reemplazar(e2,e1,resto(l)));
}