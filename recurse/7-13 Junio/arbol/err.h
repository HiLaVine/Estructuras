#ifndef ERR_H
#define ERR_H
/**********************************************************
Definir errores comunes a programas
Por: Juan Jes�s Guti�rrez Garc�a
Para: Ejemplos de programaci�n

**********************************************************/
#include <stdlib.h>    /* Para definir NULL */


/**********************************************************
                C O N S T A N T E S
**********************************************************/
#define OK          0   /* No hay errores */
#define AP_INV      100   /* Recibe un apuntador nulo */
#define NO_MEM      200   /* malloc regresa NULL*/
/**********************************************************
                    M A C R O S
**********************************************************/

/* Verifica que un apuntador no tenga direcci�n nula*/
#define AP_VAL(p)   ((p)!=NULL)

#endif
