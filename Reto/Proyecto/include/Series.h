#ifndef SERIES_H
#define SERIES_H
#include"Serie.h"
const int  MAX_SERIES = 50;
class Series
{

private://Atributos
    Serie *arrPtrSeries[MAX_SERIES];
    int cantidad {};


public://Metodos
    // Constructores
    Series();
    Series(string, string, int, string, double, int);


    //Setters
    void setPtrSeries(Serie *ptr);
    void setCantidadSeries( int _cantidad);


    //Getters
    Serie* getPtrSeries(string _Id);
    int getCantidadSeries();


    //Otros metodos
    void leerArchivo();
    void reporteTodasLasSeries();
    void reporteConCalificacion(double _calificacion);
    void reporteGenero(string _genero);
    void calcularCalificacionSeries();
};

#endif // SERIES_H
