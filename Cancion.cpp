#include "Cancion.h"
#include <iostream>
using namespace std;

Cancion::Cancion(string titulo, int duracion, int anio, string genero, string nombreArtista)
    : ElementoMusical(titulo, duracion, anio) {
    this->genero = genero;
    this->nombreArtista = nombreArtista;}

void Cancion::reproducir() {cout << "Reproduciendo canción: " << titulo << endl;}

string Cancion::obtenerInfo() {return "Canción: " + titulo + ", Artista: " + nombreArtista + ", Género: " + genero;}
string Cancion::getGenero() {return genero;}
string Cancion::getNombreArtista() {return nombreArtista;}

Artista* Cancion::getArtista() {return artista;}

void Cancion::setGenero(string genero) {this->genero = genero;}
void Cancion::setNombreArtista(string nombreArtista) {this->nombreArtista = nombreArtista;}
void Cancion::setArtista(Artista* artista) {this->artista = artista;}
