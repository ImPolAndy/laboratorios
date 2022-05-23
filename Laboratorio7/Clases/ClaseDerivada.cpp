#include "stdio.h"
#include "ClaseDerivada.h"
#include <iostream>
using namespace std;

ClaseDerivada::ClaseDerivada(int _valor3, int _valor4)
{
    valor3 = _valor3;
    valor4 = _valor4;
}

ClaseDerivada::~ClaseDerivada()
{
}

void ClaseDerivada::UnMetodoClaseDerivada()
{
    int rpta = valor3 + valor4 + valor1 + valor2;
    cout << "Ingreso a Metodo de Clase Derivada y la suma de 2 valores y la respuesta es: " << rpta << endl;
}