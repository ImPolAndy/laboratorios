#pragma one
#include "stdio.h"
#include <iostream>

using namespace std;

class Persona
{
    protected:
        int edad;
        string Nombre;

    public:
        Persona();
        void Asignar_Persona();
        void Imprimir_Persona();
};