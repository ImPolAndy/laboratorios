#include "Ganso.h"
#include <iostream>

using namespace std;

Ganso::Ganso(int _num_patas,string _sonido) : Ave(_num_patas,_sonido)
{
    Ave(_num_patas,_sonido);
}

void Ganso::ImprimirGanso()
{
    ImprimirAve();
}

Ganso::~Ganso()
{
    
}

