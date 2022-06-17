#include "Video.h"
#include <string>
using namespace std;

//Constructores
Video::Video()
{
    iD = "201";
    titulo = "Batman";
    duracion = 120;
    genero = "Accion";
    calificacionPromedio = 8;
}


Video::Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio)
{
    iD = _iD;
    titulo = _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacionPromedio = _calificacionPromedio;
}


//Setters
void Video::setId(string _iD)
{
    iD = _iD;
}


void Video::setTitulo(string _titulo)
{
    titulo = _titulo;
}


void Video::setDuracion(int _duracion)
{
    duracion = _duracion;
}


void Video::setGenero(string _genero)
{
    genero = _genero;
}


void Video::setCalificacion(double _calificacionPromedio)
{
    calificacionPromedio = _calificacionPromedio;
}


//Getters
string Video::getId()
{
    return iD;
}


string Video::getTitulo()
{
    return titulo;
}


int Video::getDuracion()
{
    return duracion;
}


string Video::getGenero()
{
    return genero;
}


double Video::getCalificacion()
{
    return calificacionPromedio;
}


// Otro Metodo
string Video::str()
{
    return  iD + ',' + titulo + ','  + to_string(duracion) + ',' + genero + ','  + to_string(calificacionPromedio);
}


//Sobrecarga de metodo
ostream &operator << (ostream &out, const  Video &video)
{

    out << video.iD << "," << video.titulo << ","  << video.duracion << ","  << video.genero << ","  <<
        video.calificacionPromedio << endl;
    return out;
}
