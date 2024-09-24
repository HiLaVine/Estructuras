typedef struct NodoCir{
				Elem dato;
				struct NodoCir *sig;
}*Circular;

Circular nuevacirc(){return NULL;}

int esnuevacirc(Circular c){return c==NULL;}

Circular formarcirc(Circular c, Elem e){
	Circular t=(Circular)malloc(sizeof(struct NodoCir));
	t->dato=e;
	if(esnuevacirc(c)){
		c=t;
		t->sig=t;
	}
	else{
		t->sig=c->sig;
		c->sig=t;
	}
	return t;
}

Elem primerocirc(Circular c){return c->sig->dato;}

Circular desformarcir(Circular c){
	Circular t=c;
	if (c==c->sig){
		free(t);
		return nuevacirc();	
	}
	else{
		c->sig=c->sig->sig;
		free(t->sig);
		return c;
	}
}

Circular rotarcirc(Circular c){
	return c->sig;

}