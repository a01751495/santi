#include "Pelicula.h"
using namespace std;
#include <iostream>
#include <string>

Pelicula::Pelicula(int duracion, float calificacion, string estreno, string nombre, int id, string gen):Video(duracion,  calificacion,  estreno,  nombre, id){
    genero = gen;
};

void Pelicula::imprimir(){
    Video::imprimir();
    cout<<"Genero:"<<genero<<endl;
};



void Pelicula::calificar(float calif,string nom){
    if(nom == nombre)
    calificacion=calif;
    imprimir();
    

};
void Pelicula::videos_calificarp(float calif){
    if(calificacion>calif)
    imprimir();
    else
    cout<<"No cumple"<<endl;


};
void Pelicula::muestra_genero(string gen){
    if(genero==gen)
    imprimir();
    else
    cout<<"No cumple"<<endl;

};
void Pelicula::muestravid_calif(float calif){
    if(calificacion>calif)
    imprimir();
    else
    cout<<"No cumple"<<endl;
};


