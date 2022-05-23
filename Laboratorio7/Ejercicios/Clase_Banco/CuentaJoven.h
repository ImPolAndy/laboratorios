#pragma once
#include "Cuenta.h"
#include <iostream>

using namespace std;

class CuentaJoven : private Cuenta
{
    private:
        int edad;
    public:
        CuentaJoven();
        void AsignarCuentaJoven();
        void Imprimir();
        ~CuentaJoven();
};