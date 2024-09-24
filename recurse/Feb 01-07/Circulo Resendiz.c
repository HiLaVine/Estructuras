#include<stdio.h>

void calculaSuperfi(float *, float *);
void calculaLongi(float *, float *);
void mostrarDatos(float *, float *);
void entradaDatos(float *);

#define PI 3.1416

void main(){
	float l, s, r;
	entradaDatos(&r);
	calculaSuperfi(&r, &s);
	calculaLongi(&r, &l);
	mostrarDatos(&s, &l);
}

void calculaSuperfi(float * radio, float * s){
	*s= PI * (*radio) * (*radio);
}

void calculaLongi(float * radio, float * l){
	*l= 2 * PI * (*radio);
}

void entradaDatos(float * radio){
	printf("introduzca el radio \n");
	scanf("%f", *&radio);
}

void mostrarDatos(float *s, float *l){
	printf("La superficie es: %f\n", *s);
	printf("La longitud es: %f\n", *l);
}