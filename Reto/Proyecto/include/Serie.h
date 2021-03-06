#ifndef SERIE_H
#define SERIE_H
#include "Episodio.h"
#include "Video.h"
class Serie:public Video
{
private://Atributos
    Episodio episodio[5];
    int cantidad;


public://Metodos
    //Constructores
    Serie();
    Serie(string, string, int, string, double, int);


    //Setters
    void setEpisodio(int _index, Episodio _episodio);
    void setCantidad(int _cantidad);


    //Getters
    Episodio getEpisodio(int _index);
    int getCantidad();


    //Otros Metodos
    double calculaCalPromedio();
    string str();


    //Sobrecarga de metodo
    friend ostream &operator<<(ostream &out, const Serie &serie);
};

#endif // SERIE_H
