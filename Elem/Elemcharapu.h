typedef char* Elem;

void ImpElem(Elem e){printf("%s\n",e);}

Elem LeeElem(){
	Elem e=(Elem)malloc(sizeof(char)*80);
	scanf("%s",e);
	return e;
}
int EsMenor (Elem e1, Elem e2){return strcmp(e1,e2)<0;} 
//predicado debido a que puede saber si es faldo o verdadero

int EsIgual(Elem e1, Elem e2){return strcmp(e1,e2)==0;}

void intercambia (Elem e1, Elem e2){
	Elem t=(Elem)malloc(sizeof(char)*80);
	strcpy(t,e1);
	strcpy(e1,e2);
	strcpy(e2,t);
	free(t);
}
