#include "AcumuladorSoles.h"
AcumuladorSoles::AcumuladorSoles() {
	alto = 2;
	ancho = 5;
	acumulada = 0;
	color = "Amarillo";
	rutaArchivoImagen = "acumuladorSoles.png";
}

void AcumuladorSoles::recoger() {
	cout << "AcumuladorSoles recogido" << endl;
}

void AcumuladorSoles::acumular() {
	acumulada = acumulada + 50;
}

void AcumuladorSoles::Descontar() {

}