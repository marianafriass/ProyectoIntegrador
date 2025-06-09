#include "Biblioteca.h"
#include "Cancion.h"
#include "Album.h"
#include <iostream>
#include <cstring>

Biblioteca::Biblioteca() : nombre("Mi Biblioteca"), elementos(nullptr), tamanio(0), capacidad(100) {
    elementos = new ElementoMusical*[capacidad]; 
}

Biblioteca::Biblioteca(std::string nombre) : nombre(nombre), elementos(nullptr), tamanio(0), capacidad(100) {
    elementos = new ElementoMusical*[capacidad]; 
}

Biblioteca::~Biblioteca() {
    for (int i = 0; i < tamanio; ++i) {
        delete elementos[i]; 
    }
    delete[] elementos;
}

// Implementación de agregarElemento
void Biblioteca::agregarElemento(ElementoMusical* elemento) {
    if (tamanio >= capacidad) {
        throw std::runtime_error("Capacidad máxima de la biblioteca alcanzada."); // Marca error si excede el limite
    }
    elementos[tamanio++] = elemento; // Agrega el elemento al arreglo
}

// Implementación de eliminarElemento
void Biblioteca::eliminarElemento(const std::string& titulo) {
    for (int i = 0; i < tamanio; ++i) {
        if (elementos[i]->getTitulo() == titulo) {
            delete elementos[i]; // Elimina el elemento
            for (int j = i; j < tamanio - 1; ++j) {
                elementos[j] = elementos[j + 1]; 
            }
            --tamanio;
            break;
        }
    }
}

// Implementación de mostrarCatalogo
void Biblioteca::mostrarCatalogo() const {
    std::cout << "Catálogo de " << nombre << std::endl;
    std::cout << "--------------------------------" << std::endl;
    for (int i = 0; i < tamanio; ++i) {
        if (elementos[i]) { // Validar que no sea nullptr
            std::cout << elementos[i]->obtenerInfo() << std::endl;
        }
    }
}

// Implementación de buscarPorArtista
ElementoMusical** Biblioteca::buscarPorArtista(const std::string& nombreArtista, int& resultados) const {
    resultados = 0;
    ElementoMusical** encontrados = new ElementoMusical*[tamanio];
    for (int i = 0; i < tamanio; ++i) {
        if (Cancion* cancion = dynamic_cast<Cancion*>(elementos[i])) {
            if (cancion->getNombreArtista() == nombreArtista) {
                encontrados[resultados++] = cancion;
            }
        } else if (Album* album = dynamic_cast<Album*>(elementos[i])) {
            if (album->getArtista() && album->getArtista()->getNombre() == nombreArtista) {
                encontrados[resultados++] = album;
            }
        }
    }
    return encontrados;
}
