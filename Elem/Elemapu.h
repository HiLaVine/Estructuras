typedef int* Elem;

void intercambiareal( Elem *x, Elem *y){
	int t;
	t=*x; *x=*y; *y=t;
}