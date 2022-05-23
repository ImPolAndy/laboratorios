#pragma once
#include "Ave.h"
#include <iostream>

using namespace std;

class Ganso : public Ave
{
    public:
        Ganso(int, string);
        void ImprimirGanso();
        ~Ganso();
};