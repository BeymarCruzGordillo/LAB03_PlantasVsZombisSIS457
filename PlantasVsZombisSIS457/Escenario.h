#pragma once
#include <iostream>
using namespace std;
class Escenario
{
private:
	//Propiedades 
	float alto;
	float ancho;
	int nivel;
	int numeroDeAsaltos;
	string rutaArchivoImagen;
public:
	//Propiedades publicas
	string nombre;
public:
	//Constructores
	Escenario();
	Escenario(string RutaImagen);

	//Metodos propios
	void iniciarAsalto();
	void finalizarAsalto();

	//Metodos accesores
	float getAlto() { return alto; }
	void setAlto(float _alto) { alto = _alto; }
	float getAncho() { return ancho; }
	void setAncho(float _ancho) { ancho = _ancho; }

	int getNivel() { return nivel; }
	void setNivel(int _nivel) { nivel = _nivel; }

	int getNumeroDeAsaltos() { return numeroDeAsaltos; }
	void setNumeroDeAsaltos(int _numeroDeAsaltos) { numeroDeAsaltos = _numeroDeAsaltos; }

};


