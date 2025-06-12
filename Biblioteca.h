#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "Album.h"

const int MAX_ALBUMES = 10;

class Biblioteca {
private:
    Album* albumes[MAX_ALBUMES];
    int cantidadAlbumes;

public:
    Biblioteca();

    bool agregarAlbum(Album* album);
    void mostrarTodasLasCanciones();
    void mostrarTodasCanciones();
};

#endif
