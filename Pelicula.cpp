#include "Pelicula.h"
using namespace std;
#include <iostream>
#include <string>

Pelicula::Pelicula(int duracion, int calificacion, string estreno, string nombre, int id, string gen):Video(duracion,  calificacion,  estreno,  nombre, id){
    genero = gen;
}

