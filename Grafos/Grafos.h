





















/*Espec Grafo
	Constructuras:
		nuevag:-> Grafo;
		consg: Grafo, Vertice-> Grafo;
		consarista: Grafo, Vertice, Vertice-> Grafo;
		consaristap: Grafo, Vertice, Vertice, Entero-> Grafo;
	Observadoras:
		esnuevag: Grafo -> Bool;
		obtenvert: Grafo, Vertice-> Elem;
		obtenarista: Grafo, Vertice, Vertice-> Entero;
	Desdobladoras
		eliminavert: Grafo, Vertice-> Grafo;
		eliminaarista: Grafo, Vertice, Vertice-> Grafo;

Axiomas: Grafo g, Vertice v1, v2, v3, Entero n;
	[g1] esnuevag(nuevag())=Verdadero;
	[g2] esnuevag(consvert(g,v1))= Falso;
	[g3] esnuevag(consarista(g,v1,v2))= Falso;
	[g4] esnuevag(consaristap(g, v1, v2, n))= Falso;
	[g5] obtenervert(nuevag(), v1)= ERROR;
	[g6] obtenervert(consvert(g, v1), v2)=  Si (EsIgual(v1, v2)) return v1;
											Sino return obtenvert((g, v1), v2);
	[g7] obtenervert(consarista(g, v1, v2), v3)=  Error;
	[g8] obtenervert(consaristap(g, v1, v2, n), v3)=  Error;
	[g9] obtenerarista(nuevag(), v1, v2)= ERROR; 
	[g10] obtenerarista(consvert(g, v1), v2, v3)= ERROR; 
	[g11] obtenerarista(consarista(g, v1, v2), v3, v4)= Error;
	[g12] obtenerarista(consaristap(g, v1, v2, n), v3)= Si ((EsIgual(v1, v3)&& Es igual(v2, v4))||(Esigual(v1,v4)) && Esigual(v2, v3)))
															return n;
	[g13] eliminavert(nuevag(), v1)= nuevag();
	[g14] eliminavert(consvert(g1, v1), v2)= 	Si(EsIgual(v1, v2)) return g;
												Sino return consvert(g,v1);
	[g15] eliminavert(consarista(g,v1,v2), v3)= Si(EsIgual(v1, v3)) return elimina vert(g,v1);
												Sino (EsIgual(v2, v3)) return elimina vert(g,v2);
												return consarista(g, v1, v2);
	[g16] eliminavert(consaristap(g,v1,v2, n), v3)= Si(EsIgual(v1, v3)) return eliminavert(g,v1);
												Sino (EsIgual(v2, v3)) return eliminavert(g,v2);
												return consarista(g, v1, v2);
	[g17] eliminaarista(nuevag(), v1, v2)=nuevag();
	[g18] eliminaarista(consvert(g, v1), v2, v3)=ERROR;
	[g19] eliminaarista(consarista(g, v1,v2), v3, v4)=
	[g20]

*/


