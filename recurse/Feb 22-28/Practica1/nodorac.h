#ifndef _NODORAC_H
#define _NODORAC_H
#include "racional.h"

#define DATO  racional

typedef struct _nodo{
  DATO   dato;
  struct _nodo* sig;
}nodorac;

#endif