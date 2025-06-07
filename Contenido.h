#ifndef CONTENIDO_HPP
#define CONTENIDO_HPP
#include <string>
#include <iostream>


using namespace std;

class Contenido{

    public:
    virtual void calificar(float calif, string nom_video) = 0;
    virtual void muestraGenero(string gen) = 0;
    virtual void muestravidCalif(float calif) = 0;
    virtual void videos_peli_calif(float calif)=0;
    virtual void muestraEp(string nom_serie)=0;
    virtual void imprimir()=0;
};




#endif