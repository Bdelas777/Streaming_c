#ifndef PELICULA_H
#define PELICULA_H
#include <iostream>
using namespace std;
#include "Video.h"

class Pelicula : public Video
{

private://Atributos
    int oscares;


public://Metodos
    //Constructores
    Pelicula();
    Pelicula(string, string, int, string, double, int _oscares);


    //Setters
    void setOscares(int _oscares);


    //Getters
    int getOscares();


    //Otros Metodos
    string str();

    //Sobrecarga de metodo
    friend ostream &operator << (ostream &out, const Pelicula &peli);

};

#endif // PELICULA_H

