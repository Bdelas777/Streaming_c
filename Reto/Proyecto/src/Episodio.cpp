#include "Episodio.h"

//Constructores
Episodio::Episodio()
{
    titulo = "Una nueva esperanza";
    temporada = 2;
    calificacion = 7;
}

Episodio::Episodio(string _titulo,int _temporada,int _calificacion)
{
    titulo = _titulo;
    temporada = _temporada;
    calificacion = _calificacion;
}

//setters
void Episodio::setTitulo(string _titulo)
{
    titulo = _titulo;
}

void Episodio::setTemporada(int _temporada)
{
    temporada = _temporada;
}

void Episodio::setCalificacion(int _calificacion)
{
    calificacion = _calificacion;
}

//getters
string Episodio::getTitulo()
{
    return titulo;
}

int Episodio::getTemporada()
{
    return temporada;
}

int Episodio::getCalificacion()
{
    return calificacion;
}

//Otros Metodos
string Episodio::str()
{
    return  titulo + ","   + to_string(temporada) + ","  + to_string(calificacion);
}
