#include "Planta.h"
Planta::Planta() {
	posiciónX = 0;
	posiciónY = 0;
	vida = 100;
	daño = 7;
	velocidadAtaque = 1.5;
	alto = 1.5;
	ancho = 1.5;
	color = "Verde";
	rutaArchivoImagen = "planta.png";
}

Planta::Planta(string RutaImagen) {
	posiciónX = 2;
	posiciónY = 3;
	vida = 100;
	daño = 11;
	velocidadAtaque = 2;
	alto = 1.5;
	ancho = 1.5;
	color = "Verde";
	rutaArchivoImagen = RutaImagen;
}

void Planta::posicionar() {
	posiciónX = 0;
	posiciónY = 0;
}
void Planta::atacar() {
	cout << "La Planta esta  atacando" << endl;
}
void Planta::morir() {
	cout << "Planta sin vida" << endl;
}