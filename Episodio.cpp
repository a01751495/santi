#include "Episodio.h"
using namespace std;
#include <iostream>
#include <string>

Episodio::Episodio(int duracion, float calificacion, string estreno, string nombre, int id, int num_ep, int temporada):Video(duracion,  calificacion,  estreno,  nombre, id){
    this->num_ep=num_ep;
    this->temporada = temporada;
};

void Episodio::imprimir(){
    Video::imprimir();
    cout<<"Temporada:"<<temporada<<endl;
    cout<<"Numero de episodio:"<<num_ep<<endl;

}



void Episodio::calificar(float calif,string nom){
    if(nom == nombre){
        calificacion=calif;
        imprimir();
    }
}

void Episodio::muestravid_calif(float calif){
    if(calificacion>calif){
        imprimir();}
}
