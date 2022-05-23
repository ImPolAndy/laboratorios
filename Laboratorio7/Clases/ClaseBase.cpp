#include "stdio.h"
#include "ClaseBase.h"
#include <iostream>
using namespace std;

ClaseBase::ClaseBase()
{
}

ClaseBase::~ClaseBase()
{
}

void ClaseBase::UnMetodoClaseBase() 
{
    int rpta = valor1 + valor2;
    cout << "Ingreso a Metodo de Clase Base y realizó la suma; la respuestaes: " <<rpta << endl;
}
