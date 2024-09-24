#ifndef _RACIONAL_H
#define _RACIONAL_H

#include <string.h>
#include <stdio.h>
#include "error.h"

#define  DEN_CERO        201

#define  ES_CERO(x)      ((x).ent==0 && (x).num==0)
#define  ES_PROPIA(x)    ((x).ent==0 && (x).num!=0)
#define  ES_IMPROPIA(x)  ((x).ent!=0 && (x).num!=0)
#define  ES_ENTERO(x)    ((x).num==0)
#define  VAL_RAC(r)      ((r).den!=0)

typedef struct{
  int num;
  int den;
  int ent;
  int sig;
} racional;

int ini_rac(racional* r);
int get_num_rac(int* n, const racional* r);
int get_den_rac(int* n, const racional* r);
int get_ent_rac(int* n, const racional* r);
int set_num_rac(racional* r, int num);
int set_den_rac(racional* r, int den);
int set_ent_rac(racional* r, int den);

char* tostr_rac(char* sal, const racional* r);

#endif