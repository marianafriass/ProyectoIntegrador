#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <string>
#include "ElementoMusical.h"

class Biblioteca {
private:
    std::string nombre;
    ElementoMusical** elementos; 
    int tamanio; 
    int capacidad; 

    void redimensionar(int nuevaCapacidad); 

public:
    Biblioteca();
    Biblioteca(std::string nombre);
    ~Biblioteca();
    
    void agregarElemento(ElementoMusical* elemento);
    void eliminarElemento(const std::string& titulo);
    void mostrarCatalogo() const;
    ElementoMusical** buscarPorArtista(const std::string& nombreArtista, int& resultados) const;
};

#endif
