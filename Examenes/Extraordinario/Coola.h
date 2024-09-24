typedef struct Nodo{
		Elem dato;
		struct Nodo *sig;
}*ApNodo;

typedef struct CNodo{
		ApNodo prim;
		ApNodo ult;
}*Cola;

Cola nueva(){
	Cola t=(Cola)malloc(sizeof(struct CNodo));
	t->prim=t->ult=NULL;
	return t;
}

int esnueva(Cola q){return ((q->prim==NULL) && (q->ult==NULL));}

Cola formar(Cola q, Elem e){
	ApNodo t=(ApNodo)malloc(sizeof(struct Nodo));
	t->dato=e; 
	t->sig=NULL;
	if(esnueva(q))
		q->prim=q->ult=t;
	else{
		q->ult->sig=t;
		q->ult=t;
	}

return q;
}

Elem primero(Cola q){return q->prim->dato;}

Cola desformar(Cola q){
	ApNodo t;
    if (q->prim==q->ult){
   		free(q->prim);
    	free(q);
    	return nueva();
    }
    else{
    	t=q->prim;
    	q->prim=q->prim->sig;
    	free(t);
    	return q;
    }

}

void ImpCola(Cola q){
	ApNodo c;
	if(!esnueva(q)){
		c=q->prim;
		while(c!=NULL){
			ImpElem(c->dato);
			c=c->sig;
		}
	}
	
}

void carrusel(Cola q){
	while(!esnueva(q)){
	ImpCola(q);
    if((primero(q)-3)>0)
		q=formar(desformar(q),primero(q)-3);
    else 
    	q=desformar(q);
    	puts("\n");
    getchar();
    
    }
}


void procesador(Cola q){
int t=1,n,i,j;
	for(t;t=3;t++){
	ImpCola(q);
	primero(q)-3;
	q=formar(desformar(q),primero(q)-3);	
	t++;
	}
	for(j=1;j<2;)
	n=rand()%4;
	for(i=1;i=n;i++){
	ImpCola(q);
	primero(q)-3;
	q=formar(desformar(q),primero(q)-3);	
		
		
		
	}
	
}

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
	[q6]desformar(formar(q, e))= Si esnueva(q) ret q;
	*/		