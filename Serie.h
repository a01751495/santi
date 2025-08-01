#include <iostream>
#include "Contenido.h"
#include "Episodio.h"
#ifndef SERIE_HPP
#define SERIE_HPP
#include <string>
#include <vector>

using namespace std;

class Serie:public Contenido{

    private:
    string nombre;
    vector <Episodio*> ep;
    int id;
    string genero;

    public:
    Serie();
    Serie(string nom, int ide, string gen);
    void calificar(float calif, string nom_vid);
    void muestravidCalif(float calif);
    void muestraGenero(string gen);
    void muestraEp(string nom_serie);
    void anadirEpisodio(Episodio *e);
    void videos_peli_calif(float calif);
    void imprimir();

};


#endif