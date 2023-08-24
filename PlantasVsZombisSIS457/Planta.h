#pragma once
#include <iostream>
using namespace std;
class Planta
{
private:
	//Propiedades privadas
	int posiciónX;
	int posiciónY;
	int vida = 100;
	int daño = 7;
	float velocidadAtaque;
	float alto;
	float ancho;
	string color;
	string rutaArchivoImagen;
public:
	//propiedades publicas
	string nombre;
public:
	//Constructores
	Planta();
	Planta(string RutaImagen);

	//Metodos propios
	void posicionar();
	void atacar();
	void morir();


	//Metodos accesores
	int getVida() { return vida; }
	void setVida(int _vida) { vida = _vida; }

	int getDanio() { return daño; }//Daño
	void setDanio(int _daño) { daño = _daño; }

	float getAlto() { return alto; }
	void setAlto(float _alto) { alto = _alto; }

	float getAncho() { return ancho; }
	void setAncho(float _ancho) { ancho = _ancho; }

	string getColor() { return color; }
	void setColor(string _color) { color = _color; }

	float getVelocidadAtaque() { return velocidadAtaque; }
	void setVelocidadAtaque(float _velocidadAtaque) { velocidadAtaque = _velocidadAtaque; }

};


