#pragma once
#include <iostream>
using namespace std;
class AcumuladorMonedas
{
private:
	//Propiedades privadas
	float alto;
	float ancho;
	int acumulador;
	string color;
	string rutaArchivoImagen;
public:
	//Constructores
	AcumuladorMonedas();

	//Metodos propios
	void recoger();
	void acumular();
	void mostrar();

	//Metodos accesores
	float getAlto() { return alto; }
	void setAlto(float _alto) { alto = _alto; }

	float getAncho() { return ancho; }
	void setAncho(float _ancho) { ancho = _ancho; }
};

