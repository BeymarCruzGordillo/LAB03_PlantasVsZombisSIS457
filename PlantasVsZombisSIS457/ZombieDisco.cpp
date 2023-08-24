#include "ZombieDisco.h"

ZombieDisco::ZombieDisco()
{
	cantidadZombisInvocadas = 4;
	nivelDestrezaBaile = 8;
}
ZombieDisco::ZombieDisco(int _velocidadBaile, int _cantidadZombisInvocadas)
{
	cantidadZombisInvocadas = _velocidadBaile;
	nivelDestrezaBaile = _cantidadZombisInvocadas;
}

void ZombieDisco::moverse() {
	direccionX = 3;
	direccionY = 2;
	for (int i = 0; i < 3; i++)
	{
		posicionX += velocidadMovimiento;
		posicionY -= velocidadMovimiento;
	}
	for (int i = 0; i < 7; i++) {
		posicionX = +velocidadMovimiento;
		posicionY = +velocidadMovimiento;
	}
	cout << "Zombi Disco Avanza Bailando " << endl;
}

void ZombieDisco::invocarZombis() {
	cout << "El ZombieDisco invoco 4 zombies extras" << endl;
}