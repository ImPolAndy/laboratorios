#include "Nodo.h"

Nodo::Nodo()
{
    dato = 0;
    siguiente = NULL;
}

Nodo::Nodo(int _dato)
{
    dato = _dato;
    siguiente = NULL;
}

void Nodo::eliminar()
{
    if (siguiente)
    {
        /* code */
        siguiente->eliminar();
    }
    delete this;
}

void Nodo::imprimir()
{
    cout<<"Nodo-> "<<"Dato: "<<dato<< " Siguiente: "<<siguiente<<"/n";
    cout<<dato<<"->";
}

Nodo::~Nodo()
{
    
}