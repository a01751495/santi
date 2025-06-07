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

void Serie::calificar(float calif, string nom_vid){
    for(int i=0; i<ep.size() ; i++){
        ep[i]->calificar(calif,nom_vid);
    }
}

void Serie::muestravidCalif(float calif){
    for (int i=0; i<ep.size(); i++){
        ep[i]->muestravid_calif(calif);
    }
}

void Serie::muestraGenero(string gen){
    if (genero == gen)
    imprimir();
}

void Serie::muestraEp(string nom_serie){
    if (nombre == nom_serie){
        cout << "\n📺 Los episodios de la serie \"" << nombre << "\" son:\n";
        for (int i=0; i<ep.size(); i++){
            ep[i]->imprimir();
        }
    }
    
}

void Serie::anadirEpisodio(Episodio *e){
    ep.push_back(e);
    cout<<"El episodio se añadio"<<endl;
};
void Serie::imprimir(){
    cout << "\n📺 ══════════════════════════════════════════════\n";
    cout << "🎬  Serie: " << nombre << endl;
    cout << "📂  ID: " << id << "    🏷️  Género: " << genero << endl;
    cout << "📦  Episodios registrados: " << ep.size() << endl;
    cout << "═══════════════════════════════════════════════\n\n";
}

void Serie::videos_peli_calif(float) {
    // implementación vacía
}
    