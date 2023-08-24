#pragma once
#include <iostream>
using namespace std;
class Podadora
{
private:
	//Propiedades privadas
	float posicionX;
	float posicionY;
	float direccionX;
	float direccionY;
	float velocidadMovimiento;
	float alto;
	float ancho;
	string nombre;
	string rutaArchivoImagen;
public:
	//Constructores
	Podadora();
	Podadora(string RutaImagen);
public:
	//Metodos propios
	void limpiarLinea();
	void desaparecer();

	//Metodos accesores
	float getAlto() { return alto; }
	void setAlto(float _alto) { alto = _alto; }

	float getAncho() { return ancho; }
	void setAncho(float _ancho) { ancho = _ancho; }

	float getVelocidadMovimiento() { return velocidadMovimiento; }
	void setVelocidadMovimiento(float _velocidadMovimiento) { velocidadMovimiento = _velocidadMovimiento; }

	string getNombre() { return nombre; }
	void setNombre(string _nombre) { nombre = _nombre; }
};



