/* 
Farrera Mendez Emmanuel Sinai
Boleta: 2020630138
07 de Enero del 2022
Grupo: 2CM2
Extraordinario
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"C:\Programacion\Estructuras3\Examenes\Extraordinario\Elempila.h"
#include"C:\Programacion\Estructuras3\Examenes\Extraordinario\Listat.h"

Lista funcion1(Lista);

int main(){

	Lista l=vacia();

	l=cons('L', cons('a', cons('E', cons('s', cons('c', cons('o', cons('m', cons('s', cons('e', cons('f', cons('u', cons('n', cons('d', cons('o', 
	cons('e', cons('n', cons('1', cons('9', cons('9', cons('6', vacia()))))))))))))))))))));

	
	ImpLista(funcion1(l));

	puts("\n----------------------\n");

	return 0;
}

Lista funcion1(Lista l){
	if (esvacia(l))
        return l;

	else if((cabeza(l)>='A')&&(cabeza(l)<='Z'))
		return cons(cabeza(l), funcion1(resto(l)));

	else if((cabeza(l)>='a')&&(cabeza(l)<='z'))
		return cons(toupper(cabeza(l)), funcion1(resto(l)));

	else if((cabeza(l)>='0')&&(cabeza(l)<='9'))
		return cons(cabeza(l), funcion1(resto(l)));

}




