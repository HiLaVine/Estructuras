//Debemos de incluir Listath.h en el programa principal
//Debemos incluir ElemTH.h en el programa principal 

typedef Lista *TablaH;

//int Llave(Elem e){return e;}

TablaH consTH(int tam){
	int i;
	TablaH t=(TablaH)malloc(sizeof(Lista)*tam);
	for(i=0;i<tam;i++)
		t[i]=vacia();
	return t;
}

TablaH insertaTH(Elem e, TablaH t, int tam){
	t[Llave (e) % tam]= cons(e,t[Llave(e)%tam]);
	return t;
}

void ImpTablaH(TablaH t, int n){
	int i;
	for(i=0;i<n;i++){
		printf("Llave %d:\n", i);
		ImpLista(t[i]);
		puts("--------------------\n");
		getchar();
	}
}

void Consulta(TablaH t, char *Key, int n){
	Elem e;
	strcpy(e.pais, Key);
	if(EstaEn(e, t[Llave(e)%n]))
		ImpElem(ConsultaLista(e, t[Llave(e)%n]));
	else 
		printf("%s No esta\n", e.pais);
}

TablaH Borra(TablaH t, char *Key, int n){
	Elem e;
	strcpy(e.pais, Key);
	if(EstaEn(e, t[Llave(e)%n]))
		t[Llave(e)%n]=BorraElem(e, t[Llave(e)%n]);
	else 
		printf("%s No esta\n", e.pais);
}

