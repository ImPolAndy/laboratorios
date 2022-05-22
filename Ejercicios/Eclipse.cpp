#include "Eclipse.h"
#include <iostream>
const double Pi=3.14;

using namespace std;

Eclipse::Eclipse(string _color, double _x, double _y, string Nom_Forma, double R, double r) : Forma(_color, _x, _y, Nom_Forma)
{
    this->radio_mayor = R;
    this->radio_menor = r;
}

void Eclipse::ImprimirForma()
{
    Forma::ImprimirForma();
    cout<<"Radio mayor: "<<radio_mayor<<"\t"<<"Radio menor: "<<radio_menor<<"\n";
}

double Eclipse::area()
{
    double _area;
    return _area = Pi*(this->radio_mayor * this->radio_menor);
}