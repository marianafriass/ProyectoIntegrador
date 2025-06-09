#include "ElementoMusical.h"

ElementoMusical::ElementoMusical() : titulo(""), duracion(0), anio(0) {}

ElementoMusical::ElementoMusical(string titulo, int duracion, int anio)
    : titulo(titulo), duracion(duracion), anio(anio) {}

string ElementoMusical::getTitulo() const {
    return titulo;
}
void ElementoMusical::setTitulo(string titulo) {
    this->titulo = titulo;
}
int ElementoMusical::getDuracion() const {
    return duracion;
}
void ElementoMusical::setDuracion(int duracion) {
    this->duracion = duracion;
}
int ElementoMusical::getAnio() const {
    return anio;
}
void ElementoMusical::setAnio(int anio) {
    this->anio = anio;
}
