#include "Episodio.h"

//Constructores
Episodio::Episodio()
{
    titulo = "Una nueva esperanza";
    temporada = 2;
    calificacion = 7;
}


Episodio::Episodio(string _titulo, int _temporada, double _calificacion)
{
    titulo = _titulo;
    temporada = _temporada;
    calificacion = _calificacion;
}


//Setters
void Episodio::setTitulo(string _titulo)
{
    titulo = _titulo;
}


void Episodio::setTemporada(int _temporada)
{
    temporada = _temporada;
}


void Episodio::setCalificacion(double _calificacion)
{
    calificacion = _calificacion;
}


//Getters
string Episodio::getTitulo()
{
    return titulo;
}


int Episodio::getTemporada()
{
    return temporada;
}


double Episodio::getCalificacion()
{
    return calificacion;
}


//Otros Metodos
string Episodio::str() const
{
    return  titulo + ',' + to_string(temporada) + ','  + to_string(calificacion);
}

//Sobrecarga de metodo
ostream &operator << (ostream &out, const Episodio &episodio)
{
    out << episodio.titulo << ',' << episodio.temporada << ',' << episodio.calificacion << endl;
    return out;
}
