#include "Prestamo.h"
#include <iostream>

using namespace std;

Prestamo::Prestamo()
{
    double _Prestamo = 0.0;
    ProductoBancario();
}

void Prestamo::AsignarPrestamo()
{
    double _prestamo;
    cout<<"Ingrese la cantidad a ser prestada: "<<_prestamo;
    this->_Prestamo = _prestamo;
    AsignarPB();
}

void Prestamo::Imprimir()
{
    cout<<"El prestamo es de: "<<_Prestamo;
    ProductoBancario::Imprimir();
}

Prestamo::~Prestamo()
{

}