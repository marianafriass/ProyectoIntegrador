#ifndef CANCION_H
#define CANCION_H

#include "ElementoMusical.h"
#include "Artista.h"

class Cancion : public ElementoMusical {
private:
    std::string genero;
    std::string nombreArtista;
    Artista* artista;

public:
    Cancion();
    Cancion(std::string titulo, int duracion, int anio, std::string genero, std::string nombreArtista);
    
    // Sobrescritura de métodos virtuales
    void reproducir() override;
    std::string obtenerInfo() override;

    // Sobrecarga de operador
    bool operator<(const Cancion& otra) const {
        return duracion < otra.duracion;
    }

    // Getters y setters
    std::string getGenero() const;
    void setGenero(std::string genero);
    std::string getNombreArtista() const;
    void setNombreArtista(std::string nombreArtista);
    Artista* getArtista() const;
    void setArtista(Artista* artista);
};

#endif
