#ifndef PELICULAS_H
#define PELICULAS_H
#include"Pelicula.h"
const int MAX_PEL = 50; // constante
class Peliculas
{
	public:// Metodos
		//Constructores
		Peliculas();
		//Setters
		void setPtrPelicula(Pelicula *_pelicula);
		void setCantidadPeliculas(int _cantidad);

		//Getters
		Pelicula * getPtrPelicula(string _Id);
		int getCantidadPeliculas();

		//Otros metodos
		void leerArchivo();
		void reporteTodasLasPeliculas();
		void reportePorCalificacion(double _calificacionPromedio);
		void reporteGenero(string _genero);



	private://atributos
		Pelicula *arrPtrPeliculas[MAX_PEL];
		int cantidad;
}
#endif // PELICULAS_H
