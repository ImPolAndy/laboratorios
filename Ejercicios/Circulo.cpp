#include "Circulo.h"
#include <iostream>
const double Pi=3.14;

using namespace std;

Circulo::Circulo(string _color,double _x, double _y, string Nomb_Forma,double r) : Forma(_color,_x,_y,Nomb_Forma)
{
    radio = r;
}

void Circulo::ImprimirForma()
{
    Forma::ImprimirForma();
    cout<<"El radio del circulo es: "<<radio;
}

double Circulo::area()
{
    double _area;
    return _area = Pi * (this->radio * this->radio); 
}