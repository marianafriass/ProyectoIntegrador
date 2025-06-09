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
    
    // Métodos
    string getNombre() const;
    void setNombre(string nombre);
    string getGenero() const;
    void setGenero(string genero);
    string mostrarInfo() const;

    // Operadores sobrecargados eliminados
    bool operator==(const Artista& otro) const;
    bool operator!=(const Artista& otro) const;
};

#endif
