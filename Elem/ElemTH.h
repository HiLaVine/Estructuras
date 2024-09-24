typedef struct {
	char pais[80];
	char capital[80];
	char gentilicio[80];
	char idioma[80];
	char moneda[80];
	char poblacion[80];

}Elem;

int Llave (Elem e){
	int i=0, n=0;
	while(e.pais[i])
		n=n+e.pais[i++];
	return n;
}

Elem FLeeElem(FILE *in){
	Elem e;
	fscanf(in, "%s%s%s%s%s%s\n", e.pais, e.capital, e.gentilicio, e.idioma, e.moneda,e.poblacion);
	return e;
}

void ImpElem(Elem e){printf("%s%s%s%s%s%s\n", e.pais, e.capital, e.gentilicio, e.idioma, e.moneda,e.poblacion);}

Elem LeeElem(){
	Elem e;
	scanf("%s",&e);
	return e;
}

int EsIgual(Elem e1, Elem e2){
	return strcmp(e1.pais, e2.pais)==0;
}

