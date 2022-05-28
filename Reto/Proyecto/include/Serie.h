#ifndef SERIE_H
#define SERIE_H
#include "Episodio.h"
#include "Video.h"
class Serie:public Video
{
private:
    Episodio episodio[5];
    int cantidad;

public:

    //Constructores
    Serie();
    Serie(string, string, int, string, double);

    //setters
    void setEpisodio(int _index, Episodio _episodio);
    void setCantidad(int _cantidad);

    //Getters
    Episodio getEpisodio(int _index);
    int getCantidad();

    //Otros Metodos
    double calculaCalPromedio();
    string str();


};

#endif // SERIE_H
