#ifndef ARTISTA_H
#define ARTISTA_H

#include <string>
#include <ostream>
using namespace std;

class Artista {
private:
    string nombre;
    string genero;

public:
    Artista();
    Artista(string nombre, string genero);
    
    // Operadores sobrecargados
    bool operator==(const Artista& otro) const;
    bool operator!=(const Artista& otro) const;
    friend ostream& operator<<(ostream& os, const Artista& artista);
    
    string getNombre() const;
    void setNombre(string nombre);
    string getGenero() const;
    void setGenero(string genero);
    string mostrarInfo() const;
};

#endif
