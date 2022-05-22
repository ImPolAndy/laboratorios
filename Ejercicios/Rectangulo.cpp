#include "stdio.h"
#include "Rectangulo.h"

using namespace std;

Rectangulo::Rectangulo(string _color,double _x,double _y, string Nom_Forma,double a,double b) : Forma(_color, _x, _y, Nom_Forma)
{
    lado_menor = a;
    lado_mayor = b;
}

Rectangulo::~Rectangulo()
{

}

void Rectangulo::ImprimirForma()
{
    Forma::ImprimirForma();
    cout<<"Lado menor: "<<lado_menor<<','<<"\t lado mayor: "<<lado_mayor<<"\n";
}

double Rectangulo::area()
{
    double _area;
    return _area = this->lado_menor * this->lado_mayor;
}

double Rectangulo::perimetro()
{
    double _perimetro;
    return _perimetro = 2*this->lado_menor + 2*this->lado_mayor;
}

void Rectangulo::Cambiar_tamaño(double escala)
{
        this->lado_menor *= escala;
        this->lado_mayor *= escala;
}