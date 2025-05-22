#include <iostream>
#include "Biblioteca.h"
#include "Cancion.h"
#include "Album.h"
#include "Artista.h"

int main() {
    // Creamos los objetos
    Artista* artista = new Artista("Taylor Swift", "Pop");

    Cancion* cancion = new Cancion("Shake It Off", 219, 2014, "Pop", "Taylor Swift");
    cancion->setArtista(artista);

    Album* album = new Album("1989", 3300, 2014, "1989", 13);
    album->setArtista(artista);

    Biblioteca biblioteca("Mi Biblioteca", "Casa");

    // Uso de herencia y polimorfismo
    biblioteca.setElementoMusical(cancion);
    biblioteca.mostrarCatalogo();

    biblioteca.setElementoMusical(album);
    biblioteca.mostrarCatalogo();

    delete artista;
    delete cancion;
    delete album;

    return 0;
}
