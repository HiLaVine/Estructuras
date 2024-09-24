typedef struct NodoL{
                Elem dato;
                struct NodoL *sig;
              }*Lista;

Lista vacia(){return NULL;}

Lista cons(Elem e, Lista l){
    Lista t=(Lista)malloc(sizeof(struct NodoL));
    t->dato=e;
    t->sig=l;
    return t;
}

int esvacia(Lista l){return l==NULL;}

Elem cabeza(Lista l){return l->dato;}

Lista resto(Lista l){return l->sig;}

Lista PegaListas(Lista l1, Lista l2){
         if(esvacia(l1))
                return l2;
         else
               return cons(cabeza(l1), PegaListas(resto(l1),l2));
}

Lista InvierteLista(Lista l){
     if(esvacia(l))
         return l;
    else
        return PegaListas(InvierteLista(resto(l)), cons(cabeza(l),vacia()));
}

Lista InsOrd(Elem e, Lista l){
    if(esvacia(l))
        return cons(e,l);
    else if(EsMenor(e,cabeza(l)))
             return cons(e,l);
         else
             return cons(cabeza(l),InsOrd(e,resto(l)));
}

void ImpLista(Lista l){
    if(!esvacia(l)){
        ImpElem(cabeza(l));
        ImpLista(resto(l));
    }
}

Lista  OrdenaListaAsc(Lista l){
       if(esvacia(l))
              return l;
      else
            return InsOrd(cabeza(l),OrdenaListaAsc(resto(l)));
}

int SonIguales(Lista l1, Lista l2){
    if (esvacia(l1)&&esvacia(l2))
        return 1;
    else if(esvacia(l1)&&!esvacia(l2))
        return 0;
    else if(!esvacia(l1)&&esvacia(l2))
        return 0;
    else if (EsIgual(cabeza(l1),cabeza(l2)))
        return SonIguales(resto(l1),resto(l2));

}

int Palindroma(Lista l){
    return SonIguales(InvierteLista(l),l);
}

int EstaEn(Elem e, Lista l){
    if (esvacia(l))
        return 0;
    else if (EsIgual(e, cabeza(l)))
        return 1;
    else 
        return EstaEn(e, resto(l));
}

Lista SustituyeElem(Elem e1, Elem e2, Lista l){
    if (esvacia(l))
        return l;
    else if(EsIgual(e2, cabeza(l)))
        return cons(e1,SustituyeElem(e1,e2,resto(l)));
    else 
        return cons(cabeza(l),SustituyeElem(e1,e2,resto(l)));
}

Lista SustituyeElemiter(Elem e1, Elem e2, Lista l){
    Lista t=vacia();

    for (t=vacia();!esvacia(l);l=resto(l))
        if(EsIgual(e2,cabeza(l)))
            t=cons(e1,t);
        else 
            t=cons(cabeza(l),t);

        return InvierteLista(t);
    
}

Elem ultimo(Lista l){
    if(esvacia(l))
        return 0;
    else
        return (cabeza(InvierteLista(l)));
}

int NumElems(Lista l){
     if(esvacia(l))
        return 0;
     else
        return 1+NumElems(resto(l));
}

/*Lista cardinal(int n, Lista l){
    if(esvacia(l))
        return 0;
    else if(n<=NumElems(l))
        return 
    else 
        return InvierteLista(l);
}*/