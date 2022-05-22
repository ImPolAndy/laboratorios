#include "stdio.h"
#include "Forma.h"

using namespace std;

Forma::Forma(string _color,double _x, double _y, string Nombre_Forma)
{
    color = _color;
    this->centro = Punto(_x,_y);
    NombreForma = Nombre_Forma;
}

Forma::~Forma()
{

}

void Forma::ImprimirForma()
{
    cout<<"color: "<<color<<"\n";
    cout<<"centro: "; centro.imprimirPunto(); cout<<"\n";  
    cout<<"Nombre de la forma: "<<NombreForma<<"\n";
}

string Forma::Obtener_color()
{
    return color;
}

void Forma::cambiar_color(string Nuevo_color)
{
    color = Nuevo_color;
}

void Forma::Mover_forma(double Nuevo_x, double Nuevo_y)
{
    this->centro = Punto(Nuevo_x,Nuevo_y);
}
