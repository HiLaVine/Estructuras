#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "err.h"

/**********************************************************
                C O N S T A N T E S
Debes aquí definir las constantes que utilices de
pendiendo de la interpretación que te toque hacer.
**********************************************************/
/*Elementos que tendrá el arreglo estático*/
#define TAM_INI  5
#define TAM_CRE  5

/*Constantes para el tipo de dato almacenado*/
#define DATO     int      /*Tipo de dato almacenado*/
#define FDATO    " %d "   /*Formato para converir dato a 
                          cadena*/
#define TAM_DAT  10       /*Tamaño de la cadena temporal
                            para convertir el dato a cadena */
                            
/*Constantes para menejo de errores de la cola*/
#define OVERFLOW_C     100 /*Insertar en cola llena*/
#define UNDERFLOW_C    101 /*Sacar en cola vacía*/

/**********************************************************
                   M A C R O S
**********************************************************/
/*Macros para verificar el estado de la cola*/
#define TIE_DAT(q)    ((q)->ini>=(q)->fin && q->tam>0)
#define LLE_QUE(q)    ((q)->ini==(q)->tam-1 && (q)->fin==0)
#define TIE_ESP(q)    (q->tam>0 && !LLE_QUE(q))
#define VAC_QUE(q)    ((q)->ini<(q)->fin)

/**********************************************************
             T I P O S    D E    D A T O S
**********************************************************/

typedef struct{
  DATO *datos;
  int tam;
  int ini;
  int fin;
}queue;
/**********************************************************
                P R O T O T I P O S
**********************************************************/

/**********************************************************
                C O N S T R U C T O R E S
/*********************************************************/
/* Inicializar la cola.
Objetivo: Dar valores iniciales. Se debe invocar después
   de declarar una variable tipo cola.
RECIBE:
   Apuntador a cola a ser inicializada
REGRESA:
   Código de error. 
REQUIERE: 
   Que el apuntador que recibie no sea NULL
*/
int inic_col(queue* c);

/* Sólo invoca a inic_col
Objetivo: Dar valores iniciales. Y solicitar memoria para
   El arreglo que almacenará los datos. Crea una cola vacía.
RECIBE:
   Apuntador a cola a ser creada
REGRESA:
   Código de error. 
REQUIERE: 
   Que el apuntador que recibie no sea NULL.
Nota: esta función sólo se crea para tener compatibilidad con
   versiones dinámicas de la cola, que solicitaría memoria
*/
int crea_col(queue* c);


/* Sólo invoca a inic_col
Objetivo: Dar valores iniciales. Y solicitar memoria para
   El arreglo que almacenará los datos. Crea una cola vacía.
RECIBE:
   Apuntador a cola a ser creada
REGRESA:
   Código de error. 
REQUIERE: 
   Que el apuntador que recibie no sea NULL.
Nota: esta función sólo se crea para tener compatibilidad con
   versiones dinámicas de la cola, que regresaría la memoria
*/
int elim_col(queue*);


/**********************************************************
                M O D I F I C A D O R E S
/*********************************************************/

/* Inserta un dato en la cola.
Objetivo: Insertar un dato en la cola. En caso de que la
  cola esté llena regresará OVERFLOW.
RECIBE:
   Apuntador a cola a ser creada
   Dato a ser insertado en la cola
REGRESA:
   Código de error. 
REQUIERE: 
   Que la cola haya sido creada y un apuntador no NULL
*/
int inse_col(queue* c, DATO d);

/* Eliminar un dato en la cola.
Objetivo: Eliminar un dato de la cola. En caso de que
   la cola esté vacía regresa UNDERFLOW.
RECIBE:
   Apuntador a cola de que se sacará el dato
REGRESA:
   Código de error. 
REQUIERE: 
   Que haya datos en la cola, apuntador no NULL
*/
int saca_col(queue* q, DATO* d);

/**********************************************************
                O B S E R V A D O R A S
/*********************************************************/
/* Frente de la cola
Objetivo: Regresa dato en el frente de la cola.
RECIBE:
   Apuntador a cola de que se sacará el dato
   Apuntador a dato en que se regresará el valor
      que está en el frente de la cola
REGRESA:
   Código de error. 
REQUIERE: 
   Que haya datos en la cola, apuntadores no NULL
*/
int fren_col(DATO* d, const queue* q);

/* A cadena
Objetivo: Generar una representación de la cola 
   Como cadena. Usa la constante FDATO para 
   convertir cada dato en la cola a cadena.
   Debe recibir una cadena de salida con espacio
     para almcenar la representación completa.
RECIBE:
   Apuntador a cadena que tendrá la representación
   Apuntador la cola que será convertida a cadena.
REGRESA:
   El mismo apuntador que regresa. En caso de erro
   Agrega a la cadena el valor "NULL"   
REQUIERE: 
   Apuntadores no NULL
*/
char* tostr_col(char*, const queue* q);

#endif