#include "Cuenta.h"
#include <iostream>

using namespace std;

Cuenta::Cuenta() 
{
    Numero_cuenta = 0;
    ProductoBancario();
}

void Cuenta::AsignarCuenta()
{
    int _Numero_cuenta;
    cout<<"Ingrese su numero de cuenta: "; cin>>_Numero_cuenta;
    this->Numero_cuenta = _Numero_cuenta;
    AsignarPB();
}

void Cuenta::Imprimir()
{
    cout<<"El numero de cuenta es: "<<Numero_cuenta<<"\n";
    ProductoBancario::Imprimir();
}

Cuenta::~Cuenta()
{

}