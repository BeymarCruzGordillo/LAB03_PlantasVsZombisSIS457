#pragma once
#include <iostream>
using namespace std;
//Muestra Todas las plantas en cada casilla las plantas 
//disponibles y bloqueadas para selecionar antes de iniciar la partida 
class Tabla
{
private:
	int alto;
	int ancho;
	int altoCasilla;
	int anchoCasilla;
	string numeroCasillas;
	string plantasDisponibles;
	string nombre;
	string color;
	string rutaArchivoImagen;
public:
	//Constructores
	Tabla();
	Tabla(string RutaImagen);

	//Metodos propios
	void mostrarTabla();
	void ocultarTabla();
	void disponible();
	void bloqueado();
	void selecionar();

	//Metodos accesores
	int getAlto() { return alto; }
	void setAlto(int _alto) { alto = _alto; }

	int getAncho() { return ancho; }
	void setAncho(int _ancho) { ancho = _ancho; }

	int getAltoCasilla() { return altoCasilla; }
	void setAltoCasilla(int _altoCasilla) { altoCasilla = _altoCasilla; }

	int getAnchoCasilla() { return anchoCasilla; }
	void setAnchoCasilla(int _anchoCasilla) { anchoCasilla = _anchoCasilla; }

	string getNombre() { return nombre; }
	void setNombre(string _nombre) { nombre = _nombre; }

	string getNumeroCasillas() { return numeroCasillas; }
	void setNumeroCasillas(string _numeroCasillas) { numeroCasillas = _numeroCasillas; }

	string getPlantasDisponibles() { return plantasDisponibles; }
	void setPlantasDisponibles(string _plantasDisponibles) { plantasDisponibles = _plantasDisponibles; }
};



