typedef struct NodoBi{
			Elem dato;
			struct NodoBi *izq;
        	struct NodoBi *der;
}*ApNodoBi;

typedef struct BiNodo{
			ApNodoBi der; 
			ApNodoBi izq;
}*BiCola;

BiCola nuevaBi(){
	BiCola t=(BiCola)malloc(sizeof(struct BiNodo));
	t->izq=t->der=NULL;
	return t;
}

int esnuevaBi (BiCola q){return ((q->izq==NULL)&&(q->der==NULL));}

BiCola formarBiIzq(Elem e, BiCola q){
	ApNodoBi t=(ApNodoBi)malloc(sizeof(struct NodoBi));
	t->dato=e;
	t->izq=NULL;
	if(esnuevaBi(q))
		q->izq=q->der=t;
	else{
		t->der=q->izq;
		q->izq->izq=t;
		q->izq=t;
	}
	return q;
}

BiCola formarBiDer(BiCola q, Elem e){
	ApNodoBi t=(ApNodoBi)malloc(sizeof(struct NodoBi));
	t->dato=e;
	t->der=NULL;
	if(esnuevaBi(q))
		q->der=q->izq=t;
	else{
		t->izq=q->der;
		q->der->der=t;
		q->der=t;
	}
	return q;
}

Elem izquierdoBi(BiCola q){return q->izq->dato;}

Elem derechoBi(BiCola q){return q->der->dato;}

BiCola desformarBiIzq (BiCola q){
	ApNodoBi t=q->izq;
	if(q->izq==q->der)
		q->izq=q->der=NULL;
	else{
		q->izq=q->izq->der;
		q->izq->izq=NULL;
	}
	free(t);
	return q;
} 

BiCola desformarBiDer (BiCola q){
	ApNodoBi t=q->der;
	if(q->der==q->izq)
		q->der=q->izq=NULL;
	else {
		q->der=q->der->izq;
		q->der->der=NULL;
	}
	free(t);
	return q;
} 

/*void ImpBiIzq(BiCola q){
	ApNodoBi t=q->izq;
	while(t->izq!=NULL){
		ImpElem(t->dato);
		t=t->der;
	}
}*/





/*Espec BiCola;
	nuevaBi:->BiCola;
	formarBiIzq: Elem, BiCola ->BiCola;
	formarBiDer: BiCola, Elem ->BiCola;
	esnuevaBi: BiCola ->BiCola;
	izquierdoBi : BiCola ->Elem;
	derechoBi: BiCola->Elem;
	desformarBiIzq: BiCola-> BiCola;
	desformarBiDer: BiCola -> BiCola;

	Axiomas: Elem e, BiCola q;
	[b1] esnuevaBi(nuevaBi())= Verdadero;
	[b2] esnuevaBi(formarBiIzq(e,q))= Falso;
	[b3] esnuevaBi(formarBiDer(q,e))= Falso;
	[b4] izquierdoBi(nuevaBi())= Error;
	[b5] izquierdoBi(formarBiIzq(e,q))=e; //[e,a,r,b,c,d]
	[b6] izquierdoBi(formarBiDer(q,e))= Si esnuevaBi(q) return e;
										 Sino return izquierdoBi(q);
	[b7] derechoBi(nuevaBi())= Error;
	[b8] derechoBi(formarBiIzq(e,q))= Si esnuevaBi(e) return e;
									  Sino return derechoBi(q);
	[b9] derechoBi(formarBiDer(q,e))=e;
	[b10] desformarBiIzq(nuevaBi())=Error;
	[b11] desformarBiIzq(formarBiIzq(e,q))=q;
	[b12] desformarBiIzq(formarBiDer(q,e))= Si esnuevaBi(q) return q;
											Sino return formarBiDer(desformarBiIzq(q), e);
	[b13] desformarBiDer(nuevaBi())= Error;
	[b14] desformarBiDer(formarBiIzq(e,q))= Si esnuevaBi(q) return q;
											Sino return formarBiIzq(e,desformarBiDer(q));
	[b15] desformarBiDer(formarBiDer(q,e))= q;
Fin BiCola;
*/