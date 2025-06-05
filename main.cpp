#include <iostream>
#include "Biblioteca.h"
#include "Cancion.h"
#include "Album.h"
#include "Artista.h"

int main() {

    Biblioteca biblioteca("Biblioteca Musical");
    
    // Crear artistas
    Artista* taylor = new Artista("Taylor Swift", "Pop");

    // Musica
    Cancion* cancion1 = new Cancion("Welcome To New York", 219, 2014, "Pop", "Taylor Swift");
    Cancion* cancion2 = new Cancion("Shake It Off", 219, 2014, "Pop", "Taylor Swift");
    Cancion* cancion3 = new Cancion("Shake It Off", 219, 2014, "Pop", "Taylor Swift");
    Cancion* cancion4 = new Cancion("Shake It Off", 219, 2014, "Pop", "Taylor Swift");

    Album* album1 = new Album("1989 (Taylor's Version)", 3300, 2014, "1989", 13);

    // Asignar artistas
    cancion1->setArtista(taylor);

    album1->setArtista(taylor);

    // Agregar elementos a la biblioteca
    biblioteca.agregarElemento(cancion1);

    biblioteca.agregarElemento(album1);

    // Mostrar catálogo completo
    std::cout << "Mostrando catálogo completo:" << std::endl;
    biblioteca.mostrarCatalogo();

    // Buscar elementos por artista
    std::cout << "\nBuscando elementos de Taylor Swift:" << std::endl;
    int numResultados = 0;
    ElementoMusical** elementosTaylor = biblioteca.buscarPorArtista("Taylor Swift", numResultados);
    for (int i = 0; i < numResultados; ++i) {
        std::cout << elementosTaylor[i]->obtenerInfo() << std::endl;
    }
    delete[] elementosTaylor; // Libera el arreglo dinámico

    // Liberar memoria para los artistas
    delete taylor;

    return 0;
}
