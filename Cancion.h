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
    Cancion();
    Cancion(string titulo, int duracion, int año, string genero, string nombreArtista);
    
    // Sobrescritura de métodos virtuales
    void reproducir() override;
    string obtenerInfo() override;

    // Getters y setters
    string getGenero() const;
    void setGenero(string genero);
    string getNombreArtista() const;
    void setNombreArtista(string nombreArtista);
    Artista* getArtista() const;
    void setArtista(Artista* artista);
};

#endif
