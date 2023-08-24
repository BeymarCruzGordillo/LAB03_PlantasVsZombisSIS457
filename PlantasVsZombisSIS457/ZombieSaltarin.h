#pragma once
#include "Zombi.h"

class ZombieSaltarin : public Zombi {
	int salto;
public:
	//Constructores
	ZombieSaltarin() {};
	//Metodos accesores
	int getSalto() { return salto; }
	void setSalto(int _salto) { salto = _salto ;}
	//Metodos propios
	void salta();

};
