#include"C:\Programacion\Estructuras3\ArBin\ArBin.h"

typedef ArBin ABB;

ABB InsOrd(Elem e, ABB a){
	if (esvacioAB(a))
		return consAB(e,vacioAB(), vacioAB());
	else if (EsMenor(e, raiz(a)))
		return consAB(raiz(a), InsOrd(e, izqAB(a)), derAB(a));
	else 
		return consAB(raiz(a), izqAB(a), InsOrd(e, derAB(a)));

}

Elem Mayor(ABB a){
    if(EsHoja(a))
         return raiz(a);
    else if((!esvacioAB(izqAB(a)))&&(esvacioAB(derAB(a))))
             return raiz(a);
         else
             return Mayor(derAB(a));
}

ABB elimord(Elem e, ABB a){
     if(EsHoja(a))
         return vacioAB();
     else if(EsIgual(e,raiz(a)))
              if((!esvacioAB(izqAB(a)))&&(esvacioAB(derAB(a))))
                      return izqAB(a);
              else if((esvacioAB(izqAB(a)))&&(!esvacioAB(derAB(a))))
                        return derAB(a);
                   else
                        return consAB(Mayor(izqAB(a)),
                                      elimord(Mayor(a),izqAB(a)),derAB(a));
          else if(EsMenor(e,raiz(a)))
                       return consAB(raiz(a),elimord(e,izqAB(a)),derAB(a));
               else
                       return consAB(raiz(a),izqAB(a),elimord(e,derAB(a)));
}

/*Espec ABB
		Importar todo de ArBin;
		Ocultar la funcion consAB() para el usuario;
		InsOrd:Elem, ABB -> ABB;

	Axiomas
		[ABB1] esvacioAB(InsOrd(e,a))=Falso;
		[ABB2] raiz(InsOrd(e,a))= Si esvacioAB(a) return(e);
								  Sino return raiz(a);
		[ABB3] izqAB(InsOrd(e,a))= Si esvacioAB(a) return(vacioAB());
								   Sino Si EsMenor(e,raiz(a));
								   			return InsOrd(e,izqAB(a));
								   Sino 	
								   			return izqAB(a);
		[ABB4] derAB(InsOrd(e,a))= si esvacioAB(a) return vacioAB();
								   Sino Si EsMayor(e,raiz(a))
								   				return InsOrd(e,derAB(a));
								   Sino 	
								   			return derAB(a);*/
