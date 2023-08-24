#include "Menu.h"
Menu::Menu() {
	alto = 1.5;
	ancho = 5;
	color = "verde";
	rutaArchivoImagen = "menu.png";
}
void Menu::seleccionarOpcion() {
	cout << "Menu seleccionando opcion" << endl;
}
void Menu::mostrar() {
	cout << "Menu mostrando" << endl;
}

void Menu::continuar() {
	cout << "Menu continuando" << endl;
}
void Menu::reiniciar() {
	cout << "Menu reiniciando" << endl;
}
void Menu::salir() {
	cout << "Menu saliendo" << endl;
}
void Menu::pausa() {
	cout << "Menu pausando" << endl;
}