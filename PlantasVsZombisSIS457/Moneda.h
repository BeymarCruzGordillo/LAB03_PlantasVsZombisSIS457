#pragma once
#include <iostream>
using namespace std;
class Moneda
{
private:
	//Propiedades privadas
	float posicionX;
	float posicionY;
	float alto;
	float ancho;
	int valor;
	string nombre;
	string color;
	string rutaArchivoImagen;

public:
	//Constructores
	Moneda();
	Moneda(string RutaImagen);

	//Metodos propios
	void aparecer();
	void desaparecer();

	//Metodos accesores
	float getAlto() { return alto; }
	void setAlto(float _alto) { alto = _alto; }

	float getAncho() { return ancho; }
	void setAncho(float _ancho) { ancho = _ancho; }

	float getPosicionX() { return posicionX; }
	void setPosicionX(float _posicionX) { posicionX = _posicionX; }

	float getPosicionY() { return posicionY; }
	void setPosicionY(float _posicionY) { posicionY = _posicionY; }

	int getValor() { return valor; }
	void setValor(int _valor) { valor = _valor; }

	string getNombre() { return nombre; }
	void setNombre(string _nombre) { nombre = _nombre; }
};



