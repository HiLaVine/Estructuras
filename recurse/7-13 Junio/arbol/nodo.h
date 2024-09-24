#ifndef NODO_H
#define NODO_H
/**********************************************************
Declara un nodo con dos ligas
Por: Juan Jesús Gutiérrez García
Para: Ejemplos de programación
**********************************************************/
#include "err.h"
#include <stdio.h>
#include <string.h>
/**********************************************************
                C O N S T A N T E S
**********************************************************/
#define DATO      int
#define FORMATO   " %d"
#define TAMDAT    10
/**********************************************************
                T I P O     D E     D A T O
**********************************************************/
typedef struct _nodo{
  DATO dato;
  struct _nodo* izq;
  struct _nodo* der;
} nodo;
typedef nodo* apnodo;
/**********************************************************
                 F U N C I O N E S 
**********************************************************/
int crea_nod(apnodo* p, DATO d);    /*Crear un nodo*/
int elim_nod(apnodo* p);            /*Eliminar un nodo*/
char* str_nod(char*, const apnodo); /*Convertir nodo a cadena*/

#endif
