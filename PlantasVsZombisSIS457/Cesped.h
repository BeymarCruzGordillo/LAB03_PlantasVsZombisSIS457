#pragma once
#include <iostream>
using namespace std;
class Cesped
{
private:
	//Propiedades privadas
	float alto;
	float ancho;
	float altoCuadro;
	float anchoCuadro;
	string color;
	string rutaArchivoImagen;
public:
	//Constructores
	Cesped();

	//Metodos propios
	void plantar();
	void FinalizarAlPasarLimite();

	//Metodos accesores
	float getAlto() { return alto; }
	void setAlto(float _alto) { alto = _alto; }

	float getAncho() { return ancho; }
	void setAncho(float _ancho) { ancho = _ancho; }

	float getAltoCuadro() { return altoCuadro; }
	void setAltoCuadro(float _altoCuadro) { altoCuadro = _altoCuadro; }

	float getAnchoCuadro() { return anchoCuadro; }
	void setAnchoCuadro(float _anchoCuadro) { anchoCuadro = _anchoCuadro; }


};



