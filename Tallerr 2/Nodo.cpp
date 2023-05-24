#include "Nodo.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
/// <summary>
/// Constructor de la clase Nodo, el cual generar� el nivel del juego. 
/// </summary>
/// <nivel de la mazmorra></param>
/// <vidaP actaul del personaje principal ></param>
/// <ataqueP actaul del personaje principal></param>
/// <armaduraP actaul del personaje principal></param>
Nodo::Nodo(int nivel,int vidaP,int ataqueP,int armaduraP)
{
	this->hijoDer = nullptr;
	this->hijoIzq = nullptr;
	this->nivel = nivel;
	// Variable que escojera un valor aleatorio entre 1 y 10 para ver si es taberna o caverna.
	int CoTA = rand() % 10 + 1;
	
	if(CoTA == 2 || CoTA == 8)
	{
		this->CoT = true;
		this->cEnemigos = 0;
		this->vidaE = 0;
		this->defenzaE = 0;
		this->ataqueE = 0;
		
		int T = rand() % 100 +1;
		if (T >=1 && T<=5 )
		{
			this->ataqueP = ataqueP + 8;
			this->vidaP = vidaP;
			this->armaduraP = armaduraP;
		}
		else if(T>=6 && T<=26)
		{
			this->vidaP = vidaP + 5;
			this->ataqueE = ataqueE;
			this->armaduraP = armaduraP;
		}
		else
		{
			this->armaduraP = armaduraP + 3;
			this->vidaP = vidaP;
			this->ataqueP = ataqueP;
		}
	}
	else
	{
		this->CoT = false;
		int C = rand() % 100 + 1;
		if(C>=1 && C<=5)
		{
			this->cEnemigos = 400;
			this->vidaE = 50;
			this->ataqueE = 30;
			this->defenzaE = 5;
		}
		else if(C>=6 && C<=26)
		{
			this->cEnemigos = 1;
			this->vidaE = 50;
			this->ataqueE = 30;
			this->defenzaE = 5;

		}
		else if(C>=27 && C<= 37)
		{
			this->cEnemigos = 3;
			this->vidaE = 50;
			this->ataqueE = 30;
			this->defenzaE = 5;
		}
		else
		{
			this->cEnemigos = 2;
			this->vidaE = 50;
			this->ataqueE = 30;
			this->defenzaE = 5;
		}

	}





}



