#pragma once
#include <iostream>
using namespace std;
class Zombi
{
private:
	//Propiedades privadas
	int vida;
	int danio;
	float velocidadAtaque;
	string rutaArchivoImagen;
protected:
	float velocidadMovimiento;
	float posicionX;
	float posicionY;
	float direccionX;
	float direccionY;
public:
	//propiedades publicas
	string nombre;
	string color;

public:
	//Constructores
	Zombi();
	Zombi(string _nombre, int _vida, int _danio, int _velocidadMovimiento, int _velocidadAtaque, int _posicionX, int _posicionY);

	//Metodos propios
	void aparecer();
	void moverse();
	void atacar();
	void morir();

	//Metodos accesores
	int getVida() { return vida; }
	void setVida(int _vida) { vida = _vida; }

	int getDanio() { return danio; }//daño
	void setDanio(int _danio) { danio = _danio; }

	float getVelocidadAtaque() { return velocidadAtaque; }
	void setVelocidadAtaque(float _velocidadAtaque) { velocidadAtaque = _velocidadAtaque; }

	float getvelocidadMovimiento() { return velocidadMovimiento; }
	void  setvelocidadMovimiento(float _velocidadMovimiento) { velocidadMovimiento = _velocidadMovimiento; }

	void setPosicionX(float _posicionX) { posicionX = _posicionX; }
	float getPosicionX() { return posicionX; }

	void setPosicionY(float _posicionY) { posicionY = _posicionY; }
	float getPosicionY() { return posicionY; }

	void setDireccionX(float _direccionX) { direccionX = _direccionX; }
	float getDireccionX() { return direccionX; }

	void setDireccionY(float _direccionY) { direccionY = _direccionY; }
	float getDireccionY() { return direccionY; }

};


