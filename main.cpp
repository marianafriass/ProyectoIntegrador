#include <iostream>
#include "Biblioteca.h"
#include "Album.h"
#include "Cancion.h"
#include "Artista.h"
#include "ElementoMusical.h"

using namespace std;

int main() {
    Biblioteca miBiblioteca;

    // Creamos los artistas de nuestra preferenica
    Artista* taylorSwift = new Artista("Taylor Swift");
    Artista* queen = new Artista("Queen");
    Artista* lorde = new Artista("Lorde");

    // Crear álbumes
    Album* album1 = new Album("Tortured Poets Department", 2024);
    Album* album2 = new Album("Hot Space", 1982);
    Album* album3 = new Album("Melodrama", 2013);

    // Agregamos las canciones a los albumes
    Cancion* cancion1 = new Cancion("So long, London", 422, 2024, "Pop", taylorSwift->getNombre());
    cancion1->setArtista(taylorSwift);
    album1->agregarCancion(cancion1);

    Cancion* cancion2 = new Cancion("loml", 358, 2024, "Pop", taylorSwift->getNombre());
    cancion2->setArtista(taylorSwift);
    album1->agregarCancion(cancion2);

    Cancion* cancion3 = new Cancion("The Prophecy", 183, 2024, "Pop", taylorSwift->getNombre());
    cancion3->setArtista(taylorSwift);
    album1->agregarCancion(cancion3);

    Cancion* cancion4 = new Cancion("Under Pressure", 408, 1982, "Rock", queen->getNombre());
    cancion4->setArtista(queen);
    album2->agregarCancion(cancion4);

    Cancion* cancion5 = new Cancion("Supercut", 200, 2020, "Pop", lorde->getNombre());
    cancion5->setArtista(lorde);
    album3->agregarCancion(cancion5);

    Cancion* cancion6 = new Cancion("Dancer", 221, 1982, "Rock", queen->getNombre());
    cancion6->setArtista(queen);
    album2->agregarCancion(cancion6);

    Cancion* cancion7 = new Cancion("Sober", 200, 2020, "Pop", lorde->getNombre());
    cancion7->setArtista(lorde);
    album3->agregarCancion(cancion7);

    Cancion* cancion8 = new Cancion("Life is Real", 221, 1982, "Rock", queen->getNombre());
    cancion8->setArtista(queen);
    album2->agregarCancion(cancion8);

    Cancion* cancion9 = new Cancion("How Did It End", 183, 2024, "Pop", taylorSwift->getNombre());
    cancion9->setArtista(taylorSwift);
    album1->agregarCancion(cancion9);

    Cancion* cancion10 = new Cancion("Liability", 183, 2024, "Pop", lorde->getNombre());
    cancion10->setArtista(lorde);
    album3->agregarCancion(cancion10);

    // Agregar álbumes a la biblioteca
    miBiblioteca.agregarAlbum(album1);
    miBiblioteca.agregarAlbum(album2);
    miBiblioteca.agregarAlbum(album3);

    // Menú
    int opcion = 0;

    do {
        cout << "\n------ Bienvenido a tu Biblioteca Musical ------\n";
        cout << "\nHemos estado trabajando para que pueda agregar sus canciones y artistas favoritos...\nSin embargo, por el momento solo tenemos los siguentes predeterminados, esperamos que sean de su agrado :)\n\n";
        cout << "1. Mostrar todas las canciones disponibles\n";
        cout << "2. Mostrar todas las canciones organizadas por álbum\n";
        cout << "3. Salir del programa\n";
        cout << "\nPor favor selecciona una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                miBiblioteca.mostrarTodasCanciones();
                break;
            case 2:
                miBiblioteca.mostrarTodasLasCanciones();
                break;
            case 3:
                cout << "Saliendo del programa...\nVuelva pronto :)" << endl;
                break;
            default:
                cout << "Opción inválida, intenta de nuevo." << endl;
        }

    } while (opcion != 3);
}
