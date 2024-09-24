#ifndef _ABB_H_
#define _ABB_H_

#include <string.h>
#include <stdio.h>
#include "nodo.h"

#define VAC_ABB(a)       ((a)==NULL)
#define TIE_DAT_ABB(a)   ((a)!=NULL)

typedef apnodo abb;

int crea_abb(abb* a);
int elim_abb(abb* a);
int ins_abb(abb* a, DATO x);
int alt_abb(int* alt, const abb* a);
int num_dat(const abb* a);

char* str_abb(char* s, const abb* a);

#endif