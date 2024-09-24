#ifndef PILA_H
#define PILA_H
/**********************************************************
Definir pila que crece dinámicamente cunado al insertar un
  dato ya está llena.
Por: Juan Jesús Gutiérrez García
Para: Ejemplos de programación
Fecha: 2022
**********************************************************/
#include <stdio.h>
#include <string.h>
#include "err.h"
/**********************************************************
                C O N S T A N T E S
**********************************************************/
/* Para el tamaños de los arrelgos*/
#define TAM_MAX    5   /*Tamaño inicial del arreglo*/

/* De error */
#define OVERFLOW  20    /*Insertar en pila llena*/
#define UNDERFLOW 30    /*Extraer de pila vacía*/

#define DATO      int     /*Tipo de dato almacenado*/
#define FORMATO "%4d"     /*Formato para converir dato a 
                            cadena*/
#define TAMDAT    30      /*Tamaño de cadena para convertir
                            cada dato almacenado en char* */
/**********************************************************
                   M A C R O S
**********************************************************/
/*Si tiene datos la pila*/
#define TIE_DAT(p)  ((p)->tope<TAM_MAX-1)
/*Si la pila está vacía*/
#define VAC_PIL(p)  ((p)->tope==TAM_MAX-1)
/*Si tiene espacio el arreglo de la pila*/
#define TIE_ESP(p)  ((p)->tope>-1)
/*Si la pila está llena*/
#define LLE_PIL(p)  ((p)->tope==0)
/**********************************************************
             T I P O S    D E    D A T O S
**********************************************************/
typedef struct{
  DATO dato[TAM_MAX]; /*Arreglo que almacena los datos*/
  int tope;           /*Primer elemento libre en la pila*/
} pila;
/**********************************************************
                P R O T O T I P O S
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
int inic_pil(pila* p);

/* Completa la interface.
Objetivo: Dar valores iniciales. al igual que inicializar
   la pila
RECIBE:
   Apuntador a pila a ser creada
REGRESA:
   Código de error. 
REQUIERE: 
   Que el apuntador que recibie no sea NULL y que 
   se invoque a la función eliminar cuando ya no se use
   la pila.
*/
int crea_pil(pila*);

/* Regresa la pila a valor inicial.
Objetivo: Destruir la pila completa.
RECIBE:
   Apuntador a pila a ser creada
REGRESA:
   Código de error. 
REQUIERE: 
   Que la pila haya sido creada. Y pasa la pila al estado de
   Vacía sin memoria.
*/
int elim_pil(pila*);
/**********************************************************
                M O D I F I C A D O R E S
/*********************************************************/

/* Inserta un dato en la pila.
Objetivo: Insertar un dato en la pila. En caso de que la
  pila esté llena busca hacer crecer el arreglo. Si no hay
  memoria regresará OVERFLOW
RECIBE:
   Apuntador a pila ya creada
   Dato a ser insertado en la pila
REGRESA:
   Código de error. 
REQUIERE: 
   Que la pila haya sido creada y un apuntador no NULL
*/
int push_pil(pila*,DATO);

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
int pop_pil(pila*);
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
int tope_pil(DATO*, const pila*);

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
char* tostr_pil(char*, const pila*);

#endif
