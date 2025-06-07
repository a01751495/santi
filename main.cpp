#include <iostream>
#include "Pelicula.h"
#include "Video.h"
using namespace std;

int main(){
    Pelicula pelicula1(120, 8.8, "20/06/21","Forrest Gump", 1234, "drama");

    pelicula1.muestra_genero("dmdm");
    pelicula1.calificar(10.1,"Forrest Gump");
    pelicula1.muestravid_calif(13);
    



    


    return 1;

}
