#include "Biblioteca.h"
#include <iostream>

using namespace std;

Biblioteca::Biblioteca() {
    cantidadAlbumes = 0; //iniciamos la cantidad de albumes en cero
    for (int i = 0; i < MAX_ALBUMES; i++) {
        albumes[i] = nullptr;
    }
}
// primero vamos a verificar si aun existe espacio para agregar algun otro album, agregamos el album y aumentamos el contador
bool Biblioteca::agregarAlbum(Album* album) {
    if (cantidadAlbumes < MAX_ALBUMES) {
        albumes[cantidadAlbumes++] = album;
        return true;
    }
    return false;
}
// para que el programa pudiera tener un menu en base a lo que ya se tenía de codigo se implementaron dos opciones, mostrar artista y todas sus canciones
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
// o mostrar todas las canciones junto a su informacion de cancion
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
