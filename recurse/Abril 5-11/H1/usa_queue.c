#include <stdio.h>
#include "queue.h"

/*Objetivo:
  Verificar el funcionamiento de la cola de enteros 
  invocando de forma aleatoria a todas las funciones
  que se implementan.
*/

int main(){
  char salida[10000];
  DATO elfrente;
  queue c;
  int i,err,opc;

  inic_col(&c);
  srand(1);
  /*Ciclo para todas las pruebas*/
  for(i=0;i<30;i++){
    opc = rand()%10;
    printf("La cola es:%s",tostr_col(salida,&c));
    switch(opc){
      case 0: 
        printf("Crea cola\n");
        err = crea_col(&c);
        break;
      case 1: 
        printf("Elimina toda la cola\n");
        err = elim_col(&c);
        break;
      case 2:
      case 3:
      case 4:
      case 5:
        printf("INSERTA %d en cola\n",elfrente=10.0*rand()/rand());
        err = inse_col(&c,elfrente);
        break;
      case 6:
      case 7:
        err = saca_col(&c,&elfrente);
        printf("ELIMINA dato de la cola %d\n",elfrente);
        break;
      case 8:
      case 9: 
        err = fren_col(&elfrente, &c);
        printf("El frente de la cola es %d\n", elfrente);
        break;
    }
    printf("Regresa: %d %s\n",err,tostr_col(salida,&c));
  }
  elim_col(&c);

  return 0;
}
