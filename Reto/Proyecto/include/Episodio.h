#ifndef EPISODIO_H
#define EPISODIO_H
#include <iostream>
using namespace std;

class Episodio
{
protected:
    string titulo;
    int temporada;
    int calificacion;

public:
    Episodio();
    Episodio(string titulo,int _temporada,int _calificacion);

    //setters
    void setTitulo(string _titulo);
    void setTemporada(int _temporada);
    void setCalificacion(int _calificacion);

    //getters
    string getTitulo();
    int getTemporada();
    int getCalificacion();

    //Otros Metodos
    string str();

};

#endif // EPISODIO_H
