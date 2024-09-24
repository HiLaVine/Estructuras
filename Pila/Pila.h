typedef struct Nodo{
				Elem dato;
				struct Nodo *sig;
				}*Pila;

Pila empty(){return NULL;}

Pila push(Elem e, Pila p){
    Pila t=(Pila)malloc(sizeof(struct Nodo));
    t->dato=e;
    t->sig=p;
    return t;
}

int isempty(Pila p){return p==NULL;}

Elem top(Pila p){return p->dato;}

Pila pop(Pila p){return p->sig;}

/*Espec Pila
	empty:->Pila;
	push:Elem, Pila ->Pila;
	isempty:Pila -> Bool;
	top:Pila -> Elem;
	pop:Pila -> Pila;
Axiomas: Elem e, Pila p;
	[p1] isempty(empty())=true;
	[p2] isempty(push(e,p))=false;
	[p3] top(empty())=Error;
	[p4] top(push(e,p))=e;
	[p5] pop(empty())=Error;
	[p6] pop(push(e,p))= p;
Fin Pila;
*/