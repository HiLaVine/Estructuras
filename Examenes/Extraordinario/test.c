#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"C:\Programacion\Estructuras3\Examenes\Extraordinario\Elempila.h"
//#include"C:\Programacion\Estructuras3\Examenes\Extraordinario\Coola.h"
#include"C:\Programacion\Estructuras3\Examenes\Extraordinario\Listat.h"
#include"C:\Programacion\Estructuras3\Examenes\Extraordinario\Conjunto.h"

int main(){

	Conjunto c1=nuevoS();

	c1=insertarS(insertarS(insertarS(insertarS(nuevoS(),'1'),'2'),'3'),'4');

	ImpConjunto(c1);

	return 0;
}