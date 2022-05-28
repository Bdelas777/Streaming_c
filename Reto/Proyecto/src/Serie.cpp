#include "Serie.h"
//Constructores
Serie::Serie()
{
    cantidad = 0;
}

Serie::Serie(string _iD, string _titulo, int _duracion,string _genero, double _calificacionPromedio )
    : Video(_iD,  _titulo,  _duracion, _genero,  _calificacionPromedio)
{
    cantidad = 0;
}

//setters
void Serie::setEpisodio(int _index, Episodio _episodio)
{

    if( _index >= 0 and _index <= cantidad)
    {
        episodio[_index] = _episodio;
    }
}

void Serie::setCantidad(int _cantidad)
{
    cantidad = _cantidad;
}
//Getters
Episodio Serie::getEpisodio(int _index)
{
    if( _index >= 0 and _index <= cantidad)
    {
        return episodio[_index];
    }
    else
        return Episodio();
}

int Serie::getCantidad()
{
    return cantidad;
}
// otros metodos
double Serie::calculaCalPromedio()
{
    double acumulado=0;
    for(int index=0; index<cantidad; index++)
    {
        acumulado = acumulado + episodio[index].getCalificacion();
    }
    if (cantidad > 0)
        return acumulado/cantidad;
    else
        return 0;
}

string Serie::str()
{
    string total_episodios= "\n";
    for(int index=0; index<cantidad; index++)
    {
        total_episodios = total_episodios + episodio[index].str() +  "\n";
    }
    return  iD + "," + titulo + ","  + to_string(duracion) +","  + genero + ","  +to_string(calificacionPromedio) +
            total_episodios;
}
