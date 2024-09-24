#include <stdio.h>
#include "racional.h"
#include "nodorac.h"

#define TOT_DAT 6

int main(){
  char sal[1000];
  int i,s;
  nodorac nod[TOT_DAT];
  nodorac* aux;
  
  for(i=0;i<TOT_DAT;i++){
    ini_rac(&nod[i].dato);
    set_den_rac(&nod[i].dato,3);
    set_num_rac(&nod[i].dato,i);
    nod[i].sig= nod+i+1;
  }
  nod[TOT_DAT-1].sig= NULL;
  aux = nod;
  /**/
  

  /**/
  while(aux){
    printf("%s\n",tostr_rac(sal,&aux->dato));
    aux = aux->sig;
  }
  return 0;
}