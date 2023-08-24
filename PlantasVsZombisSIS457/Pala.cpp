#include "Pala.h"
Pala::Pala() {
	posicionX = 0;
	posicionY = 0;
	alto = 1.5;
	ancho = 1.5;
	color = "Plomo";
	rutaArchivoImagen = "pala.png";
}
void Pala::quitarPlanta() {
	cout << "Planta quitando" << endl;
}