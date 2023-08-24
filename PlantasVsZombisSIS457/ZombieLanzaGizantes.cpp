#include "ZombieLanzaGizantes.h"
//Zombi Lanzagizante
//Zombi mutante que tiene la cabeza de una planta y que lanza gizantes
ZombieLanzaGizantes::ZombieLanzaGizantes()
{
	cabezaGizante = 0;
}

ZombieLanzaGizantes::ZombieLanzaGizantes(int _cabezaGizante)
{
	cabezaGizante = _cabezaGizante;
}

void ZombieLanzaGizantes::lanzarGizantes() {
	cout << "Zombi lanzando gizantes" << endl;
}