#include "Pato.h"
#include <iostream>

using namespace std;

Pato::Pato(int _num_patas,string _sonido) : Ave(_num_patas,_sonido)
{
    Ave(_num_patas,_sonido);
}

void Pato::ImprimirPato()
{
    ImprimirAve();
}

Pato::~Pato()
{
    
}