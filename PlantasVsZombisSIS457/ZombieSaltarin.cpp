#include "ZombieSaltarin.h"
void ZombieSaltarin::salta()
{
	direccionY = 1;
	for (int i = 0; i < 10; i++) 
	{
		posicionY += direccionY * velocidadMovimiento;
		//salta segun su velocidad
	}


}
