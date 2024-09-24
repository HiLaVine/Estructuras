#include"ordena.h"

void quicksort(int* vector, int inf, int sup, int* cont){
  int i, j, x;
	i=inf;
	j=sup;
	x=vector[(i+j)/2];  /*Obteniendo el pivote*/
	while(comp(i,j,cont))
	{	
		while(vector[i]<x){    /*Obteniendo elemento mayor de lado izquierdo del  pivote para intercambiar*/
			i++;
      (*cont)++;
    }
		while(vector[j]>x){  /*Obteniendo elemento menor de lado derecho del pivote a intercambiar*/
			j--;
      (*cont)++;
    }
		if(comp1(i,j,cont))         /*Intercambiando cuando se sigan presentando valores menores a la derecha y mayores a la izquierda*/
		{
			swap(vector,i,j, cont);
			i++;
			j--;
		}
	}
	if(comp(inf,j,cont))
		quicksort(vector,inf,j,cont);
	if(comp(i,sup,cont))
		quicksort(vector,i,sup, cont);
}

void swap(int *vector,int i, int j, int *cont) /*Intercambia valores */
{
  int aux;
	aux=vector[i];
	vector[i]=vector[j];
	vector[j]=aux;
  (*cont)++;
  return ;
}
 
int comp(int a, int b, int* cont){  /*Funcion que compara */
  (*cont)++;
  return a<b;
}

int comp1(int a, int b, int* cont){  /*Funcion que compara especifica para en el que debe ser igual o mayor*/
  (*cont)++;
  return a<=b;
}
