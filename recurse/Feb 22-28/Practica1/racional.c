#include "racional.h"

static int reducir(racional* r){
  if (!AP_VAL(r))
    return AP_INV;
  
  int num = r->num;
  num+=r->ent*r->den;

  r->sig = num*r->den<0?-1:1;
  r->ent=abs(num)/abs(r->den);
  r->num=abs(num)%abs(r->den);
  r->den=abs(r->den);
  return OK;
}

int ini_rac(racional* r){
  if (!AP_VAL(r))
    return AP_INV;
  r->num = 0;
  r->den = 1;
  r->ent = 0;
  r->sig = 1;
  return OK;
}
int get_ent_rac(int* n, const racional* r){
  if (!(AP_VAL(r)&&AP_VAL(n)&&VAL_RAC(*r)))
    return AP_INV;
  *n = r->ent;
  return OK;
}
int get_num_rac(int* n, const racional* r){
  if (!(AP_VAL(r)&&AP_VAL(n)&&VAL_RAC(*r)))
    return AP_INV;
  *n = r->num;
  return OK;
}
int get_den_rac(int* n, const racional* r){
  if (!(AP_VAL(r)&&AP_VAL(n)&&VAL_RAC(*r)))
    return AP_INV;
  *n = r->den;
  return OK;
}
int set_num_rac(racional* r, int num){
  if (!AP_VAL(r)&&VAL_RAC(*r))
    return AP_INV;
  r->num=num;
  reducir(r);
  return OK;
}
int set_den_rac(racional* r, int den){
  if (!AP_VAL(r)&&VAL_RAC(*r))
    return AP_INV;
  if(!(den!=0))
    return DEN_CERO;
  r->den = den;
  reducir(r);
  return OK;
}
int set_ent_rac(racional* r, int ent){
  if (!AP_VAL(r)&&VAL_RAC(*r))
    return AP_INV;
  r->ent = ent;
  reducir(r);
  return OK;
}

char* tostr_rac(char* sal, const racional* r){
  char tmp[100];  
  
  if (!(AP_VAL(sal)&&AP_VAL(r)&&VAL_RAC(*r)))
    return "error";
  
  strcpy(sal,"");
  if(ES_ENTERO(*r)){
    sprintf(tmp,"%d",r->sig*r->ent);
    strcat(sal,tmp);
  }else{
    if(ES_PROPIA(*r))
      sprintf(tmp,"(%d/%d)",r->sig*r->num,r->den);
    else
      sprintf(tmp,"(%d %d/%d)",r->sig*r->ent,r->num,r->den);
    strcat(sal,tmp);
  }
  return sal;
}