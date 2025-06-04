#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
using namespace std;

class Video {
private:
    int duracion;
    int calificacion;
    string estreno;
    string nombre;
    int id;

public:
    Video();
    Video(int duracion, int calificacion, string estreno, string nombre, int id);

};

#endif 
