#include "Cuadrado.h"
#include <iostream>

using namespace std;

Cuadrado::Cuadrado(string _color, double _x, double _y, string Nom_forma, double a) : Forma(_color, _x,_y,Nom_forma)
{
    lado = a;
}

void Cuadrado::ImprimirForma()
{
    Forma::ImprimirForma();
    cout<<"Lado del cuadrado: "<<lado<<"\n";
}

double Cuadrado::area()
{
    double _area;
    return _area = this->lado * this->lado;
}