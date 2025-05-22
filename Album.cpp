#include "Album.h"
#include <iostream>
using namespace std;

Album::Album()
    : ElementoMusical(), nombreAlbum(""), numCanciones(0), artista(nullptr) {}

Album::Album(string titulo, int duracion, int año,
             string nombreAlbum, int numCanciones)
    : ElementoMusical(titulo, duracion, año),
      nombreAlbum(nombreAlbum),
      numCanciones(numCanciones),
      artista(nullptr) {}

void Album::reproducir() {
    cout << "Reproduciendo álbum: " << nombreAlbum << endl;
}

string Album::obtenerInfo() {
    return "Álbum: " + nombreAlbum +
           " (" + to_string(numCanciones) + " canciones)";
}

string Album::getNombreAlbum() const {
    return nombreAlbum;
}

void Album::setNombreAlbum(string nombreAlbum) {
    this->nombreAlbum = nombreAlbum;
}

int Album::getTotalCanciones() const {
    return numCanciones;
}

void Album::setTotalCanciones(int numCanciones) {
    this->numCanciones = numCanciones;
}

Artista* Album::getArtista() const {
    return artista;
}

void Album::setArtista(Artista* artista) {
    this->artista = artista;
}
