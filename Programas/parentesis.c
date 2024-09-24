#include<stdio.h>
#include<stdlib.h>
#include"C:\Programacion\Estructuras3\Elem\Elempila.h"
#include"C:\Programacion\Estructuras3\Pila\Pila.h"


int EsParIzq(char);
int EsParDer(char);

int EsBalanceado(Elem *);

int main(int argc, char *argv[]){
    char *in=*(argv+1);
    puts(in);

    EsBalanceado(in)?printf("Es balanceado"):printf("NO es balanceado");
    return 0;
}

int EsParIzq(char c){return c=='(';};
int EsParDer(char c){return c==')';};

int EsBalanceado(Elem in[]){
    Pila ops=empty();
    int i=0;
    while(in[i]){
        if(EsParIzq(in[i]))
                ops=push(in[i], ops);
        else if(EsParDer(in[i]))
               if(!isempty(ops))
                    ops=pop(ops);
               else
                    return 0;
        i++;
    }
    if(isempty(ops))
        return 1;
    else
        return 0;
}