#include<stdio.h>
#include<stdlib.h>
#include"C:\Programacion\Estructuras3\Elem\Elem.h"
#include"C:\Programacion\Estructuras3\ABB\ABB.h"

int main(){
	
	/*ABB a=vacioAB();
	Elem e;
	while (e=LeeElem())
		a=InsOrd(e,a);

	ImpNivelporNivelAB(a);

	while(e=LeeElem()){
		puts("------------");
		a=HazCompleto(e,a);
		ImpNivelporNivelAB(a);
		puts("------------");
	}*/

	  ABB a=vacioAB();
    Elem e;
    while(e=LeeElem())
        a=InsOrd(e,a);

    ImpNivelporNivelAB(a);

    while(e=LeeElem()){
        a=HazCompleto(e,a);
        ImpNivelporNivelAB(a);
    }



	return 0;
}