#include "Cancion.h"
#include <iostream>

Cancion::Cancion() : ElementoMusical(), genero(""), nombreArtista(""), artista(nullptr) {}

Cancion::Cancion(string titulo, int duracion, int anio, string genero, string nombreArtista)
    : ElementoMusical(titulo, duracion, anio), genero(genero), nombreArtista(nombreArtista), artista(nullptr) {}

      void Cancion::reproducir() {
          cout << "Reproduciendo canción: " << getTitulo() << " - " << nombreArtista << endl;
      }

      string Cancion::obtenerInfo() {
          return "Canción: " + getTitulo() + " (" + genero + ") por " + nombreArtista;
      }

string Cancion::getGenero() const {
    return genero; }
void Cancion::setGenero(string genero) {
    this->genero = genero; }
string Cancion::getNombreArtista() const {
    return nombreArtista; }
void Cancion::setNombreArtista(string nombreArtista) {
    this->nombreArtista = nombreArtista; }
Artista* Cancion::getArtista() const {
    return artista; }
void Cancion::setArtista(Artista* artista) {
    this->artista = artista; }
