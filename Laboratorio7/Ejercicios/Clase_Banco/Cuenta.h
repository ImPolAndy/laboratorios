#pragma once
#include "ProductoBancario.h"
#include <iostream>

using namespace std;

class Cuenta : public ProductoBancario
{
    private:
        int Numero_cuenta;
    
    public:
        Cuenta();
        void AsignarCuenta();
        void Imprimir();
        ~Cuenta();
};