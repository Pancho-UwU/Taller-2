#include "ArbolBinCom.h"
#include "Nodo.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
ArbolBinCom::ArbolBinCom()
{
	if(!this->raiz)
	{
		raiz = new Nodo(1, 100, 30, 5);
		raiz->setNodoAct(true);
	}
}

void ArbolBinCom::crearNivel()
{
	crearNivelRec(this->raiz);
}
void ArbolBinCom::crearNivelRec(Nodo* nodo)
{
	if(nodo->getNivel() >5)
	{
		return;
	}
	if(!nodo)
	{
		return;
	}
	if(nodo->getNivel()<= 4)
	{
		crearNivelRec(nodo->getHijoIzq());
		crearNivelRec(nodo->getHijoDer());
		Nodo* nuevo = new Nodo(nodo->getNivel() + 1, nodo->getVidaP(), nodo->getAtaqueP(), nodo->getArmaduraP());
		Nodo* nuevo2 = new Nodo(nodo->getNivel() + 1, nodo->getVidaP(), nodo->getAtaqueP(), nodo->getArmaduraP());
		nodo->setHijoIzq(nuevo);
		nodo->setHijoDer(nuevo2);
	}

}

void ArbolBinCom::avanzarDerecha() { avanzarDerechaRec(this->raiz); }
void ArbolBinCom::avanzarDerechaRec(Nodo* nodo)
{
	if(!nodo)
	{
		return;
	}
	avanzarDerechaRec(nodo->getHijoDer());
	if(!nodo->getFueVisitado())
	{
		nodo->setFueVisitado(true);
		nodo->setNodoAct(true);
	}
}




