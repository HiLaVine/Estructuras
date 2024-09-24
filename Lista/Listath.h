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

void ImpLista(Lista l){
    if(!esvacia(l)){
        ImpElem(cabeza(l));
        ImpLista(resto(l));
    }
}

int EstaEn(Elem e, Lista l){
    if (esvacia(l))
        return 0;
    else if (EsIgual(e, cabeza(l)))
        return 1;
    else 
        return EstaEn(e, resto(l));
}


Elem ConsultaLista(Elem e, Lista l){
    if(EsIgual(e,cabeza(l)))
        return cabeza(l);
    else 
        return ConsultaLista(e, resto(l));

}

Lista BorraElem(Elem e, Lista l){
    if(EsIgual(e,cabeza(l)))
        return resto(l);
    else 
        return cons(cabeza(l), BorraElem(e, resto(l)));
}