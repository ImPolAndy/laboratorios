#pragma once
#include "Forma.h"
#include <iostream>

using namespace std;

class Eclipse : public Forma
{
    private:
        double radio_mayor;
        double radio_menor;
    
    public:
        Eclipse(string, double, double, string, double,double);
        void ImprimirForma();
        double area();
};