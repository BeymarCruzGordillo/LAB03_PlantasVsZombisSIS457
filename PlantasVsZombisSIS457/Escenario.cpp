#include "Escenario.h"
Escenario::Escenario() {
	alto = 0;
	ancho = 0;
	nivel = 1;
	numeroDeAsaltos = 1;
	rutaArchivoImagen = "escenario.png";
}

Escenario::Escenario(string RutaImagen) {
	alto = 0;
	ancho = 0;
	nivel = 1;
	numeroDeAsaltos = 2;
	rutaArchivoImagen = RutaImagen;
}

void Escenario::iniciarAsalto() {
	cout << "Escenario iniciando asalto" << endl;
}

void Escenario::finalizarAsalto() {
	cout << "Escenario finalizando asalto" << endl;
}