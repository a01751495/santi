#ifndef PELICULA_H
#define PELICULA_H
#include <string>
using namespace std;
#include "Video.h"
#include "Contenido.h"

class Pelicula:public Video, public Contenido{
    private:
    string genero;
    public:
    Pelicula(int duracion, float calificacion, string estreno, string nombre, int id, string genero);
    void calificar(float,string);
    void videos_peli_calif(float);
    void muestraGenero(string);
    void muestravidCalif(float calif);
    void imprimir();

};

#endif