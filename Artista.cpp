#include "Artista.h"

Artista::Artista()
    : nombre(""), genero("") {}

Artista::Artista(string nombre, string genero)
    : nombre(nombre), genero(genero) {}

string Artista::getNombre() const {
    return nombre;
}

void Artista::setNombre(string nombre) {
    this->nombre = nombre;
}

string Artista::getGenero() const {
    return genero;
}

void Artista::setGenero(string genero) {
    this->genero = genero;
}

string Artista::mostrarInfo() const {
    return "Artista: " + nombre +
           ", Género: " + genero;
}
