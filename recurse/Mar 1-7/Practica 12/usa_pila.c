#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

#define TAM_ENT    10

/*Objetivo:
  Comenzando de una cadena, simular el ejercicio de las 
  vias del tren y obtener otra utilizando una pila.
*/

int main(){
  char salida[10000];
  
  int entrada[TAM_ENT] = {1,2,3,4,5,6,7};
  pila p;
  int err,tope,i;
  
  inic_pil(&p);
  
  crea_pil(&p);/*Ordenar el numero 1432657*/

  /**/

  push_pil(&p, entrada[0]);
  tope_pil(&tope, &p);
  printf("\n %d ", tope);
  pop_pil(&p);

  push_pil(&p, entrada[1]);
  push_pil(&p, entrada[2]);
  push_pil(&p, entrada[3]);

  tope_pil(&tope, &p);
  printf(" %d ", tope);
  pop_pil(&p);
  tope_pil(&tope, &p);
  printf(" %d ", tope);
  pop_pil(&p);
  tope_pil(&tope, &p);
  printf(" %d ", tope);
  pop_pil(&p);


  push_pil(&p, entrada[4]);
  push_pil(&p, entrada[5]);

  
  tope_pil(&tope, &p);
  printf(" %d ", tope);
  pop_pil(&p);
  tope_pil(&tope, &p);
  printf(" %d ", tope);
  pop_pil(&p);


  push_pil(&p, entrada[6]);


  tope_pil(&tope, &p);
  printf(" %d\n", tope);
  pop_pil(&p);

  /**/
 
  elim_pil(&p);
  return 0;
}
