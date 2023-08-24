#include "ZombieColgante.h"

ZombieColgante::ZombieColgante() {
	alturaTierra = 0;
}

ZombieColgante::ZombieColgante(int _alturaColgado) {
	alturaTierra = _alturaColgado;
}

void ZombieColgante::colgarse() {
	cout << "Zombi colgandose" << endl;

}

void ZombieColgante::secuestrarPlanta() {
	cout << "Zombi secuestrando planta" << endl;
}

void ZombieColgante::moverse() {
	direccionX = 1;
	direccionY = 2;
	for (int i = 0; i < 5; i++)
	{
		posicionY += direccionY;
	}
}

