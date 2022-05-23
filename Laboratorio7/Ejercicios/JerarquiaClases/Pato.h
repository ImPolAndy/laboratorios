#pragma once
#include "Ave.h"
#include <iostream>

using namespace std;

class Pato : public Ave
{
    public:
        Pato(int, string);
        void ImprimirPato();
        ~Pato();
};
