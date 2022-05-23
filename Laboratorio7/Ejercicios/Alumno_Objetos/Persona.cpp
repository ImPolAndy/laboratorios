#include "Persona.h"
#include <iostream>

using namespace std;

Persona::Persona()
{
    edad = 0;
    Nombre = " ";
}

void Persona::Asignar_Persona()
{

}

void Persona::Imprimir_Persona()
{
    cout<<"Nombre: "<<Nombre<<"\n edad: "<<edad<<"\n";
}