#include "Album.h"
#include <iostream>
using namespace std;

Album::Album(string nombre, int anio) {
    this->nombre = nombre;
    this->anio = anio;
    cantidadCanciones = 0;
}

string Album::getNombre() {return nombre;}
int Album::getAnio() {return anio;}
void Album::setNombre(string nombre) {this->nombre = nombre;}
void Album::setAnio(int anio) {this->anio = anio;}

bool Album::agregarCancion(Cancion* cancion) {
    if (cantidadCanciones < MAX_CANCIONES) {
        canciones[cantidadCanciones++] = cancion;
        return true;
    }
    return false;
}

void Album::mostrarCanciones() {
    for (int i = 0; i < cantidadCanciones; i++) {
        cout << " - " << canciones[i]->obtenerInfo() << endl;
    }
}

Cancion** Album::getCanciones() {return canciones;}
int Album::getCantidadCanciones() {return cantidadCanciones;}
