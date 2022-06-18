#include "Pila.h"
#include <iostream>

using namespace std;

Pila::Pila()
{
    tope = NULL;
    tamaño = 0;
}
 
bool Pila::esta_vacia()
{
    return tope == NULL;
}

int Pila::obtener_tope()
{
    if (esta_vacia())
    {
        /* code */
        return -1;
    }
       
    return tope->dato;
}

void Pila::insertar_dato(int dato)
{
    Nodo *nuevo = new Nodo(dato);

    if (esta_vacia())
    {
        /* code */
        tope = nuevo;
    }
    else
    {
        nuevo->anterior = tope;
        tope = nuevo;
    }

    tamaño++;
}

void Pila::buscar_dato(int _dato)
{
    Nodo *aux = tope;
    while (aux != NULL)
    {
        /* code */
        if (aux->dato == _dato)
        {
            /* code */
            cout<<"Se encontro el dato: "<<_dato<<"en la pila\n";
        }
        else
        {
            cout<<"No se encuentra "<<_dato<<"en la pila\n";
        }
        break;
    }
    
}

int Pila::eliminar()
{
    if(esta_vacia())
    {
        return -1;
    }
    else
    {
        Nodo *aux = tope;
        tope = tope->anterior;
        int tmp = aux->dato;
        delete (aux);
        return tmp;
    }
}

void Pila::mostrar()
{
    Nodo *aux = tope;
    
    while (aux != NULL)
    {
        /* code */
        cout<<aux->dato<<"\n";
        aux = aux->anterior;
    }
}

int Pila::vaciar()
{
    Nodo *aux = tope;

    while (tope != NULL)
    {
        /* code */
        aux = tope;
        tope = tope->anterior;
        delete (aux);
    }
    
    int tmp = tamaño;
    tamaño = 0;
    return tmp;
}

Pila::~Pila()
{

}