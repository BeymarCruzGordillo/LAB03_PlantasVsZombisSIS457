#include "Sol.h"
Sol::Sol() {
	posicionX = 0;
	posicionY = 0;
	float velocidadDescenso = 1;
	alto = 1.5;
	ancho = 1.5;
	string color = "Amarillo";
	rutaArchivoImagen = "sol.png";
}

Sol::Sol(string RutaImagen) {
	posicionX = 2;
	posicionY = 3;
	float velocidadDescenso = 1;
	alto = 2;
	ancho = 1;
	valor = 50;
	string nombre = "Sol";
	string color = "Amarillo";
	rutaArchivoImagen = RutaImagen;
}

void Sol::aparecer() {
	cout << "Sol apareciendo" << endl;
}

void Sol::recoger() {
	cout << "Sol recogido" << endl;
}

void Sol::desaparecer() {
	cout << "Sol desapareciendo" << endl;
}