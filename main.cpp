#include <iostream>
#include "Biblioteca.h"
#include "Cancion.h"
#include "Album.h"
#include "Artista.h"

int main() {

    Biblioteca biblioteca("Biblioteca Musical");
    
    // Creamos los artistas
    Artista* taylor = new Artista("Taylor Swift", "Pop");
    Artista* the1979 = new Artista("The 1979", "Pop");
    Artista* lorde = new Artista("Lorde", "Pop");

    // Creamos las canciones de nuestra elección
    Cancion* cancion1 = new Cancion("loml", 437, 2024, "Pop", "Taylor Swift");
    Cancion* cancion2 = new Cancion("The Smallest Man Who Ever Lived", 405, 2024, "Pop", "Taylor Swift");
    Cancion* cancion3 = new Cancion("The Prophecy", 409, 2024, "Pop", "Taylor Swift");
    Cancion* cancion4 = new Cancion("How Did It End?", 429, 2024, "Pop", "Taylor Swift");
    Cancion* cancion5 = new Cancion("Robbers", 389, 2013, "Pop", "The 1979");
    Cancion* cancion6 = new Cancion("About You", 405, 2022, "Pop", "The 1979");
    Cancion* cancion7 = new Cancion("Somebody Else", 421, 2016, "Pop", "The 1979");
    Cancion* cancion8 = new Cancion("Supercut", 329, 2017, "Pop", "Lorde");

    Album* album1 = new Album("Tortured Poets Department", 3300, 2014, "Tortured Poets Department", 13);

    // Asignamos las canciones a los artistas
    cancion1->setArtista(taylor);
    cancion2->setArtista(taylor);
    cancion3->setArtista(taylor);
    cancion4->setArtista(taylor);
    cancion5->setArtista(the1979);
    cancion6->setArtista(taylor);
    cancion7->setArtista(taylor);
    cancion8->setArtista(lorde);

    album1->setArtista(taylor);

    // Agregar elementos a la biblioteca
    biblioteca.agregarElemento(cancion7);
    biblioteca.agregarElemento(cancion8);
    biblioteca.agregarElemento(cancion1);
    biblioteca.agregarElemento(cancion4);
    biblioteca.agregarElemento(cancion5);
    biblioteca.agregarElemento(cancion3);
    biblioteca.agregarElemento(cancion2);
    biblioteca.agregarElemento(cancion6);


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
    delete[] elementosTaylor;
    delete taylor;

    return 0;
}
