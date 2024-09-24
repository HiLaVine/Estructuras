#include"C:\Programacion\Estructuras3\ABB\ABB.h"

typedef ABB AVL;

int FactBal(ABB a){
	if (esvacioAB(a))
		return 0;
	else
		return altura(izqAB(a))-altura(derAB(a));}

int absoluto(int n){
	if (n<0)
		return -n;
	else 
		return n;
}

AVL vacioAVL(){return vacioAB();}

AVL rotader(ABB a){
	return consAB(raiz(izqAB(a)),izqAB(izqAB(a)),consAB(raiz(a), derAB(izqAB(a)), derAB(a)));
}

AVL rotaizq(ABB a){
	return consAB(raiz(derAB(a)),consAB(raiz (a),izqAB(a),izqAB(derAB(a))),derAB(derAB(a)));
}

AVL rotaDerIzq(ABB a){
	return rotader(consAB(raiz (a), rotaizq(izqAB(a)), derAB(a)));
}

AVL rotaIzqDer(ABB a){
	return rotaizq(consAB(raiz(a), izqAB(a), rotader(derAB(a))));
}

//funcion que comprueba si el ABB es AVL
int esAVL(ABB a){
	if(esvacioAB(a))
		return 1;
	else if((absoluto(FactBal(a))<=1)&&(esAVL(izqAB(a)))&&(esAVL(derAB(a))))
		return 1;
	else 
		return 0;
	}

AVL hazAVL(ABB a){
	if (absoluto(FactBal(a))>1) 
		if(esAVL(izqAB(a)) && esAVL(derAB(a))) 
			if (FactBal(a)>1)
				if (FactBal(izqAB(a))>0)
					a=rotader(a);
				else 
					a=rotaDerIzq(a);
					else if (FactBal(derAB(a))<0)
						a=rotaizq(a);
					else 
						a=rotaIzqDer(a);
		else if (esAVL(izqAB(a)))
			a=consAB(raiz(a), izqAB(a), hazAVL(derAB(a)));
			else 
				a=consAB(raiz(a),hazAVL(izqAB(a)), derAB(a));
			else if (esAVL(izqAB(a)))
				a=consAB(raiz(a), izqAB(a), hazAVL(derAB(a)));
					else 
						a=consAB(raiz(a),hazAVL(izqAB(a)), derAB(a));
return a;
}

AVL insAVL(Elem e, AVL a){
	ABB t=InsOrd(e,a);

	if(esAVL(t))
		return t;
	else
		return hazAVL(t);
}

AVL elimAVL(Elem e, AVL a){
	if (!esAVL)
}

/*Algoritmo de hazAVL
El árbol dejo de ser AVL, esto es: esAVL(a))==Falso, y debe ser balanceado nuevamente. En este caso, tenemos las siguientes posibilidades:

	2.1.- Si (absoluto(FactBal(a))>1 
		2.1.1 Si (esAVL(izqAB(a)) && esAVL(derAB(a))) 
		        Entonces, ambos sub-árboles son AVL, y tenemos algunos de los dos siguientes casos:
			2.1.1.1- Si FactBal(a)>1: se desbalanceo por la izquierda, y existen dos posibilidades:
				2.1.1.1.1 Si FacBal(izqAB(a))>0: a=RotaDer(a).
				2.1.1.1.2 Sino, entonces se cumple que FacBal(izqAB(a))<0: a=RotaDerIzq(a).
			2.1.1.2.- Sino, entonces se cumple que FactBal(a)<-1: se desbalanceos por la derecha, y existen dos posibilidades:
				2.1.1.2.1 Si FacBal(derecho(a))<0: a=RotaIzq(a).
				2.1.1.2.2 Sino, entonce se cumple que FacBal(derAB(a))>0: a=RotaIzqDer(a). 
		2.1.2 Sino, entonces alguno de los subarboles dejó de ser AVL, y tenemos dos posibilidades:
			2.1.2.1 Si esAVL(izqAB(a))==Cierto: cons(raiz(a), izqAB(a), hazAVL(derAB(a)))
			2.1.2.2 Sino, entonces se cumple que esAVL(derAB(a))==Cierto: cons(raiz(a),hazAVL(izqAB(a), derAB(a))

	2.2.- Sino, evidentemente se cumple que absoluto(FactBal(a))<=1, implicando que alguno de los sub-árboles dejo de ser AVL. 
			En este caso, tenemos alguno de los dos casos:
		2.2.1 Si esAVL(izqAB(a))=Cierto: cons(raiz(a), izqAB(a), hazAVL(derAB(a))
		2.2.2 Sino, entonces se cumple que esAVL(derAB(a))==Cierto: cons(raiz(a), hazAVL(izqAB(a), derAB(a)).*/