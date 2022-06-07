#ifndef EPISODIO_H
#define EPISODIO_H
#include <iostream>
using namespace std;

class Episodio
{
protected:
    string titulo;
    int temporada;
    double calificacion;

public:
    Episodio();
    Episodio(string titulo,int _temporada,double _calificacion);

    //setters
    void setTitulo(string _titulo);
    void setTemporada(int _temporada);
    void setCalificacion(double _calificacion);

    //getters
    string getTitulo();
    int getTemporada();
    double getCalificacion();

    //Otros Metodos
    string str();

};

#endif // EPISODIO_H
