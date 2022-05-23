#include "ProductoBancario.h"
#include <iostream>

using namespace std;

ProductoBancario::ProductoBancario()
{
    cliente = " ";
    saldo = 0.0;
    numProductos = 0;
}

void ProductoBancario::AsignarPB()
{
    string _cliente;
    double _saldo;
    int _numProductos;
    cout<<"Ingrese nuevo cliente: "; cin>>_cliente;
    cout<<"Ingrese nuevo saldo: "; cin>>_saldo;
    cout<<"Ingrese numero de productos: "; cin>>_numProductos;
    this->cliente = _cliente;
    this->saldo = _saldo;
    this->numProductos = _numProductos;
}

void ProductoBancario::Imprimir()
{
    cout<<"Nombre de cliente: "<<cliente<<"\n"<<"saldo: "<<saldo<<"\n";
}

ProductoBancario::~ProductoBancario()
{

}