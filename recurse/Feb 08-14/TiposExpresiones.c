#include<stdio.h>

int main(){

    int a=10, b=20, c=30;
    int *ap; int *bp; int *cp;
    
    ap = &b;  

    cp= &c;

    bp = cp;
    
    *cp=c; 
    *ap=b; 
    *bp=a; 

    printf("El valor de a es: %d, %d y %d\n\n",a, b, c);

    return 0;

} 