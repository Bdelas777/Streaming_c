#include "Peliculas.h"
#include<fstream>
#include <sstream>
#include"Pelicula.h"
//Constructores
Peliculas::Peliculas(){}

Peliculas::Peliculas(string _iD, string _titulo, int _duracion,string _genero, double _calificacionPromedio, int _oscares){}

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
	for(int index = 0;index < cantidad;index ++){
			if(arrPtrPeliculas[index] -> getId()==_Id)
				return arrPtrPeliculas[index];
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
	while(getline(fin, line)){
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
     for(int index = 0; index < cantidad; index ++)
    {
    	acumulado = acumulado + arrPtrPeliculas[index] -> getCalificacion();
    	cout << index << "-" << arrPtrPeliculas[index] -> str() << endl;
    }
    if (cantidad > 0)
        cout << "Promedio Peliculas:" << acumulado / cantidad << endl;
    else
        cout << "No hay promedio";
}

void Peliculas::reporteConCalificacion(double _calificacion)
{
	int contador = 0;
	for(int index = 0;index < cantidad;index ++){
			if(arrPtrPeliculas[index] -> getCalificacion() == _calificacion){
				cout << arrPtrPeliculas[index] -> str() << endl;
				contador ++;
			}
	}
		if(contador == 0)
			cout << "No hay peliculas de la calificación:" << _calificacion << endl;
}

void Peliculas::reporteGenero(string _genero)
{
	int contador = 0;
	for(int index = 0;index < cantidad;index ++){
			if(arrPtrPeliculas[index] -> getGenero() == _genero){
				cout << index << ' ' << *arrPtrPeliculas[index];
				contador ++;
			}
	}
	if(contador == 0)
		cout << "No hay peliculas del genero:" << _genero << endl;
}
