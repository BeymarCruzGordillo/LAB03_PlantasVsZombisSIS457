#pragma once
#include <iostream>
using namespace std;
class Pala
{
private:
	//Propiedades privadas
	float posicionX;
	float posicionY;
	float alto;
	float ancho;
	string color;
	string rutaArchivoImagen;

public:
	//Constructores
	Pala();

	//Metodos propios
	void quitarPlanta();
	//Metodos accesores
	float getAlto() { return alto; }
	void setAlto(float _alto) { alto = _alto; }

	float getAncho() { return ancho; }
	void setAncho(float _ancho) { ancho = _ancho; }
};

