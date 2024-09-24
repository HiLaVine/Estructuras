#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>
#include"C:\Programacion\Estructuras3\Elem\Elem.h"
#include"C:\Programacion\Estructuras3\ColaCircular\ColaCircular.h"

int main(){
	Circular c=nuevacirc();
	int i;

	for(i=1;i<=5;i++){
		c=formarcirc(c,i);
	}

	while(1){
		for(i=1;i<=5;i++){
			ImpElem(primerocirc(c));
			c=rotarcirc(c);
	}
		c=rotarcirc(c);
		printf(" \n");
		getchar();
	}

return 0;
}