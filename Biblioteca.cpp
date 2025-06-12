#include "Biblioteca.h"
#include <iostream>

using namespace std;

Biblioteca::Biblioteca() {
    cantidadAlbumes = 0;
    for (int i = 0; i < MAX_ALBUMES; i++) {
        albumes[i] = nullptr;
    }
}

bool Biblioteca::agregarAlbum(Album* album) {
    if (cantidadAlbumes < MAX_ALBUMES) {
        albumes[cantidadAlbumes++] = album;
        return true;
    }
    return false;
}

void Biblioteca::mostrarTodasLasCanciones() {
    cout << "\n----Canciones de la biblioteca ordenadas por artista----\n\n";

    for (int i = 0; i < cantidadAlbumes; i++) {
        if (albumes[i] != nullptr) {
            cout << "Álbum: " << albumes[i]->getNombre() << " (" << albumes[i]->getAnio() << ")\n";
            for (int j = 0; j < albumes[i]->getCantidadCanciones(); j++) {
                Cancion* cancion = albumes[i]->getCanciones()[j];
                if (cancion != nullptr) {
                    cout << " - " << cancion->getTitulo() << endl;}
            }
        }
    }
}

void Biblioteca::mostrarTodasCanciones() {
    cout << "\n----Todas las canciones disponibles de la biblioteca-----\n\n";

    for (int i = 0; i < cantidadAlbumes; i++) {
        if (albumes[i] != nullptr) {
            Cancion** canciones = albumes[i]->getCanciones();
            int cantidadCanciones = albumes[i]->getCantidadCanciones();

            for (int j = 0; j < cantidadCanciones; j++) {
                if (canciones[j] != nullptr) {
                    cout << " - " << canciones[j]->obtenerInfo() << endl;}
            }
        }
    }
}
