#include "Alumno.h"
#include <iostream>

using namespace std;

Alumno::Alumno()
{
    edad = 0;
    Nombre = " ";
}

void Alumno::Asignar_Alumno() 
{
    string _Nombre;
    int _edad;
    cout<<"Ingrese su nombre: \n"; cin>>_Nombre;
    cout<<"Ingrese su edad: \n"; cin>>_edad;
    this->Nombre = _Nombre;
    this->edad = _edad;
}

void Alumno::Imprimir_Alumno()
{
    cout<<"Nombre del alumno: "<<Nombre<<"\n edad: "<<edad<<"\n";
}