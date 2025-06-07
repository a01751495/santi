#include <iostream>
#include "Pelicula.h"
#include "Video.h"
#include "Episodio.h"
#include "Streaming.h"
#include "Serie.h"
using namespace std;

int main(){
    Pelicula peli11(120, 8.8, "20/06/21","Forrest Gump", 1234, "Drama");
    Pelicula peli1(142, 9.3, "14/10/1994", "The Shawshank Redemption", 2001, "Drama");     // buena
    Pelicula peli2(88, 2.1, "15/03/2015", "Disaster Movie", 2002, "Comedy");              // mala
    Pelicula peli3(175, 9.2, "24/03/1972", "The Godfather", 2003, "Crime");               // excelente
    Pelicula peli4(90, 3.5, "01/04/2017", "Emoji Movie", 2004, "Animation");              // pésima
    Pelicula peli5(154, 8.8, "16/07/2010", "Inception", 2005, "Sci-Fi");                  // sólida
    Pelicula peli6(102, 1.9, "20/08/2020", "Cats", 2006, "Musical");                      // infame
    Pelicula peli7(130, 7.5, "20/11/2008", "Twilight", 2007, "Romance");                  // regular
    Pelicula peli8(96, 9.0, "18/11/1995", "Toy Story", 2008, "Animation");                // top animación
    Pelicula peli9(85, 4.3, "04/04/2014", "Sharknado 2", 2009, "Action");                 // mala pero meme
    Pelicula peli10(118, 6.5, "12/12/2012", "The Hobbit: An Unexpected Journey", 2010, "Fantasy"); // decente


    /*pelicula1.muestraGenero("Drama");
    pelicula1.calificar(10.1,"Forrest Gump");*/

    Episodio ep1(22, 9.6, "02/12/2013", "Rixty Minutes", 101, 8, 1);
    Episodio ep2(23, 9.8, "07/10/2015", "The Ricklantis Mixup", 102, 7, 3);
    Episodio ep3(22, 9.2, "04/08/2014", "Ricksy Business", 103, 11, 1);
    Episodio ep4(22, 9.4, "20/08/2017", "Pickle Rick", 104, 3, 3);
    Episodio ep5(22, 9.1, "30/11/2015", "Total Rickall", 105, 4, 2);
    Episodio ep6(23, 9.0, "24/07/2017", "Rest and Ricklaxation", 106, 6, 3);

    Serie serie1("Rick and Morty", 2345, "Comedy");

    serie1.anadirEpisodio(&ep1);
    serie1.anadirEpisodio(&ep2);
    serie1.anadirEpisodio(&ep3);
    serie1.anadirEpisodio(&ep4);
    serie1.anadirEpisodio(&ep5);
    serie1.anadirEpisodio(&ep6);

    /*serie1.calificar(10, "Rixty Minutes");
    serie1.muestraEp("Rick and Morty"); //POR QUE NO FUNCIONAAAA
*/
    Streaming miCatalogo;
    miCatalogo.anadirContenido(&serie1);
    miCatalogo.anadirContenido(&peli1);
    miCatalogo.anadirContenido(&peli2);
    miCatalogo.anadirContenido(&peli3);
    miCatalogo.anadirContenido(&peli4);
    miCatalogo.anadirContenido(&peli5);
    miCatalogo.anadirContenido(&peli6);
    miCatalogo.anadirContenido(&peli7);
    miCatalogo.anadirContenido(&peli8);
    miCatalogo.anadirContenido(&peli9);
    miCatalogo.anadirContenido(&peli10);
    miCatalogo.anadirContenido(&peli11);

    miCatalogo.calificar(10,"Rixty Minutes");
    ep1.imprimir();

   // miCatalogo.videos_peli_calif(9);

    miCatalogo.muestraGenero("Comedy");
    miCatalogo.muestraEp("Rick and Morty");



    return 1;

}
