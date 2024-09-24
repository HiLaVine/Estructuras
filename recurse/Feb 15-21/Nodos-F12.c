/*Emmanuel Sinai Farrera Mendez 
Ejercicio sobre nodos
20/02/2022
Actividad F12
2CV5 */

/*Este programa imprime la palaba casa mediante el uso de los nodos*/

#include<stdio.h>

typedef struct a_nodo{
    char letra;
    struct a_nodo* sig;
    
}nodo;


int main(){
    nodo *p;
    nodo a, b, c, d;
    p=&c;
    a.letra='a';
    a.sig=NULL;
    b.letra='a';
    b.sig=&d;
    c.letra='C';
    c.sig=&b;
    d.letra='s';
    d.sig=&a;
    while(p!=NULL){
        printf("%c", p->letra);
        p=p->sig;
    }
    return 0;
}

/*>.<*/