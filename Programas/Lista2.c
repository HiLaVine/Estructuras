#include<stdio.h>
#include<stdlib.h>
#include"C:\Programacion\Estructuras3\Elem\Elem.h"
#include"C:\Programacion\Estructuras3\Lista\Lista.h"

int main(){

    Lista l,t;

    l=cons(100,cons(20,cons(20,cons(1,vacia()))));

    t=cons(100,cons(20,cons(20,cons(100,vacia()))));


      EstaEn(20, l)? puts("si"): puts("no");

      IgualNumElems(t,l)? puts("si"): puts("no");

      SonIguales(t,l)? puts("si"): puts("no");

      Palindroma(l)?puts("si"):puts("no");


   return 0;
}