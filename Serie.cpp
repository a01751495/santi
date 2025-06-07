#include "Contenido.h"
#include "Serie.h"
#include <iostream>
#include <vector>
#include <string>
#include "Episodio.h"


using namespace std;

Serie::Serie(string nom, int ide, string gen){
    nombre = nom;
    id = ide;
    genero = gen;
}

void Serie::calificar(int calif, string nom_vid){
    for(int i=0; i<ep.size() ; i++){
        ep[i].calificar(calif,nom_vid);
    }
}

void Serie::muestravidCalif(float calif){
    for (int i=0; i>ep.size(); i++){
        ep[i].muestravid_calif(calif);
    }
}

void Serie::muestraGenero(string gen){
    if (genero == gen)
    imprimir();
}

void Serie::muestraEp(string nom_serie){
    if (nombre == nom_serie)
    imprimir();
}

void Serie::imprimir(){

    cout<<" El género es: "<<genero<<endl;
    cout<<" El nombre del episodio es: "<<nombre<<endl;

}
