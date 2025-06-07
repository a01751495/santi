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
    cout << "═══════════════════════════════════════════════\n";
    cout << "🎬  Nombre: " << nombre << endl;
    cout << "📅  Fecha de estreno: " << estreno << endl;
    cout << "⏱️   Duración: " << duracion << " min" << endl;
    cout << "⭐  Calificación: " << calificacion << "/10" << endl;
    cout << "🔢  ID: " << id << endl;


}