#include "CuentaJoven.h"
#include <iostream>

using namespace std;

CuentaJoven::CuentaJoven()
{
    edad = 18;
    Cuenta();
}

void CuentaJoven::AsignarCuentaJoven()
{
    cout<<"edad del cliente: "<<edad<<"\n";
    AsignarCuenta();
}


void CuentaJoven::Imprimir()
{
    Cuenta::Imprimir();
}

CuentaJoven::~CuentaJoven()
{

}