#ifndef ALBUM_H
#define ALBUM_H
#include <string>
#include "Cancion.h"

const int MAX_CANCIONES = 10; //definimos el numero max de canciones

class Album {
private:
    string nombre;
    int anio;
    Cancion* canciones[MAX_CANCIONES];
    int cantidadCanciones;

public:
    Album(string nombre = "", int anio = 0);
    // getters
    string getNombre();
    int getAnio();
    // setters
    void setNombre(string nombre);
    void setAnio(int anio);
    //agregar cancion al album
    bool agregarCancion(Cancion* cancion);
    void mostrarCanciones();
    Cancion** getCanciones();
    int getCantidadCanciones();
};

#endif
