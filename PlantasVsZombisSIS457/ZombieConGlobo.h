#pragma once
#include "Zombi.h"
//Zombi con globo
//Zombi que ataca por aire sujeta a un globo 
class ZombieConGlobo :
    public Zombi
{
private:
	int alturaDeVuelo;
	int durezaDelGlobo;
public:
	//constructores
	ZombieConGlobo();
	ZombieConGlobo(int _alturaDeVuelo, int _durezaDelGlobo);

	//Polimorfismo 
	virtual void moverse();
};

