#ifndef SERIES_H
#define SERIES_H

const int  MAX_SERIES = 50;
class Series
{
private:
    Serie *arrPtrSeries[MAX_SERIES];

public:
    // Constructores
    Series();
    Series(string, string, int, string, double);


    //Setters
    void setPtrSerie(Serie *ptr);

    //Otros metodos
    void leerArchivo();



};

#endif // SERIES_H
