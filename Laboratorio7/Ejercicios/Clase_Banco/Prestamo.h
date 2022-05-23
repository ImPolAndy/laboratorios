#pragma once
#include "ProductoBancario.h"
#include <iostream>

using namespace std;

class Prestamo : protected ProductoBancario
{
    private:
        double _Prestamo;
    
    public: 
        Prestamo();
        void AsignarPrestamo();
        void Imprimir();
        ~Prestamo();
};