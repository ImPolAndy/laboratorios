#pragma once
#include "Punto.h"
#include <iostream>

using namespace std;

class Forma
{
    protected:
        /* data */
        string color;
        Punto centro;
        string NombreForma;
    public:
        Forma(string, double, double, string);
        ~Forma();
        virtual void ImprimirForma();
        string Obtener_color();
        void cambiar_color(string Nuevo_color);
        void Mover_forma(double Nuevo_x, double Nuevo_y);
        virtual double area()
            {return 0;} 
};

