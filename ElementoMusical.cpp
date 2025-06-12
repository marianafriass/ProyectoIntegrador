#include "ElementoMusical.h"

ElementoMusical::ElementoMusical(string titulo, int duracion, int anio) {
    this->titulo = titulo; //asignamos el titulo de la canion
    this->duracion = duracion; //junto con su duracion
    this->anio = anio; //y año de lanzamiento
}
//getters
string ElementoMusical::getTitulo() {return titulo;}
int ElementoMusical::getDuracion() {return duracion;}
int ElementoMusical::getAnio() {return anio;}
//Setters
void ElementoMusical::setTitulo(string titulo) {this->titulo = titulo;}
void ElementoMusical::setDuracion(int duracion) {this->duracion = duracion;}
void ElementoMusical::setAnio(int anio) {this->anio = anio;}
