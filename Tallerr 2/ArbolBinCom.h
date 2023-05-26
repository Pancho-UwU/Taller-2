#pragma once
#include "Nodo.h"
class ArbolBinCom
{
private:

	Nodo* raiz;
	Nodo* actual;
public:
	ArbolBinCom();
	~ArbolBinCom();

	Nodo* getRaiz();
	Nodo* getActual();

	void setRaiz(Nodo* raiz);
	void setActual(Nodo actaul);

	void crearNivel();
	void crearNivelRec(Nodo* nodo);
	
	void avanzarDerecha();
	void avanzarDerechaRec(Nodo* nodo);
};

