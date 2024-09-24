typedef Lista Conjunto;

Conjunto nuevoS(){return vacia();}

Conjunto insertarS(Conjunto s, Elem e){
	if (esvacia(s))
		return cons(e,s);
	else 
		return cons(cabeza(s),insertarS(resto(s),e));
}

Conjunto eliminaS(Conjunto s, Elem e){
	if(EsIgual(e,cabeza(s)))
		return resto(s);
	else 
		return cons(cabeza(s), BorraElem(e, resto(s)));
}

Conjunto unionS(Conjunto c1, Conjunto c2){
	if(esvacia(c1))
		return c2;
	else if(esvacia(c2))
		return c1;
	else if(cabeza(c1)==cabeza(c2))
		return cons(cabeza) 

}

Conjunto interseccionS(Conjunto c1, Conjunto c2){
	Conjunto c3=vacia();
	if(cabeza(c1)==cabeza(c2))
		return cabeza(c1)=insertaS(c3, cabeza(c1));
}


//Conjunto diferenciaS(Conjunto c1, Conjunto c2){}

void ImpConjunto(Conjunto s){
    if(!esvacia(s)){
        ImpElem(cabeza(s));
        ImpLista(resto(s));
    }
}

/*nuevoS:->Conjunto;
insertaS:Elem, Conjunto-> Conjunto;
eliminaS:Elem,Conjunto-> Conjunto;
unionS:Conjunto, Conjunto->Conjunto;
interseccionS:Conjunto,Conjunto->Conjunto;
diferenciaS:Conjunto,Conjunto->Conjunto;*/