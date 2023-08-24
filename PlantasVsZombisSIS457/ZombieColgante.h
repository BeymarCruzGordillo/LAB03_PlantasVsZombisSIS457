#pragma once
#include "Zombi.h"
//zombi Colgante
//Zombi que cuelga de una cuerda y secuestra plantas 

class ZombieColgante : public Zombi
{
private:
	int alturaTierra;

public:
	//constructores
	ZombieColgante();
	ZombieColgante(int _alturaColgado);

	//Metodos propios
	void colgarse();
	void secuestrarPlanta();

	//polimorfismo
	virtual void moverse();

	//Metodos accesores
	int getAlturaColgado() { return alturaTierra; }
	void setAlturaColgado(int _alturaColgado) { alturaTierra = _alturaColgado; }
};

