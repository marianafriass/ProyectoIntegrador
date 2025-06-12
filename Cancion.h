#ifndef CANCION_H
#define CANCION_H

#include "ElementoMusical.h"
#include "Artista.h"

class Cancion : public ElementoMusical {
private:
    string genero;
    string nombreArtista;
    Artista* artista;

public:
    Cancion(string titulo, int duracion, int anio, string genero, string nombreArtista);

    void reproducir();
    string obtenerInfo();

    string getGenero();
    string getNombreArtista();
    Artista* getArtista();

    void setGenero(string genero);
    void setNombreArtista(string nombreArtista);
    void setArtista(Artista* artista);
};

#endif
