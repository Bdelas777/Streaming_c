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
	if (cantidad <50){
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
	fin.open("C:/Users/6QV46LA/OneDrive/Documentos/Pelicula-1.csv",ios::in);
	cantidad = 0;

	while(getline(fin,line)){
		//cout << cantidad << line << endl;
		stringstream s(line);
		int iR = 0;
		while(getline(s,word,',')){
			row[iR++]=word;
		}
		arrPtrPeliculas[cantidad]= new Pelicula(row[0],row[1] ,stoi(row[2]),row[3],stod(row[4]),stoi(row[5]));
		/*cout << "Id: "<< row[0] << "\n";
		cout << "Titulo: "<< row[1] << "\n";
		cout << "Duracion: "<< row[2] << "\n";
		cout << "Genero: "<< row[3] << "\n";
		cout << "Calificacion: "<< row[4] << "\n";
		cout << "Oscares: "<< row[5] << "\n";
		cout <<"Dentro del objeto: "<< arrPtrPeliculas[cantidad]->str() << endl;*/
		cantidad= cantidad +1;

	}
	fin.close();
	/*for(int iR=0;iR<cantidad;iR++){
		cout<< iR << "-"<< arrPtrPeliculas[iR]->str()<<endl;
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
	int count=0;
	for(int index=0;index<cantidad;index++){
			if(arrPtrPeliculas[index]->getCalificacion()==_calificacion){
				count++;
				cout<<arrPtrPeliculas[index]->str()<<endl;
			}

	}
	if( count==0)
		cout<<"No hay peliculas del calificacion: "<< _calificacion;
}
void Peliculas::reporteGenero(string genero)
{
	int contador=0;
	for(int index=0;index<cantidad;index++){
			if(arrPtrPeliculas[index]->getGenero()==genero){
				cout<<arrPtrPeliculas[index]->str()<<endl;
				contador++;
			}
	}
	if( contador==0)
		cout<<"No hay peliculas del genero: "<< genero;
}
