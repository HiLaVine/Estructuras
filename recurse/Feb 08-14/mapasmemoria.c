#include<stdio.h>

int main(){

    int i;

    for(i=0; i<256; i++){
        printf("%4x\t", i + 0xFF00);
        if ((i+1)%16==0)
            printf("\n\n");
    }
    return 0;
}