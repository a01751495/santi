#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
using namespace std;

class Video {
protected:
    int duracion;
    float calificacion;
    string estreno;
    string nombre;
    int id;

public:
    Video();
    Video(int duracion, float calificacion, string estreno, string nombre, int id);

};

#endif 
