#include "Ave.h"
#include <iostream>

using namespace std;

Ave::Ave(int _numero_patas, string _sonido)
{
    numero_patas = _numero_patas;
    sonido = _sonido;
}

void Ave::ImprimirAve()
{
    cout<<"Tiene "<<numero_patas<<" patas \n";
    cout<<"sonido: "<<sonido<<"\n";
}

Ave::~Ave()
{

}