#pragma once
#include <iostream>
using namespace std;
class Casa
{
private:
	//Propiedades 
	float alto;
	float ancho;
	string forma;
	string colorVentana;
	string colorPuerta;
	string colorTecho;
	string colorPared;
	string rutaArchivoImagen;
public:
	//Constructores
	Casa();

	//Metodos propios
	void EfectoIngresoZombi();

	//Metodos accesores
	float getAlto() { return alto; }
	void setAlto(float _alto) { alto = _alto; }

	float getAncho() { return ancho; }
	void setAncho(float _ancho) { ancho = _ancho; }
};



