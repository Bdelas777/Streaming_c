#include <iostream>
#include "Video.h"
#include "Pelicula.h"
#include "Episodio.h"
#include "Serie.h"
using namespace std;

int main()
{
	//Clase video
	cout<<"Ejemplos clase video con y sin dar parametros: "<<endl;
    Video video1;
    Video video2("001","West World",200,"Ciencia ficción",10);
	cout<<video1.str()<<endl<<video2.str()<<endl;

	//Clase pelicula
	cout<<"Ejemplos clase pelicula con y sin dar parametros: "<<endl;
	Pelicula peli1;
	Pelicula peli2("003","Love, Rosie",150,"Romance",9,1);
	cout<<peli1.str()<<endl<<peli2.str()<<endl;

	//Clase episodio
	cout<<"Ejemplos de clase episodio con y sin parametros: "<<endl;
	Episodio episodio1("Coronacion",1,10);
	Episodio episodio2("La caida",4,8);
	Episodio episodio3;
	cout<<episodio1.str()<<endl<<episodio2.str()<<endl<<episodio3.str()<<endl;

	//Clase Serie
	cout<<"Ejemplo de clase serie: "<<endl;
	Serie serie1("002","La Reina",300, "Drama",9);
	serie1.setEpisodio(0,episodio1);
	serie1.setCantidad(serie1.getCantidad() + 1);
	serie1.setEpisodio(1,episodio2);
	serie1.setCantidad(serie1.getCantidad() + 1);
	serie1.setEpisodio(2,episodio3);
	serie1.setCantidad(serie1.getCantidad() + 1);
	cout<<"Salida del metodo de calificacion promedio: ";
	cout<<serie1.calculaCalPromedio()<<endl;
	cout<<"Ejemplo de salida de clase serie : "<<endl;
	cout<<serie1.str()<<endl;

	// Declaracion de un arreglo de apuntadores de clase Video
	Video *arrPtrVideos[]= {&video1, &video2 , &serie1,&peli1};
	cout<<"Salida de direcciones de memoria:"<<endl;
	for (int index=0;index<4;index++){
		cout<<arrPtrVideos[index]<<endl;
		cout<<arrPtrVideos[index]->str()<<endl;
	}
    return 0;
}
