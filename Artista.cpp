#include "Artista.h"

Artista::Artista() : nombre(""), genero("") {}

Artista::Artista(string nombre, string genero) 
    : nombre(nombre), genero(genero) {}

bool Artista::operator==(const Artista& otro) const {
    return nombre == otro.nombre && genero == otro.genero;
}

bool Artista::operator!=(const Artista& otro) const {
    return !(*this == otro);
}

// Método mostrarInfo
string Artista::getNombre() const { return nombre; }
void Artista::setNombre(string nombre) {
    this->nombre = nombre;
}
string Artista::getGenero() const {
    return genero;
}
void Artista::setGenero(string genero) { this->genero = genero; }
string Artista::mostrarInfo() const {
    return "Artista: " + nombre + ", Género: " + genero;
}
