#include "Alumno.h"
#include "Objetos.h"
#include <iostream>

using namespace std;

int main()
{
    cout<<"---------"<<"Definiendo la clase Alumno"<<"------------"<<"\n";
    Alumno a;
    a.Asignar_Alumno();
    a.Imprimir_Alumno();

    cout<<"---------"<<"Definiendo la clase Color Material y Objetos"<<"------------"<<"\n";
    Color azul("azul");
    Material madera("madera");
    Objeto mesa(azul,madera);
    mesa.Imprimir_Objeto();
    return 0;
}
