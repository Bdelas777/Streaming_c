#include "Peliculas.h"
#include<fstream>
#include<iostream>
using namespace std;
//Constructores
Peliculas::Peliculas(){
}
//Setters
void Peliculas::setPtrPelicula(Pelicula *_pelicula){
	string row[6];
	arrPtrPeliculas[cantidad]= new Pelicula(row[0],row[1],row[2],row[3],row[4],row[5]);
	cantidad=cantidad+1;
}

void Peliculas::setCantidadPeliculas(int _cantidad){
	cantidad=_cantidad;
}

//Getters
Pelicula * Peliculas::getPtrPelicula(string _Id){
	for(int i=0;i<cantidad;i++){
		if(Peliculas[i][1]==_Id)
    {
        return arrPtrPeliculas[i]->str;
    }
    else
        return nullptr;
	}
}

int Peliculas::getCantidadPeliculas(){
	return cantidad;
}

//Otros metodos
void Peliculas::leerArchivo(){
	fstream fin;
	string row[6],line, word;
	fin.open("C:\Users\6QV46LA\Downloads\Pelicula-1.csv", ios::in);
	cantidad=0;
	while(getline(fin, line)){
		cout<<cantidad<<line<<endl;
		stringstream s(line);
		int iR=0;
		while(getline(s,word,',')){
			row[iR++]=  word;
		}
		arrPtrPeliculas[cantidad]= new Pelicula(row[0],row[1],row[2],row[3],row[4],row[5]);
		cout << "iD: " << row[0] << "\n";
		cout << "Titulo: " << row[1] << "\n";
		cout << "Duracion: " << row[2] << "\n";
		cout << "Genero: " << row[3] << "\n";
		cout << "Calificacion: " << row[4] << "\n";
		cout << "Oscares: " << row[5] << "\n";
		cout << "Dentro del objeto: " << arrPtrPeliculas[cantidad]->str<<endl;
		cantidad=cantidad+1;
	}
	fin.close();
	for(int iR=0;iR<cantidad;iR++){
		cout<<iR<<"-"<<arrPtrPeliculas[iR]->str()<<endl;
	}
}

void Peliculas::reporteTodasLasPeliculas(){
	double acumulado=0;
    for(int index=0; index<cantidad; index++)
    {
        acumulado = acumulado + Pelicula[index].getCalificacion();
    }
    for(int i=0;i<cantidad;i++){
			cout<<arrPtrPeliculas->str<<endl;
	}
	cout<<acumulado<<endl;

}
void Peliculas::reportePorCalificacion(double calificacion){
	for(int i=0;i<cantidad;i++){
		if(Pelicula[i][4]==calificacion)
			cout<<arrPtrPeliculas[i]->str<<endl;
	}
}

void Peliculas::reporteGenero(string genero){
	for(int i=0;i<cantidad;i++){
		if(Pelicula[i][3]==genero)
			cout<<arrPtrPeliculas[i]->str<<endl;
	}

}
