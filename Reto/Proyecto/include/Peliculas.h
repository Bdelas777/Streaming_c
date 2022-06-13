#ifndef PELICULAS_H
#define PELICULAS_H
#include"Pelicula.h"

const int  MAX_PEL = 50; // constante

class Peliculas
{

private://Atributos
    Pelicula *arrPtrPeliculas[MAX_PEL];
    int cantidad;


public:// Metodos
    //Constructores
    Peliculas();


    //Setters
    void setPtrPelicula(Pelicula *_pelicula);
    void setCantidadPeliculas(int _cantidad);


    //Getters
    Pelicula * getPtrPelicula(string _Id);
    int getCantidadPeliculas();


    //Otros metodos
    void leerArchivo();
    void reporteTodasLasPeliculas();
    void reporteConCalificacion(double _calificacion);
    void reporteGenero(string _genero);

};
#endif // PELICULAS_H

