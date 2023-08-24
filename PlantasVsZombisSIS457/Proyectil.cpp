#include "Proyectil.h"
Proyectil::Proyectil() {
	posicionX = 0;
	posicionY = 0;
	direccionX = 0;
	direccionY = 0;
	daño = 7;
	tiempoCarga = 1.5;
	velocidadMovimiento = 1.5;
	alto = 1.5;
	ancho = 1.5;
	rutaArchivoImagen = "proyectil.png";
}

Proyectil::Proyectil(string RutaImagen) {
	posicionX = 2;
	posicionY = 3;
	direccionX = 0;
	direccionY = 0;
	daño = 15;
	tiempoCarga = 2;
	velocidadMovimiento = 3;
	alto = 2;
	ancho = 1;
	rutaArchivoImagen = RutaImagen;
}

void Proyectil::cargaProyectil() {
	cout << "Proyectil cargado" << endl;
}

void Proyectil::trayectoria() {
	posicionX += direccionX;
	posicionY += direccionY;
}

void Proyectil::colision() {
	cout << "Proyectil colisionando" << endl;
}

void Proyectil::destruir() {
	cout << "Proyectil destruido" << endl;
}