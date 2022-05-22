#pragma once
#include "Forma.h"
#include <iostream>

using namespace std;

class Circulo : public Forma
{
    private:
        double radio;
    
    public:
    Circulo(string, double, double, string, double);
    void ImprimirForma();
    double area();
};