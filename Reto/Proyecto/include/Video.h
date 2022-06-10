#ifndef VIDEO_H
#define VIDEO_H
#include <stdio.h>
#include <string>
#include<iostream>
using namespace std;

class Video
{
	public:
		//Constructores
		Video();
		Video(string _iD, string _titulo, int _duracion ,string _genero, double _calificacionPromedio);

		//setters
		void setId(string _iD);
		void setTitulo(string _titulo);
		void setDuracion(int _duracion);
		void setGenero(string _genero);
		void setCalificacion(double _calificacionPromedio);

		//getters
		string getId();
		string getTitulo();
		int getDuracion();
		string getGenero();
		double getCalificacion();

		// Otros Metodos
		virtual string str();

	protected:
		string iD;
		string titulo;
		int duracion;
		string genero;
		double calificacionPromedio;

};

#endif // VIDEO_H

