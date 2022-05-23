#pragma once
#include "ClaseMultimedia.h"
#include <iostream>

using namespace std;

class Disco : public Multimedia
{
    private:
    double capacidad;
    string tipo_capacidad;

    public:
        Disco(double,string,int,int,string,string);
        void ImprimirDisco();
        ~Disco();
};