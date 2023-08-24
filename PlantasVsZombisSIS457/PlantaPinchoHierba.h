#pragma once
#include "Planta.h"
//PinchoHierba
//planta que pincha a los zombies que pasan por encima y los daña en un rango determinado
class PlantaPinchoHierba :
    public Planta
{
private:
	int pinchos;
	int rangoDanio;//rango daño
public:
	//constructores
	PlantaPinchoHierba();
	PlantaPinchoHierba(int _pinchos, int _rangoDanio);

	//metodos propios
	void pinchar();

	//Metodos accesores
	int getPinchos() { return pinchos; }
	void setPinchos(int _pinchos) { pinchos = _pinchos; }

	int getRangoDanio() { return rangoDanio; }
	void setRangoDanio(int _rangoDanio) { rangoDanio = _rangoDanio; }
};

