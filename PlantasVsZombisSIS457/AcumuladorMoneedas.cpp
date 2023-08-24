#include "AcumuladorMoneedas.h"
AcumuladorMonedas::AcumuladorMonedas() {
	alto = 2;
	ancho = 5;
	acumulador = 0;
	color = "amarillo";
	rutaArchivoImagen = "acumuladorMonedas.png";
}

void AcumuladorMonedas::recoger() {
	cout << "AcumuladorMonedas recogido" << endl;
}

void AcumuladorMonedas::acumular() {
	cout << "Acumulando Monedas" << endl;
}

void mostra() {
	cout << "Cantidad Acumulada" << endl;
}