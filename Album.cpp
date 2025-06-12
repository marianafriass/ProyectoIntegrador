#include "Album.h"
#include <iostream>
using namespace std;

Album::Album(string nombre, int anio) {
    this->nombre = nombre; // asignamos el nombre del album junto con el año de su creacion
    this->anio = anio;
    cantidadCanciones = 0; // iniciamos la cantidad de canciones en cero
}
// implementacion del uso de getters
string Album::getNombre() {return nombre;}
int Album::getAnio() {return anio;}
// uso de setters
void Album::setNombre(string nombre) {this->nombre = nombre;}
void Album::setAnio(int anio) {this->anio = anio;}
//añadimos un metodo para crear una cancion al album
bool Album::agregarCancion(Cancion* cancion) { //solo se podra agregar si es que aun existe espacio en el array, una vez agregada la cancion se aumenta la cantidad
    if (cantidadCanciones < MAX_CANCIONES) {
        canciones[cantidadCanciones++] = cancion;
        return true;
    }
    return false;
}
//metodo para ver la info de las canciones del album
void Album::mostrarCanciones() {
    for (int i = 0; i < cantidadCanciones; i++) {
        cout << " - " << canciones[i]->obtenerInfo() << endl; //aplicamos el polimorfismo cuando llamamos a nuestro metodo virtual ObtenerInfo
    }
}

Cancion** Album::getCanciones() {return canciones;}
int Album::getCantidadCanciones() {return cantidadCanciones;}
