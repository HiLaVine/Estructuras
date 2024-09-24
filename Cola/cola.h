#include"C:\Programacion\Estructuras3\Lista\Lista.h"

typedef Lista Cola;

Cola nueva(){return vacia();}
Cola formar(Cola q, Elem e){
	if (esvacia(q))
		return cons(e,q);
	else 
		return cons(cabeza(q),formar(resto(q),e));
}

int esnueva(Cola q){return esvacia(q);}

Elem primero(Cola q){return cabeza(q);}

Cola desformar(Cola q){return resto(q);}
/*Espec Cola
	Constructoras 
		nueva:->Cola;
		formar: Cola, Elem -> Cola;
	Observadoras 
		esnueva: Cola -> Bool;
		primero: Cola -> Elem;
	Desdobladoras
		desformar: Cola -> Cola;
Axiomas: Elem e, Cola q;
	[q1] esnueva(nueva())= verdadero;
	[q2] esnueva(formar(q, e))= falso;
	[q3] primero(nueva())= Error;
	[q4] primero(formar(q,e))= si es esnueva(q) ret e formar([],e) =[e]
							   Sino ret primero(q); "formar([1,2,3,4], 5)"
	[q5]desformar(nueva())= Error;
	[q6]desgormar(formar(q, e))= Si esnueva(q) ret q;
	*/						   
