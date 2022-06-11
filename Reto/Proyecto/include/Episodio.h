#ifndef EPISODIO_H
#define EPISODIO_H
#include <iostream>
using namespace std;

class Episodio
{
protected://Atributos
    string titulo;
    int temporada;
    double calificacion;

public://Metodos
    Episodio();
    Episodio(string _titulo, int _temporada, double _calificacion);

    //Setters
    void setTitulo(string _titulo);
    void setTemporada(int _temporada);
    void setCalificacion(double _calificacion);

    //Getters
    string getTitulo();
    int getTemporada();
    double getCalificacion();

    //Otros Metodos
    string str() const;

};

#endif // EPISODIO_H
