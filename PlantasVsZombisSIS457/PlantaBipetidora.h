#pragma once
#include "Planta.h"
//PlantaBipetidora
//Tiene dos cabezas apuntando en sentidos contrarios y ataca en dos sentidos a la vez
class PlantaBipetidora :
    public Planta
{
private:
	int dosCabezas;

public:
	//constructores
	PlantaBipetidora();
	PlantaBipetidora(int _dosCabezas);

	//metodos propios
	void AtaqueEnDosSentidos();

	//Metodos accesores
	int getDosCabezas() { return dosCabezas; }
	void setDosCabezas(int _dosCabezas) { dosCabezas = _dosCabezas; }
};

