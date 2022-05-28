#ifndef PELICULA_H
#define PELICULA_H
#include <iostream>
using namespace std;
#include "Video.h"


class Pelicula : public Video
{
private:
    int oscares;

public:
    //Constructores
    Pelicula();
    Pelicula(string, string, int, string, double,int _oscares);

    //setters
    void setOscares(int _oscares);

    //getters
    int getOscares();

    //Otros Metodos
    string str();

};

#endif // PELICULA_H

