#include <iostream>
#include <vector>
#include <string>
#include "Streaming.h"
#include "Pelicula.h"
#include "Contenido.h"
#include "Serie.h"

void Streaming::calificar(float calif,string nom_video){
    for(int i=0; i<catalogo.size() ; i++){
        catalogo[i]->calificar(calif,nom_video);
    }

}

Streaming::Streaming(){};

void Streaming::anadirContenido(Contenido *c){
    catalogo.push_back(c);
    c->imprimir();

}

void Streaming::videos_peli_calif(float calif){
    for(int i=0; i < catalogo.size();i++){
        Pelicula * pl =dynamic_cast <Pelicula *> (catalogo[i]);
        if (pl !=0){
            catalogo[i]->videos_peli_calif(calif);
    }
    }

}
void Streaming::muestraGenero(string gen){
    for(int i=0; i<catalogo.size() ; i++){
        catalogo[i]->muestraGenero(gen);
    }
};
void Streaming::muestravidCalif(float calif){
    for(int i=0; i<catalogo.size() ; i++){
        catalogo[i]->muestravidCalif(calif);
    }
}
void Streaming::muestraEp(string nom_serie){
    for(int i=0; i < catalogo.size();i++){
        Serie * sr =dynamic_cast <Serie *> (catalogo[i]);
        if (sr !=0){
            catalogo[i]->muestraEp(nom_serie);
    }
    }

}