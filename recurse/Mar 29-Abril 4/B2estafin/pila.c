#include "pila.h"

/*********************************************************
Definir las funciones que se utilizan para el control
  de las pilas.
Por: Juan Jesús Gutiérrez García
Para: Ejemplos de programación
Fecha: 2022
**********************************************************/


/**********************************************************
                C O N S T R U C T O R E S
/*********************************************************/
/* Inicializar la pila.
Objetivo: Dar valores iniciales. Se debe invocar después
   de declarar una variable tipo pila.
RECIBE:
   Apuntador a pila a ser inicializada
REGRESA:
   Código de error. 
REQUIERE: 
   Que el apuntador que recibie no sea NULL
*/


int inic_pil(pila* p){
  if(!AP_VAL(p))
    return AP_INV;
  
  p->tope  = TAM_MAX-1; //
  return OK;
}


/* Asignar memoria dinámica.
Objetivo: Dar valores iniciales. Y solicitar memoria para
   El arreglo que almacenará los datos. Crea una pila vacía.
RECIBE:
   Apuntador a pila a ser creada
REGRESA:
   Código de error. 
REQUIERE: 
   Que el apuntador que recibie no sea NULL y que 
   se invoque a la función eliminar cuando ya no se use
   la pila.
*/

int crea_pil(pila* p){
  if(!AP_VAL(p))
    return AP_INV;  
  return inic_pil(p);
}


/* Regresa la memoria dinámica.
Objetivo: Destruir la pila y pasar a valor inicial
RECIBE:
   Apuntador a pila a ser creada
REGRESA:
   Código de error. 
REQUIERE: 
   Que la pila haya sido creada. Y pasa la pila al estado de
   Cavía sin memoria.
*/

int elim_pil(pila* p){
  if(!AP_VAL(p))
    return AP_INV;

  return inic_pil(p);
}



/**********************************************************
                M O D I F I C A D O R E S
/*********************************************************/

/* Inserta un dato en la pila.
Objetivo: Insertar un dato en la pila. En caso de que la
  pila esté llena busca hacer crecer el arreglo. Si no hay
  memoria regresará OVERFLOW
RECIBE:
   Apuntador a pila a ser creada
   Dato a ser insertado en la pila
REGRESA:
   Código de error. 
REQUIERE: 
   Que la pila haya sido creada y un apuntador no NULL
*/


int push_pil(pila* p,DATO d){
  int err;
  if(!AP_VAL(p))
    return AP_INV;
  if(!TIE_ESP(p))
    return OVERFLOW;
  
  p->dato[p->tope--]= d;
  return OK;
}



/* Eliminar un dato en la pila.
Objetivo: Eliminar un dato de la pila. En caso de que
   la pila esté vacía regresa UNDERFLOW.
RECIBE:
   Apuntador a pila de que se sacará el dato
REGRESA:
   Código de error. 
REQUIERE: 
   Que haya datos en la pila, apuntador no NULL
*/


int pop_pil(pila* p){
  if(!AP_VAL(p))
    return AP_INV;
  if(!TIE_DAT(p))
    return UNDERFLOW;
  
  p->tope++;
  return OK;
}



/**********************************************************
                O B S E R V A D O R A S
/*********************************************************/
/* Tope de la pila
Objetivo: Regresa dato en el tope de la pila.
RECIBE:
   Apuntador a pila de que se sacará el dato
   Apuntador a dato en que se regresará el valor
      que está en el tope de la pila
REGRESA:
   Código de error. 
REQUIERE: 
   Que haya datos en la pila, apuntadores no NULL
*/


int tope_pil(DATO* d, const pila* p){
  if(!(AP_VAL(p) && AP_VAL(d)) )
    return AP_INV;
  if(!TIE_DAT(p))
    return UNDERFLOW;
  
  *d = p->dato[p->tope+1];  
  return OK;
}


/* A cadena
Objetivo: Generar una representación de la pila 
   Como cadena. Usa la constante FORMATO para 
   convertir cada dato de la pila a cadena.
   Debe garantizar la cadena de salida tiene espacio
     para almcenar la representación completa.
RECIBE:
   Apuntador a cadena que tendrá la representación
   Apuntador pila que será convertida a cadena.
REGRESA:
   El mismo apuntador que regresa. En caso de erro
   Agrega a la cadena el valor "NULL"   
REQUIERE: 
   Apuntadores no NULL
*/


char* tostr_pil(char* s, const pila* p){
  char dato[TAMDAT];
  int i;
  if(!(AP_VAL(s)&&AP_VAL(p)))
    return "Error";
  
  sprintf(dato,"[");
  strcpy(s,dato);
  for(i=0;i<TAM_MAX-1-p->tope;i++){
    sprintf(dato,FORMATO,p->dato[TAM_MAX-1-i]);
    strcat(s,dato);
  }
  strcat(s,"]\n");
  return s;
}
