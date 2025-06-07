#ifndef STREAMING_H
#define STREAMING_H
#include <iostream>
#include <vector>
#include <string>
#include "Contenido.h"
using namespace std;

class Streaming{
    private:
    vector<Contenido*> catalogo;
    public:
    Streaming();
    void calificar(float calif,string nom_video);
    void videos_peli_calif(float calif);
    void muestraGenero(string gen);
    void muestravidCalif(float calif);
    void muestraEp(string nom_serie);
    void anadirContenido(Contenido *c);





};






#endif