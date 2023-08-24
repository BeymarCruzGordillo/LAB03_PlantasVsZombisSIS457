#include "ZombieEscalador.h"
//ZOmbi Escalador
//zombi que usa una escalera como escudo y la usa para pasar sobre un zombi con muvha resistencia 
ZombieEscalador::ZombieEscalador()
{
	escudoDeEscalera = 0;
	durezaDeEscalera = 50;
}

ZombieEscalador::ZombieEscalador(int _escudoDeEscalera, int _durezaDeEscalera)
{
	escudoDeEscalera = _escudoDeEscalera;
	durezaDeEscalera = _durezaDeEscalera;
}

void ZombieEscalador::escalar() {
	cout << "Zombi escalando" << endl;
}
