typedef int Elem;

void ImpElem(Elem e){printf("%d ",e);}

Elem LeeElem(){
	Elem e;
	scanf("%d",&e);
	return e;
}

int EsMenor(Elem e1, Elem e2){return e1<e2;} 
//predicado debido a que se puede saber si es falso o verdadero
int EsMayor(Elem e1, Elem e2){return e1>e2;}

int EsIgual(Elem e1, Elem e2){return e1==e2;}

int EsMoI(Elem e1, Elem e2){return e1>=e2;}

void intercambia(Elem *a, Elem *b){
	Elem t;
	t=*a; *a=*b; *b=t;
}