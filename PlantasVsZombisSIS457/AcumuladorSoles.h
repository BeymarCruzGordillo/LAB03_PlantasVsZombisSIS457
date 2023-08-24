#pragma once
#include <iostream>
using namespace std;
class AcumuladorSoles
{
private:
	//Propiedades privadas
	float alto;
	float ancho;
	int acumulada;

	string color;
	string rutaArchivoImagen;

public:
	//Constructores
	AcumuladorSoles();

	//Metodos propios
	void recoger();
	void acumular();
	void Descontar();

	//Metodos accesores
	float getAlto() { return alto; }
	void setAlto(float _alto) { alto = _alto; }

	float getAncho() { return ancho; }
	void setAncho(float _ancho) { ancho = _ancho; }
};



