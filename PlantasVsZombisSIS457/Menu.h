#pragma once
#include <iostream>
using namespace std;
class Menu
{
private:
	//Propiedades privadas
	float alto;
	float ancho;
	string color;
	string rutaArchivoImagen;

public:
	//Constructores
	Menu();
	//Metodos propios
	void seleccionarOpcion();
	void mostrar();
	void continuar();
	void reiniciar();
	void salir();
	void pausa();
	//Metodos accesores
	float getAlto() { return alto; }
	void setAlto(float _alto) { alto = _alto; }

	float getAncho() { return ancho; }
	void setAncho(float _ancho) { ancho = _ancho; }
};


