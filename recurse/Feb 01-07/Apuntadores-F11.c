/*Emmanuel Sinai Farrera Mendez 
Ejercicio sobre apuntadores
07/02/2022
Actividad F11
2CV5 */

//Este programa realiza el calculo de la superficie y la longitud de un circulo en base a su radio. 
#include<stdio.h>
#include<math.h>
#define PI 3.1416

void calculoarea (float *, float *);
void calculoperimetro (float *, float *); 

int main(){

    float radio, area, perimetro;
    radio=0; area=0; perimetro=0;

    printf("Introduce el radio del circulo deseado.\n");
    scanf("%f", &radio);

    calculoarea(&radio, &area);

    calculoperimetro(&radio, &perimetro);

    printf("El area de tu circulo es: %.2f\n", area);

    printf("El perimetro de tu circulo es: %.2f\n", perimetro);


    return 0;
}

void calculoarea(float * radio, float * area){
    
    *area = PI * pow(*radio,2);

    return ;
}


void calculoperimetro (float* radio, float *perimetro){

    *perimetro = 2 * PI * (*radio);

    return;
}

/*>.<*/