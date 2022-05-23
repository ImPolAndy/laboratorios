#include "Gallina.h"
#include <iostream>

using namespace std;

Gallina::Gallina(int _num_patas,string _sonido) : Ave(_num_patas,_sonido)
{
    Ave(_num_patas,_sonido);
}

void Gallina::ImprimirGallina()
{
    ImprimirAve();
}

Gallina::~Gallina()
{
    
}