#include<stdio.h>

typedef struct {
    double a, b, c;
} vector;

int main(){

    vector x, z, *y;

    y=&x;

    y->a=0.1;
    y->b=0.2;
    y->c=0.3;

    z=*y;

    y=&z;

    y->a=1.2;
    y->c=3.4;

    printf("%lf %lf %lf\n\n", x);
    printf("%lf %lf %lf\n\n", z);

    return 0;
}