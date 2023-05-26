#pragma once


class Nodo
{

private:
	/// <summary>
	/// Variable que representara el nivel del calabozo.
	/// </summary>
	int nivel;
	/// <summary>
	/// Variable que identifica si es caverna o taberna.
	/// </summary>
	bool CoT;
	bool fueVisitado;
	bool nodoAct;
	int vidaP;
	int ataqueP;
	int armaduraP;
	int cEnemigos;
	int vidaE;
	int ataqueE;
	int defenzaE;
	Nodo* hijoIzq;
	Nodo* hijoDer;

public:
	Nodo(int nivel, int vidaP,int ataqueP,int armaduraP);
	~Nodo();
	
	Nodo* getHijoIzq();
	Nodo* getHijoDer();

	bool getCoT();
	bool getFueVisitado();
	int getNivel();
	int getVidaP();
	int getAtaqueP();
	int getArmaduraP();
	int getCEnemigos();
	int getVidaE();
	int getAtaqueE();
	int getDefenzaE();
	bool getNodoAct();

	void setHijoDer(Nodo* NodoHijoDer);
	void setHijoIzq(Nodo* NodoHijoIzq);
	

	void setNivel(int nivel);
	void setCoT(bool cot );
	void setFueVisitado(bool fueVisitado);
	void setVidaP(int vida);
	void setAtaqueP(int ataque);
	void setArmaduraP(int armadura);
	void setCEnemigos(int cEnemigos);
	void setVidaE(int vidaE);
	void setAtaqueE(int ataqueE);
	void setDefenzaE(int defenzaE);
	void setNodoAct(bool nodoAct);

};

