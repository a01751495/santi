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
    void calificar(float calif,string nom_video);
    void videos_peli_calif(float calif);
    void muestraGenero(string gen);
    void muestravidCalif(float calif);
    void imprimir();
    void muestraEp(string nom_serie);

};

#endif