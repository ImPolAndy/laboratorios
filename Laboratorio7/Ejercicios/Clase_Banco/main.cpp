#include "CuentaJoven.h"
#include "Hipoteca.h"
#include <iostream>

using namespace std;

int main()
{
    cout<<"------------<Definiendo Prodcuto bancario y cuenta>----------\n";
    Cuenta primera;
    primera.AsignarCuenta();
    primera.Imprimir();

    cout<<"------------<Definiendo cuenta Joven>----------\n";
    CuentaJoven cta_joven;
    cta_joven.AsignarCuentaJoven();
    cta_joven.Imprimir();

    cout<<"------------<Definiendo Prestamo>----------\n";
    Prestamo primero;
    primero.AsignarPrestamo();
    primero.Imprimir();

    cout<<"------------<Definiendo Hipoteca>----------\n";
    Hipoteca hptca;
    hptca.Imprimir();
    
    return 0;
}