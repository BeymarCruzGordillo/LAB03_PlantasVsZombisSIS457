#include "Podadora.h"
Podadora::Podadora() {
	posicionX = 0;
	posicionY = 0;
	direccionX = 0;
	direccionY = 0;
	velocidadMovimiento = 1.5;
	alto = 1.5;
	ancho = 1.5;
	rutaArchivoImagen = "podadora.png";
}

Podadora::Podadora(string RutaImagen) {
	posicionX = 2;
	posicionY = 3;
	direccionX = 0;
	direccionY = 0;
	velocidadMovimiento = 3;
	alto = 2;
	ancho = 1;
	rutaArchivoImagen = RutaImagen;
}

void Podadora::limpiarLinea() {
	posicionX += direccionX;
	posicionY += direccionY;
	cout << "Podadora limpiando linea" << endl;
}

void Podadora::desaparecer() {
	cout << "Podadora desapareciendo" << endl;
}