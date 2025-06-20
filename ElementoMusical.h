#ifndef ELEMENTOMUSICAL_H
#define ELEMENTOMUSICAL_H

#include <string>
using namespace std;

class ElementoMusical {
protected:
    string titulo;
    int duracion;
    int anio;

public:
    ElementoMusical(string titulo, int duracion, int anio);
    //getters
    string getTitulo();
    int getDuracion();
    int getAnio();
    //Setters
    void setTitulo(string titulo);
    void setDuracion(int duracion);
    void setAnio(int anio);
    //implementacion de los metodos virtuales
    virtual void reproducir() = 0;
    virtual string obtenerInfo() = 0;
};

#endif
