#include "Video.h"
#include <iostream>
using namespace std;

Video::Video(int duracion, float calificacion, string estreno, string nombre, int id) {
    this->duracion = duracion;
    this->calificacion = calificacion;
    this->estreno = estreno;
    this->nombre = nombre;
    this->id = id;
}

void Video::imprimir(){
    cout<<"Nombre:"<<nombre<<endl;
    cout<<"Calificacion:"<<calificacion<<endl;
    cout<<"Fecha de estreno:"<<estreno<<endl;
    cout<<"Duracion:"<<duracion<<endl;
    cout<<"ID:"<<id<<endl;

}