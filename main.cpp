#include <iostream>
#include <vector>
#include "Biblioteca.h"
#include "Cancion.h"
#include "Album.h"
#include "Artista.h"

int main() {
    // Crear artistas
    Artista* taylor = new Artista("Taylor Swift", "Pop");
    Artista* ed = new Artista("Ed Sheeran", "Pop/Folk");

    // Creación de los elementos musicales
    Cancion* cancion1 = new Cancion("Shake It Off", 219, 2014, "Pop", "Taylor Swift");
    Cancion* cancion2 = new Cancion("Shape of You", 233, 2017, "Pop", "Ed Sheeran");
    Album* album1 = new Album("1989", 3300, 2014, "1989", 13);
    Album* album2 = new Album("÷ (Divide)", 3564, 2017, "Divide", 16);

    // Asignar artistas
    cancion1->setArtista(taylor);
    cancion2->setArtista(ed);
    album1->setArtista(taylor);
    album2->setArtista(ed);

    // Uso del polimorfismo
    vector<ElementoMusical*> elementos = {cancion1, cancion2, album1, album2};

    for (ElementoMusical* elemento : elementos) {
        elemento->reproducir();
        cout << elemento->obtenerInfo() << endl;
        cout << "-----------------------------" << endl;
    }

    // Limpieza de memoria
    delete taylor;
    delete ed;
    delete cancion1;
    delete cancion2;
    delete album1;
    delete album2;

    return 0;
}
