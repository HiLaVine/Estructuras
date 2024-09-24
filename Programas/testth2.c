#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include"C:\Programacion\Estructuras3\Elem\ElemTH.h"
#include"C:\Programacion\Estructuras3\Lista\Listat.h"
#include"C:\Programacion\Estructuras3\Tablashash\TablasHash.h"

int main(int argc, char *argv[]){

    int i;
    FILE *ent=fopen(*++argv,"r");
    TablaH t;
    Elem pal1=(Elem)malloc(20), pal2;
    int n=97;

    t=consTH(n);

    while(fscanf(ent,"%s",pal1)!=EOF){
        strcpy(pal2=(Elem)malloc(20),pal1);
        t=insertaTH(pal2, t, n);
    }

    for(i=0;i<97;i++){
        if(!esvacia(t[i])){
            printf("i->%d\t",i);
            ImpLista(t[i]);
            printf("\n");
        }
    }

    return 0;
}