#pragma once
#include "Prestamo.h"
#include <iostream>

using namespace std;

class Hipoteca : public Prestamo
{
    public:
        Hipoteca();
        void Imprimir();
        ~Hipoteca();
};