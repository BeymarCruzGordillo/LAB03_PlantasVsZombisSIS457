#pragma once
#include "Zombi.h"
//zombi escalador
//Zombi que sujeta una esscalera como escudo y deja la escalera sobre una planta
//que tiene mucha resistencia o energia

class ZombieEscalador :
    public Zombi
{
private:
	int escudoDeEscalera;
	int durezaDeEscalera;
public:
	//constructores
	ZombieEscalador();
	ZombieEscalador(int _escudoDeEscalera, int _durezaDeEscalera);

	//Metodos propios
	//Escala una planta que tenga mucha dureza o energia
	void escalar();
};

