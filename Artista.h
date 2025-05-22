#ifndef ARTISTA_H
#define ARTISTA_H

#include <string>
using namespace std;

class Artista {
private:
    string nombre;
    string genero;

public:
    Artista();
    Artista(string nombre, string genero);
    
    string getNombre() const;
    void setNombre(string nombre);
    string getGenero() const;
    void setGenero(string genero);
    string mostrarInfo() const;
};

#endif
