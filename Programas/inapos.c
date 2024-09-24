#include<stdio.h>
#include "C:\Programacion\Estructuras3\Pila\Pila.h"
#include "C:\Programacion\Estructuras3\Elem\Elempila.h"

void In_A_Post(char*);
int EsDigito (Elem);
int EsMayuscula(Elem);
int EsMinuscula(Elem);
int EsLetra(Elem);
int EsOperando(Elem);
int EsParIzq(Elem);
int EsOperador(Elem);
int EsParDer(Elem);
int Prec(Elem);

int main(int argc, char *argv[]){
	Pila ops=empty();
	In_A_Post(*(argv+1));

	return 0;
}

int EsDigito (Elem c){return (c>='0')&&(c<='9');}
int EsMayuscula(Elem c){return (c>='A')&&(c<='Z');}
int EsMinuscula(Elem c){return (c>='a')&&(c<='z');}
int EsLetra(Elem c){return EsMayuscula(c)||EsMinuscula(c);}
int EsOperando(Elem c){return EsMayuscula(c)||EsMinuscula(c);}
int EsParIzq(Elem c){return EsIgual(c,'(');}
int EsParDer(Elem c){return EsIgual(c,')');}
int Prec(Elem c){
	switch (c){
		case'^':return 3;
		case'*': case '/':return 2;
		case '+': case '-':return 1;
	}
}
int EsOperador(Elem c){return EsIgual(c,'^')||EsIgual(c,'*')||EsIgual(c,'/')||EsIgual(c,'+')||EsIgual(c,'-');}



void In_A_Post(char* in){
	int i=0;
	while (in[i]!='\0'){
		if (EsOperando(in[i]))
			ImpElem (in[i]);
		else if(EsOperador(in[i]))
			else if(isempty(ops))
			ops=push(in[i],ops);
				else if(EsParIzq(in[i])
					ops=push(in[i],ops);
					else if(EsParDer(in[i]){
						while(!EsParIzq(top(ops))&&!isempty(ops)){
							ImpElem (top(ops));
							ops=pop(ops);
					}
					else if(EsMayor(Prec(in[i]), Prec(top(ops))))
							ops=push(in[i],ops);
						else {while(EsMayor(Prec(in[i]), Prec(top(ops)))){
							ImpElem (top(ops));
							ops=pop(ops);
						}
						ops=push(in[i],ops);
					}
					i++;
	}
	while (!isempty(ops)){
		ImpElem(top(ops));
		ops 
	}
}