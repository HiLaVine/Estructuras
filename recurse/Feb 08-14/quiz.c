#include<stdio.h>

int main(){

    int x[]={3,6,9,12,15,18,21};
    int *y=&x[4];
    while(y-->x)
        printf("%d ", *y);
   

    /*char* m="Hola todos";
        printf("%c", m[2]);
*/
    /*int *a1=NULL;
    printf("%d\n", *a1);
*/
    return 0;
}