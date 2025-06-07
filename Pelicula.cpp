#include "Pelicula.h"
using namespace std;
#include <iostream>
#include <string>

Pelicula::Pelicula(int duracion, float calificacion, string estreno, string nombre, int id, string gen):Video(duracion,  calificacion,  estreno,  nombre, id){
    genero = gen;
};

void Pelicula::imprimir(){
    Video::imprimir();
    cout << "🎭  Género: " << genero << endl;
    cout << "═══════════════════════════════════════════════\n\n";
};

void Pelicula::muestraEp(string nom_serie){};

void Pelicula::calificar(float calif,string nom){
    if(nom == nombre){
    calificacion=calif;
    cout<<"La calificación de la pelicula: "<< nombre<<"se ha cambiado exitosamente"<<endl;
    imprimir();}
    

};
void Pelicula::videos_peli_calif(float calif){
    if(calificacion>calif)
    imprimir();



};
void Pelicula::muestraGenero(string gen){
    if(genero==gen)
    imprimir();


};
void Pelicula::muestravidCalif(float calif){
    if(calificacion>calif)
    imprimir();
    

};


