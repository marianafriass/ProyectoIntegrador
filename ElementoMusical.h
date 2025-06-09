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
    ElementoMusical();
    ElementoMusical(string titulo, int duracion, int anio);
    virtual ~ElementoMusical() = default;

    // Métodos virtuales
    virtual void reproducir() = 0;
    virtual string obtenerInfo() = 0;

    // Getters y setters
    string getTitulo() const;
    void setTitulo(string titulo);
    int getDuracion() const;
    void setDuracion(int duracion);
    int getAnio() const;
    void setAnio(int anio);
};

#endif
