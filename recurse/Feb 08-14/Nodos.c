#include<stdio.h>

typedef struct _nodo{
    int dat;
    struct _nodo* sig;
    
}nodo;


int main(){
    nodo *p;
    nodo a, b, c;
    printf("%p\n\n",&p );
    /*printf("%p\n", &b);
    printf("%p\n", &c);*/
    p=&c;
    a.dat=3;
    a.sig=NULL;
    b.dat=5;
    b.sig=&a;
    c.dat=7;
    c.sig=&b;
    while(p!=NULL){
        printf("%d ", p->dat);
        p=p->sig;
    }
    return 0;
}