#ifndef VIDEO_H
#define VIDEO_H
#include <stdio.h>
#include <string>
#include<iostream>
using namespace std;

class Video
{
protected://Atributos
    string iD;
    string titulo;
    int duracion;
    string genero;
    double calificacionPromedio;

public://Metodos
    //Constructores
    Video();
    Video(string _iD, string _titulo, int _duracion,string _genero, double _calificacionPromedio);

    //Setters
    void setId(string _iD);
    void setTitulo(string _titulo);
    void setDuracion(int _duracion);
    void setGenero(string _genero);
    void setCalificacion(double _calificacionPromedio);

    //Getters
    string getId();
    string getTitulo();
    int getDuracion();
    string getGenero();
    double getCalificacion();

    //Otros Metodos
    virtual string str();

};

#endif // VIDEO_H

