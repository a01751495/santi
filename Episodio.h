#ifndef EPISODIO_H
#define EPISODIO_H
#include <string>
using namespace std;
#include "Video.h"

class Episodio:public Video{
    private:
    int num_ep;
    int temporada;
    public:
    Episodio(int duracion, float calificacion, string estreno, string nombre, int id, int num_ep, int temporada);
    void calificar(float calif,string nombre);
    void muestravid_calif(float calif);
    void imprimir();

};

#endif