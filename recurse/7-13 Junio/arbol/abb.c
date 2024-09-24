#include "abb.h"

int num_dat(const abb* a){
  if(VAC_ABB(*a))
    return 0;
  else
    return 1+ num_dat(&((*a)->izq))+num_dat(&((*a)->der));
}

int alt_abb_r(int* alt, const abb* a){
  int alt_izq=0,alt_der=0;
  if(!VAC_ABB(*a)){
    alt_abb_r(&alt_izq, &((*a)->izq));
    alt_abb_r(&alt_der, &((*a)->der));
    *alt = alt_izq>alt_der?alt_izq+1:alt_der+1;
  }
  return OK;
}


int alt_abb(int* alt, const abb* a){
  if(!(AP_VAL(a)&&AP_VAL(alt)))
    return AP_INV;
  *alt = 0;
  alt_abb_r(alt, a);
 return OK;
}

int ins_abb(abb* a, DATO x){
 if(!AP_VAL(a))
    return AP_INV;
  if(VAC_ABB(*a))
    return crea_nod(a, x);
  if((*a)->dato < x)
    ins_abb(&((*a)->izq),x);
  else if((*a)->dato > x)
    ins_abb(&((*a)->der),x);
  return OK;
}

int crea_abb(abb* a){
  if(!AP_VAL(a))
    return AP_INV;
  *a = NULL;
  return OK;
}

int elim_abb(abb* a){
  if(!AP_VAL(a))
    return AP_INV;
  if(TIE_DAT_ABB(*a)){
    elim_abb(&((*a)->izq));
    elim_abb(&((*a)->der));
    elim_nod(a);
  }
  return OK;
}

char* str_abb_r(char* s, const abb* a){
  char tmp[TAMDAT];
  if(!VAC_ABB(*a)){
    
    if(TIE_DAT_ABB(*a)){
      str_abb_r(s,&((*a)->der));
      sprintf(tmp,FORMATO,(*a)->dato);
      strcat(s,tmp);
      str_abb_r(s,&((*a)->izq));
    }
    
  }else
    strcat(s," ");
  return s;
}

char* str_abb(char* s, const abb* a){
  if(!(AP_VAL(s)&&AP_VAL(a)))
    return "error";
  *s='\0';
  return str_abb_r(s,a);
}