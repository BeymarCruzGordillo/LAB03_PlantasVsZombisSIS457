#include "Tabla.h"
Tabla::Tabla() {
	alto = 1.5;
	ancho = 1.5;
	altoCasilla = 15;
	anchoCasilla = 30;
	color = "cafe";
	rutaArchivoImagen = "tabla.png";
}

Tabla::Tabla(string RutaImagen) {
	alto = 1.5;
	ancho = 1.5;
	altoCasilla = 15;
	anchoCasilla = 30;
	numeroCasillas = 40;
	plantasDisponibles = 15;
	color = "cafe";
	rutaArchivoImagen = RutaImagen;
}

void Tabla::mostrarTabla() {
	cout << "Tabla mostrando" << endl;
}

void Tabla::ocultarTabla() {
	cout << "Tabla ocultando" << endl;
}

void Tabla::disponible() {
	cout << "Planta Disponible" << endl;
}

void Tabla::bloqueado() {
	cout << "Planta bloqueado" << endl;
}

void seleccionar() {
	cout << "Planta seleccionado" << endl;
}