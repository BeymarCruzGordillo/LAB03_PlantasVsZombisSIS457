#pragma once
#include "Planta.h"
//plantaCarnibora
//planta que que devora a los zombis en un tiempo determinado
class PlantaCarnibora :
    public Planta
{
private:
	int dientes;
	int tiempoMasticar;
public:
	//constructores
	PlantaCarnibora();
	PlantaCarnibora(int _dientes, int _tiempoMasticar);

	//metodos propios
	void devorarZombie();

	//Metodos accesores
	int getDientes() { return dientes; }
	void setDientes(int _dientes) { dientes = _dientes; }

	int getTiempoMasticar() { return tiempoMasticar; }
	void setTiempoMasticar(int _tiempoMasticar) { tiempoMasticar = _tiempoMasticar; }
};

