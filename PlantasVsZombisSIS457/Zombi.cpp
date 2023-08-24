#include "Zombi.h"

Zombi::Zombi() {
	nombre = "Zombi";
	vida = 100;
	danio = 10;
	velocidadMovimiento = 1;
	velocidadAtaque = 1;
	posicionX = 0;
	posicionY = 0;
}
Zombi::Zombi(string _nombre, int _vida, int _danio, int _velocidadMovimiento, int _velocidadAtaque, int _posicionX, int _posicionY) {
	nombre = _nombre;
	vida = _vida;
	danio = _danio;
	velocidadMovimiento = _velocidadMovimiento;
	velocidadAtaque = _velocidadAtaque;
	posicionX = _posicionX;
	posicionY = _posicionY;
}

void Zombi::aparecer() {
	posicionX = 0;
	posicionY = 0;
}

void Zombi::moverse() {
	direccionX = 10;
	posicionX += direccionX*velocidadMovimiento;
	cout << "La posicion del zombie es " << posicionX << endl;
}

void Zombi::atacar() {
	cout << "Zombi atacando" << endl;
}

void Zombi::morir() {
	cout << "Zombi muerto" << endl;
}
