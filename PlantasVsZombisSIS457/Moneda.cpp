#include "Moneda.h"
Moneda::Moneda() {
	posicionX = 0;
	posicionY = 0;
	alto = 1.5;
	ancho = 1.5;
	valor = 10;
	color = "amarillo";
	rutaArchivoImagen = "moneda.png";
}

Moneda::Moneda(string RutaImagen) {
	posicionX = 2;
	posicionY = 3;
	alto = 2;
	ancho = 1;
	valor = 10;
	nombre = "Moneda";
	color = "amarillo";
	rutaArchivoImagen = RutaImagen;
}
void Moneda::aparecer() {
	cout << "Moneda apareciendo" << endl;
}

void Moneda::desaparecer() {
	cout << "Moneda desapareciendo" << endl;
}