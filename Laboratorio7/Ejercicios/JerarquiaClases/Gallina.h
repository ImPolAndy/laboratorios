#pragma once
#include "Ave.h"
#include <iostream>

using namespace std;

class Gallina : public Ave
{
    public:
        Gallina(int, string);
        void ImprimirGallina();
        ~Gallina();
};