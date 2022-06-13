#include "Series.h"
#include<fstream>
#include <sstream>
#include"Serie.h"
#include"Episodio.h"

// Constructores
Series::Series()
{
    cantidad = 0;
}


//Setters
void Series::setPtrSeries(Serie *ptr)
{
    if (cantidad < 50)
        arrPtrSeries[cantidad++] = ptr;
}


void Series::setCantidadSeries( int _cantidad)
{
    cantidad = _cantidad;
}


//Getters
Serie* Series::getPtrSeries(string _Id)
{   int contador = 0;
    for(int iR = 0; iR < cantidad; iR++)
    {
        if(arrPtrSeries[iR] -> getId() == _Id){
            contador = 1;
            cout << arrPtrSeries[iR] -> str();
            return arrPtrSeries[iR];
        }
    }
    return nullptr;
}


int Series::getCantidadSeries()
{
    return cantidad;
}


//Otros metodos
void Series::leerArchivo()
{
    string linea, dato, row[6];
    int iRow{}, iS{}, cantEpisodios{};
    fstream lectura;
    Episodio *episodio;
    lectura.open("C:/Users/6QV46LA/OneDrive/Documentos/GitHub/TC1030_302_de_la_Sierra_Bernardo/Serie2021.csv",ios::in);
    while(getline(lectura, linea))
    {
        std::stringstream registro(linea);
        iRow = 0;
        while(getline(registro, dato, ','))
            row[iRow++] = dato;
        setPtrSeries( new Serie(row[0], row[1], stoi(row[2]), row[3], stod(row[4]), 0));
    }

    lectura.close();
    lectura.open("C:/Users/6QV46LA/OneDrive/Documentos/GitHub/TC1030_302_de_la_Sierra_Bernardo/Episodio2021.csv",ios::in);
    while(getline(lectura, linea))
    {
        stringstream registro(linea);
        iRow = 0;
        while(getline(registro, dato, ','))
            row[iRow++] = dato;
        iS = stoi(row[0]) - 500;
        episodio = new Episodio(row[1], stoi(row[2]), stod(row[3]));
        cantEpisodios = arrPtrSeries[iS] -> getCantidad();
        if(cantEpisodios < 5)
        {
            arrPtrSeries[iS] -> setEpisodio(cantEpisodios, * (episodio));
            arrPtrSeries[iS] -> setCantidad(++ cantEpisodios);
        }
    }
    lectura.close();
    //for(int iS=0;iS<cantidad;iS++)
    //  cout << arrPtrSeries[iS]->str() << endl;
}


void Series::reporteTodasLasSeries()
{
    double acumulado = 0;
    for(int iR = 0; iR < cantidad; iR ++)
    {
        acumulado = acumulado + arrPtrSeries[iR] -> getCalificacion();
        cout<< iR << "-" << '*' <<  arrPtrSeries[iR] -> str() << endl;
    }
    if (cantidad > 0)
        cout << "Promedio Series:" << acumulado / cantidad << endl;
    else
        cout << 0;
}


void Series::reporteConCalificacion(double _calificacion)
{
    int contador = 0;
    for(int iR= 0; iR < cantidad; iR ++)
    {
        if(arrPtrSeries[iR] -> getCalificacion() == _calificacion)
        {
            cout << arrPtrSeries[iR] -> str() << endl;
            contador ++;
        }
    }
    if(contador == 0)
        cout << "No hay series de la calificación: " << _calificacion << endl;
}


void Series::reporteGenero(string _genero)
{
    int count = 0;
    for(int iR = 0; iR < cantidad; iR ++)
    {
        if(arrPtrSeries[iR] -> getGenero() == _genero)
        {
            cout << '*' << * arrPtrSeries[iR] << endl;
            count ++;
        }
    }
    if(count == 0)
        cout << "No hay peliculas del genero:" << _genero << endl;
}


void Series::calcularCalificacionSeries()
{
    for(int iR = 0; iR < cantidad; iR ++)
        arrPtrSeries[iR] -> setCalificacion(arrPtrSeries[iR] -> calculaCalPromedio());
}
