#include <iostream>
#include "Planta.h"
#include "Zombi.h"
#include "Escenario.h"
#include "Proyectil.h"
#include "SobreSemilla.h"
#include "Podadora.h"
#include "Tabla.h"
#include "Moneda.h"
#include "Sol.h"
#include "SobreSemilla.h"
//directivas de inclusion de las clases hijas de zombis
#include "ZombieColgante.h"
#include "ZombieDisco.h"
#include "ZombieLanzaGizantes.h"
//directivas de inclusion de las clases hijas de plantas
#include "PlantaBocaDeDragon.h"
#include "PlantaCarnibora.h"
#include "PlantaPinchoHierba.h"
int main()
{
    //Objetos Zombies de las clases hijas  
    //sin punteros 
    ZombieColgante zombieColganteA;
    zombieColganteA.nombre="Zombi Colgante";
    zombieColganteA.setVida(50);
    cout << "Se creo el Zombie: " << zombieColganteA.nombre << endl;
    cout << "la vida del Zombie es: " << zombieColganteA.getVida() << endl;
    cout << "Tiene una velocidad de movimiento de : " << zombieColganteA.getvelocidadMovimiento() << endl;
    zombieColganteA.moverse();//Metodo publico heredado de Zombi 
    zombieColganteA.secuestrarPlanta();//Metodo propio
    cout << endl;

    //con punteros
    ZombieDisco * zombieDisco = new ZombieDisco();
    zombieDisco->nombre = "Zombi Disco";
    zombieDisco->setVida(50);
    cout << "Se creo el Zombie: " << zombieDisco->nombre << endl;
    cout << "la vida del Zombie es:   " << zombieDisco->getVida() << endl;
    cout << "Tiene una velocidad de movimiento de : " << zombieDisco->getvelocidadMovimiento() << endl;
    zombieDisco->moverse();//Se uso polimorfismo para cambiar el comportamiento del metodo moverse de la clase padre
    zombieDisco->invocarZombis();//Metodo propio




    Planta planta1("Imagen/Planta");
    planta1.nombre = "Lanza Gizantes";
    cout << "Se creo la planta " << planta1.nombre << endl;
    cout << "La planta tiene una vida de " << planta1.getVida() << endl;
    cout << "La planta tiene un daño de " << planta1.getDanio() << endl;
    cout << "La planta tiene una velocidad de ataque de " << planta1.getVelocidadAtaque() << endl;
    planta1.atacar();
    cout << endl;


    Zombi zombi1("Zombie comun",100,50,30,50,0,0);
    cout << "Se creo el zombi   " << zombi1.nombre << endl;
    cout << "El zombi tiene una vida de " << zombi1.getVida() << endl;
    cout << "El zombi tiene un daño de " << zombi1.getDanio() << endl;
    cout << "El zombi tiene una velocidad de ataque de " << zombi1.getVelocidadAtaque() << endl;
    cout << "La posicion X del zombie es: " << zombi1.getPosicionX() << endl;
    zombi1.aparecer();
    zombi1.moverse();

    cout << endl;

    Proyectil proyectil1("Imagen/Proyectil");
    proyectil1.nombre = "Guisante";
    cout << "Se creo el proyectil   " << proyectil1.nombre << endl;
    cout << "El proyectil tiene un daño de " << proyectil1.getDanio() << endl;
    cout << "El proyectil tiene una velocidad de ataque de " << proyectil1.getVelocidadMovimiento() << endl;
    proyectil1.colision();
    cout << endl;

    Podadora podadora1("Imagen/Podadora");
    cout << "Se creo la podadora   " << podadora1.getNombre() << endl;
    cout << "Su velocidad de movimiento es " << podadora1.getVelocidadMovimiento() << endl;
    podadora1.limpiarLinea();
    cout << endl;

    Moneda moneda1("Moneda/Imagen");
    cout << "Se creo la moneda   " << moneda1.getNombre() << endl;
    cout << "Su valor es de " << moneda1.getValor() << endl;
    moneda1.aparecer();
    cout << endl;

    Sol sol1("Imagen/Sol");
    cout << "Se creo el sol   " << sol1.getNombre() << endl;
    cout << "Su valor es de " << sol1.getValor() << endl;
    cout << endl;

    Escenario escenario1("Imagen/Escenario");
    escenario1.nombre = "Jardin";
    cout << "Se creo el escenario   " << escenario1.nombre << endl;
    cout << "Nivel de escenario No " << escenario1.getNivel() << endl;
    cout << "Numero de asaltos " << escenario1.getNumeroDeAsaltos() << endl;
    escenario1.iniciarAsalto();
    cout << endl;

    SobreSemilla sobreSemilla01("Imagen/SobreSemilla");
    sobreSemilla01.nombreSemilla = "Girasol";
    cout << "Se creo el sobre de semilla   " << sobreSemilla01.getNombre() << endl;
    cout << "El sobre contiene al semilla de " << sobreSemilla01.nombreSemilla << endl;
    cout << "El sobre tiene un valor de " << sobreSemilla01.getValor() << endl;
    sobreSemilla01.carga();

    Tabla tablaA("Imagen/Tabla");
    cout << "Se creo la tabla   " << tablaA.getNombre() << endl;
    cout << "numero de casillas " << tablaA.getNumeroCasillas() << endl;
    cout << "Plantas Disponibles " << tablaA.getPlantasDisponibles() << endl;
    tablaA.mostrarTabla();
    cout << endl;

}

