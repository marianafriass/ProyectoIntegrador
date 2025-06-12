#include "ElementoMusical.h"

ElementoMusical::ElementoMusical(string titulo, int duracion, int anio) {
    this->titulo = titulo;
    this->duracion = duracion;
    this->anio = anio;
}

string ElementoMusical::getTitulo() {return titulo;}

int ElementoMusical::getDuracion() {return duracion;}
int ElementoMusical::getAnio() {return anio;}

void ElementoMusical::setTitulo(string titulo) {this->titulo = titulo;}
void ElementoMusical::setDuracion(int duracion) {this->duracion = duracion;}

void ElementoMusical::setAnio(int anio) {this->anio = anio;}
