#include<stdio.h>

void intercambiafake(int x, int y){
	int t;
	t=x; x=y; y=t;
}

void intercambiareal( int *x, int *y){
	int t;
	t=*x; *x=*y; *y=t;
}

int main(){
	int *a, *b, c=10, d=20;

	a=&c; b=&d;

	printf("c=%d\td=%d\n",c,d);
	intercambiafake(c,d);
	printf("c=%d\td=%d\n",c,d);
	intercambiareal(a,b);
	printf("c=%d\td=%d\n",c,d);

	return 0;
}