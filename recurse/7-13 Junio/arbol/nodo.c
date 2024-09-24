#include "nodo.h"
/* Convierte un nodo en una cadena
Se utiliza para depurar los programas que utilizan nodos
Recieve
  Cadena que almacenará la representación del nodo
  Apuntador a nodo a ser convertido
Regresa
  El mismo apuntador que recibe
*/
char* str_nod(char* s, const apnodo ap){
  if(!(AP_VAL(s) && AP_VAL(ap)))
    return s;
  sprintf(s,FORMATO,ap->dato);
  return s;
}
/* Inicializa un nodo
Recieve
  Apuntador a nodo a ser inicializado
  Dato para inicializar el nodo
Regresa
  Código de error
*/
int crea_nod(apnodo* p, DATO d){
  if(!AP_VAL(p))
    return AP_INV;
  *p = (nodo*)malloc(sizeof(nodo));
  if(!AP_VAL(*p))
    return NO_MEM;
  (*p)->dato = d;
  (*p)->izq = NULL;
  (*p)->der = NULL;
  return OK;
}
/* Elimina un nodo
Recieve
  Apuntador a nodo a ser eliminado
Regresa
  Código de error
*/
int elim_nod(apnodo* p){
  if(!AP_VAL(p))
    return AP_INV;
  free(*p);
  *p = NULL;  
  return OK;
}
