#include "SobreSemilla.h"
SobreSemilla::SobreSemilla() {
	alto = 1.5;
	ancho = 3;
	valor = 50;
	tiempoEspera = 5;
	color = "verde";
	rutaArchivoImagen = "sobreSemilla.png";
}

SobreSemilla::SobreSemilla(string RutaImagen) {
	alto = 2;
	ancho = 1;
	valor = 50;
	nombre = "SobreSemilla";
	color = "verde";
	rutaArchivoImagen = RutaImagen;
}

void SobreSemilla::carga() {
	cout << "SobreSemilla cargando" << endl;
}

void SobreSemilla::recoger() {
	cout << "SobreSemilla recogido" << endl;
}