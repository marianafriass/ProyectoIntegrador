#ifndef ARTISTA_H
#define ARTISTA_H

#include <string>
using namespace std;

class Artista {
private:
    string nombre;

public:
    Artista(string nombre = "");
    string getNombre();
    void setNombre(string nombre);
};

#endif
