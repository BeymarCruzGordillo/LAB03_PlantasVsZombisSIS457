#pragma once
#include "Zombi.h"
class ZombieLanzaGizantes 
	: public Zombi 
{
private:
	int cabezaGizante;
public:
	//constructores
	ZombieLanzaGizantes();
	ZombieLanzaGizantes(int _cabezaGizante);

	//Metodos propios
	void lanzarGizantes(); 
};

