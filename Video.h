#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
using namespace std;

class Video {
private:
    int duracion;
    string estreno;
    int id;
protected:
    string nombre;
    float calificacion;
public:
    Video();
    Video(int duracion, float calificacion, string estreno, string nombre, int id);
    void imprimir();

};

#endif 
