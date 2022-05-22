#pragma once
#include "Forma.h"
#include "Rectangulo.h"
#include <iostream>

using namespace std;

class Cuadrado : public Forma
{
    private:
        double lado;
    public:
        Cuadrado(string, double, double, string, double);
        void ImprimirForma();
        double area();
};