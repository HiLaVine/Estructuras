#include "queue.h"

static int crece(queue* c){
  DATO* mem_nue;
  int i;
  if(!AP_VAL(c))
    return AP_INV;
  mem_nue = (DATO*)malloc(sizeof(DATO)*(c->tam+TAM_CRE));
  if(!AP_VAL(mem_nue))
    return NO_MEM;
  for(i=0;i<c->tam;i++)
    mem_nue[c->tam+TAM_CRE-1-i] = c->datos[c->tam-1-i];
  free(c->datos);
  c->datos = mem_nue;
  c->ini = c->tam+TAM_CRE-1;
  c->fin = TAM_CRE;
  c->tam+=TAM_CRE;
  return OK;
}

int recorre(queue* q){
  int i;
  int num_dat;
  
  num_dat = q->ini-q->fin+1;
  for(i=0;i<num_dat;i++)
    q->datos[q->tam-1-i] = q->datos[q->ini-i];
  q->ini=q->tam-1;
  q->fin=q->tam-num_dat;
  return OK;
}

int inic_col(queue* q){
  if(!AP_VAL(q))
    return AP_INV;
  q->datos = NULL;
  q->tam = 0;
  q->ini = TAM_INI-1;
  q->fin = TAM_INI;
  return OK;
}

int crea_col(queue* c){
  if (!AP_VAL(c))
    return AP_INV;
  if(c->datos)
    free(c->datos);
  c->datos = (DATO*)malloc(sizeof(DATO)*TAM_INI);
  if (!AP_VAL(c->datos))
    return OVERFLOW_C;
  c->fin=TAM_INI;
  c->ini=TAM_INI-1;;
  c->tam=TAM_INI;
  return OK;
}

int elim_col(queue* c){
  if (!AP_VAL(c))
    return AP_INV;
  if(c->datos)
    free(c->datos);
  return inic_col(c);
}


int inse_col(queue* q, DATO d){
  if(!AP_VAL(q))
    return AP_INV;
  if(!TIE_ESP(q)){
    if(crece(q)!=OK)
      return OVERFLOW_C;
  }
  if(q->fin==0)
    recorre(q);
  q->datos[--q->fin] = d;
  return OK;
}

int saca_col(queue* q, DATO* d){
  if(!AP_VAL(q))
    return AP_INV;
  if(!TIE_DAT(q))
    return UNDERFLOW_C;  
  *d = q->datos[q->ini--];
  return OK;
}

int fren_col(DATO* d, const queue* q){
  if(!AP_VAL(q))
    return AP_INV;
  if(!TIE_DAT(q))
    return UNDERFLOW_C;  
  *d = q->datos[q->ini-1];
  return OK;  
}

char* tostr_col(char* sal, const queue* q){
  char aux_dat[TAM_DAT];
  int i;
  if(!(AP_VAL(sal)&&AP_VAL(q)))
    return "error";
  
  strcpy(sal,"< ");
  for(i=q->fin;i<=q->ini;i++){
    sprintf(aux_dat,FDATO,q->datos[i]);
    strcat(sal,aux_dat);
  }
  strcat(sal," >\n");
  return sal;
}