#include "Casa.h"
Casa::Casa() {
	alto = 1.5;
	ancho = 1.5;
	string forma = "simetrico";
	string colorVentana = "azul";
	string colorPuerta = "cafe";
	string colorTecho = "rojo";
	string colorPared = "blanco";
	rutaArchivoImagen = "casa.png";
}
void Casa::EfectoIngresoZombi() {
	cout << "Zombi ingresando a la casa" << endl;
}