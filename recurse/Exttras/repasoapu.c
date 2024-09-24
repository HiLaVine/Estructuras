#include<stdio.h>

int main(){

    int a=5;

    int *p;

    p=&a;

    printf("A : %d\n \n", *p);

    *p=10;

    printf("D : %d\n \n", a);

    printf("D : %d\n \n", a);


    return 0;
}