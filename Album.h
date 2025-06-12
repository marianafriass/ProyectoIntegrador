#ifndef ALBUM_H
#define ALBUM_H
#include <string>
#include "Cancion.h"

const int MAX_CANCIONES = 10;

class Album {
private:
    string nombre;
    int anio;
    Cancion* canciones[MAX_CANCIONES];
    int cantidadCanciones;

public:
    Album(string nombre = "", int anio = 0);
    string getNombre();
    int getAnio();
    void setNombre(string nombre);
    void setAnio(int anio);
    bool agregarCancion(Cancion* cancion);
    void mostrarCanciones();
    Cancion** getCanciones();
    int getCantidadCanciones();
};

#endif
