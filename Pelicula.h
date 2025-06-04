#ifndef PELICULA_H
#define PELICULA_H
#include <string>
using namespace std;
#include "Video.h"

class Pelicula:public Video{
    private:
    string genero;
    public:
    Pelicula(int duracion, int calificacion, string estreno, string nombre, int id, string genero);
    float calificar(float,string);
    float videos_calificarp(float, string);
    void muestra_genero(string);
    void muestravid_calif(float calif);
    void imprimir();

};

#endif