#pragma once
#include "Planta.h"
//plantaHipnoneta
//planta que hipnotiza a los zombies y los convierte en aliados asiendo que ataquen a otros zombies
class PlantaHipnoseta :
    public Planta
{
public:
	int hipnosis;
	//constructores
	PlantaHipnoseta();
	PlantaHipnoseta(int _hipnosis);

	//Metodos propios
	void hipnotizar();
};

