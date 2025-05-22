#ifndef ALBUM_H
#define ALBUM_H

#include "ElementoMusical.h"
#include "Artista.h"

class Album : public ElementoMusical {
private:
    string nombreAlbum;
    int numCanciones;
    Artista* artista;

public:
    Album();
    Album(string titulo, int duracion, int año, string nombreAlbum, int numCanciones);
    
    // Sobrescritura 
    void reproducir() override;
    string obtenerInfo() override;

    // Getters y setters
    string getNombreAlbum() const;
    void setNombreAlbum(string nombreAlbum);
    int getTotalCanciones() const;
    void setTotalCanciones(int numCanciones);
    Artista* getArtista() const;
    void setArtista(Artista* artista);
};

#endif
