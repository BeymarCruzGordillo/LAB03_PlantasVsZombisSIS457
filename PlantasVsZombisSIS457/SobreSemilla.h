#pragma once
#include <iostream>
using namespace std;
class SobreSemilla
{
private:
	//Propiedades privadas
	float alto;
	float ancho;
	int valor;
	int tiempoEspera;
	string nombre;
	string color;
	string rutaArchivoImagen;
public:
	//propiedades publicas
	string nombreSemilla;

	//Constructores
	SobreSemilla();
	SobreSemilla(string RutaImagen);

	//Metodos propios
	void carga();
	void recoger();

	//Metodos accesores
	float getAlto() { return alto; }
	void setAlto(float _alto) { alto = _alto; }

	float getAncho() { return ancho; }
	void setAncho(float _ancho) { ancho = _ancho; }

	int getValor() { return valor; }
	void setValor(int _valor) { valor = _valor; }

	int getTiempoEspera() { return tiempoEspera; }
	void setTiempoEspera(int _tiempoEspera) { tiempoEspera = _tiempoEspera; }

	string getNombre() { return nombre; }
	void setNombre(string _nombre) { nombre = _nombre; }
};


