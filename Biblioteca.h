#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <string>
#include "ElementoMusical.h"

using namespace std;

class Biblioteca {
private:
    string nombre;
    string ubicacion;
    ElementoMusical* elemento;

public:
    Biblioteca();
    Biblioteca(string nombre, string ubicacion);

    ElementoMusical* getElementoMusical() const;
    void setElementoMusical(ElementoMusical* elemento);

    void mostrarCatalogo() const;
};

#endif // BIBLIOTECA_H
