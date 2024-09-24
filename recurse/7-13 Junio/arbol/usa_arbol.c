#include <stdio.h>
#include "abb.h"

int main(){
  int i,x,alt;
  char salida[10000];
  abb a;
  crea_abb(&a);
  for(i=0;i<500;i++){
    x = rand()%1000;
    ins_abb(&a,x);
    alt_abb(&alt, &a);
    printf("inserta %d, la altura es %d los datos %d\n",x,alt,num_dat(&a));
  }
  printf("%d->%s\n",x,str_abb(salida,&a));
  return 0;
}