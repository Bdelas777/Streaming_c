#include "Series.h"
#include<fstream>
#include <sstream>
#include"Serie.h"

// Constructores
Series::Series() {}
Series::Series(string _iD, string _titulo, int _duracion,string _genero, double _calificacionPromedio ) {}
//Setters
void Series::setPtrSerie(Serie * ptr)
{
	if (cantidad < 50){
		setPtrSerie[cantidad++] = ptr;
	}
}
//Otros metodos
void Series::leerArchivo(){
	string linea,dato, row[6];
	int iRow{}, iS{}, cantEpisodios{};
	fstream lectura;
	Episodio *episodio;
	lectura.open("C:/Users/6QV46LA/OneDrive/Documentos/Serie2021.csv",ios::in);
	cantidad=0;


