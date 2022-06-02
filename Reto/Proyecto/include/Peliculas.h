#ifndef PELICULAS_H
#define PELICULAS_H

#include"Pelicula.h"

const int  MAX_PEL = 50; // constante
class Peliculas{
	private://atributos
		Pelicula *arrPtrPeliculas[MAX_PEL];
		int cantidad;
	public:// Metodos
		//Constructores
		Peliculas();
		Peliculas(string _iD, string _titulo, int _duracion,string _genero, double _calificacionPromedio,int _oscares);

		//Setters
		void setPtrPelicula(Pelicula *_pelicula);
		void setCantidadPeliculas(int _cantidad);

		//Getters
		Pelicula * getPtrPelicula(string _Id);
		int getCantidadPeliculas();

		//Otros metodos
		void leerArchivo();
		void reporteTodasLasPeliculas();
		void reportePorCalificacion(double _calificacion);
		void reporteGenero(string genero);

};
#endif // PELICULAS_H

