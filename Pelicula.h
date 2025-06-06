#ifndef PELICULA_H
#define PELICULA_H
#include <string>
using namespace std;
#include "Video.h"

class Pelicula:public Video{
    private:
    string genero;
    public:
    Pelicula(int duracion, float calificacion, string estreno, string nombre, int id, string genero);
    void calificar(float,string);
    void videos_calificarp(float);
    void muestra_genero(string);
    void muestravid_calif(float calif);
    void imprimir();

};

#endif