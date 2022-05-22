#pragma once
#include "Forma.h"
#include "stdio.h"

using namespace std;

class Rectangulo : public Forma
{
    private:
        double lado_menor;
        double lado_mayor;

    public:
        Rectangulo(string, double, double, string, double, double);
        ~Rectangulo();
        void ImprimirForma();//Debe imprimir que se trata de un rectangulo mostrando su nombre
                        //color, centro, y lado.
        double area();
        double perimetro();
        void Cambiar_tamaño(double);
};