#include "Peliculas.h"
#include<fstream>
#include <sstream>
#include"Pelicula.h"
//Constructores
Peliculas::Peliculas(){}

Peliculas::Peliculas(string _iD, string _titulo, int _duracion,string _genero, double _calificacionPromedio,int _oscares){}

//Setters
void Peliculas::setPtrPelicula(Pelicula *_pelicula)
{
	if (cantidad < 50){
		arrPtrPeliculas[cantidad++] = _pelicula;
	}
}
void Peliculas::setCantidadPeliculas(int _cantidad)
{
	cantidad=_cantidad;
}

//Getters
Pelicula* Peliculas::getPtrPelicula(string _Id)
{
	for(int index=0;index<cantidad;index++){
			if(arrPtrPeliculas[index]->getId()==_Id)
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

	while(getline(fin,line)){
		stringstream s(line);
		int iR = 0;
		while(getline(s,word,',')){
			row[iR++] = word;
		}
		setPtrPelicula(new Pelicula(row[0],row[1] ,stoi(row[2]),row[3],stod(row[4]),stoi(row[5])));

	}
	fin.close();
	/*(int iR=0;iR<cantidad;iR++){
		cout<< iR << " - "<< arrPtrPeliculas[iR]->str()<<endl;
	}*/
}

void Peliculas::reporteTodasLasPeliculas()
{
	double acumulado=0;
    for(int index=0; index<cantidad; index++)
    {
        acumulado = acumulado + arrPtrPeliculas[index]->getCalificacion();
    }
     for(int index=0; index<cantidad; index++)
    {
    	cout<<arrPtrPeliculas[index]->str()<<endl;

    }
    if (cantidad > 0)
        cout<<acumulado/cantidad;
    else
        cout<<0;
}

void Peliculas::reportePorCalificacion(double _calificacion)
{
	for(int index=0;index<cantidad;index++){
			if(arrPtrPeliculas[index]->getCalificacion()==_calificacion)
				cout<<arrPtrPeliculas[index]->str()<<endl;
	}
}


void Peliculas::reporteGenero(string _genero)
{
	for(int index=0;index<cantidad;index++){
			if(arrPtrPeliculas[index]->getGenero()==_genero)
				cout<<arrPtrPeliculas[index]->str()<<endl;
	}
}
