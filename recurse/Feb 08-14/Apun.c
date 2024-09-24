#include<stdio.h>
#include<math.h>

int main (){
   /* float a = M_PI;
    float *x;
    x = &a;
    printf("El valor de a es: %f\n\n", *x);
    *x = 12;
    printf("El nuevo valor de a es: %f\n\n", *x);
    */
   /*
    int a[10] = {0, 10, 20, 30, 40, 50, 60, 70 , 80, 90};
    int *x;
    x=a+5;
    printf("%d\n\n", x[0]);
    */

   int a=5;
   int *ap;
   ap =&a;

   printf("El valor de a es: %f\n\n", *ap);

    return 0;
}