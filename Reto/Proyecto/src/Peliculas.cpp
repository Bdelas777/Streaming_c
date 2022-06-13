#include "Peliculas.h"
#include<fstream>
#include <sstream>
#include"Pelicula.h"
//Constructores
Peliculas::Peliculas()
{
    cantidad = 0;
}


//Setters
void Peliculas::setPtrPelicula(Pelicula *_pelicula)
{
    if (cantidad < 50)
        arrPtrPeliculas[cantidad++] = _pelicula;
}


void Peliculas::setCantidadPeliculas(int _cantidad)
{
    cantidad = _cantidad;
}


//Getters
Pelicula* Peliculas::getPtrPelicula(string _Id)
{
    int contador = 0;
    for(int iR = 0; iR < cantidad; iR ++)
    {
        if(arrPtrPeliculas[iR] -> getId()==_Id)
        {
            contador = 1;
            cout << arrPtrPeliculas[iR] -> str();
            return arrPtrPeliculas[iR];
        }

    }
    return nullptr;
}


int Peliculas::getCantidadPeliculas()
{
    return cantidad;
}


//Otros metodos
void Peliculas::leerArchivo()
{
    fstream fin;
    string row[6];
    string line,word;
    fin.open("C:/Users/6QV46LA/OneDrive/Documentos/GitHub/TC1030_302_de_la_Sierra_Bernardo/Reto/Pelicula-1.csv",ios::in);
    cantidad = 0;
    while(getline(fin, line))
    {
        stringstream s(line);
        int iR = 0;
        while(getline(s, word, ','))
            row[iR++] = word;
        setPtrPelicula(new Pelicula(row[0], row[1], stoi(row[2]), row[3], stod(row[4]), stoi(row[5])));
    }
    fin.close();
    /*(int iR=0;iR<cantidad;iR++){
    	cout<< iR << " - "<< arrPtrPeliculas[iR]->str()<<endl;
    }*/
}


void Peliculas::reporteTodasLasPeliculas()
{
    double acumulado = 0;
    for(int iR = 0; iR < cantidad; iR ++)
    {
        acumulado = acumulado + arrPtrPeliculas[iR] -> getCalificacion();
        cout << iR << "-" << arrPtrPeliculas[iR] -> str() << endl;
    }
    if (cantidad > 0)
        cout << "Promedio Peliculas:" << acumulado / cantidad << endl;
    else
        cout << "No hay promedio";
}


void Peliculas::reporteConCalificacion(double _calificacion)
{
    int contador = 0;
    for(int iR = 0; iR < cantidad; iR ++)
    {
        if(arrPtrPeliculas[iR] -> getCalificacion() == _calificacion)
        {
            cout << arrPtrPeliculas[iR] -> str() << endl;
            contador ++;
        }
    }
    if(contador == 0)
        cout << "No hay peliculas de la calificación:" << _calificacion << endl;
}


void Peliculas::reporteGenero(string _genero)
{
    int contador = 0;
    for(int iR = 0; iR < cantidad; iR ++)
    {
        if(arrPtrPeliculas[iR] -> getGenero() == _genero)
        {
            cout << iR << ' ' << *arrPtrPeliculas[iR];
            contador ++;
        }
    }
    if(contador == 0)
        cout << "No hay peliculas del genero:" << _genero << endl;
}
