#include "Biblioteca.h"
#include <iostream>
using namespace std;

Biblioteca::Biblioteca()
    : nombre(""), ubicacion(""), elemento(nullptr) {}

Biblioteca::Biblioteca(string nombre, string ubicacion)
    : nombre(nombre), ubicacion(ubicacion), elemento(nullptr) {}

ElementoMusical* Biblioteca::getElementoMusical() const {
    return elemento;
}

void Biblioteca::setElementoMusical(ElementoMusical* elemento) {
    this->elemento = elemento;
}

void Biblioteca::mostrarCatalogo() const {
    cout << "Catálogo de " << nombre
         << " en " << ubicacion << endl;

    if (elemento) {
        cout << elemento->obtenerInfo() << endl;
    }
}
