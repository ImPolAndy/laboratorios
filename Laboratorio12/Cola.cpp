#include "Cola.h"
#include <iostream>

Cola::Cola()
{
    inicio = NULL;
    fin = NULL;
    tamaño = 0;
}

bool Cola::esta_vacia()
{
    return tamaño == 0;
}

int Cola::obtener_inicio()
{
    if (esta_vacia())
    {
        return inicio->dato;
    }

    return -1;
}

int Cola::obtener_fin()
{
    if (esta_vacia())
    {
        return fin->dato;
    }

    return -1;
}

int Cola::obtener_tamaño()
{
    return tamaño;
}

void Cola::insertar_nodo(int dato)
{
    Nodo *nuevo = new Nodo(dato);
    if (esta_vacia())
    {
        inicio = fin = nuevo;
    }
    else
    {
        fin->siguiente = nuevo;
        fin = nuevo;
    }

    tamaño ++;
}

void Cola::buscar_dato(int _dato)
{
    Nodo *auxiliar = inicio;
    
    while (auxiliar != NULL)
    {
        if (inicio->dato == _dato)
        {
            cout<<"Se encontro el dato: "<<_dato<<" en la cola\n";
            break;
        }
        else
        {
            cout<<"No se encuentra "<<_dato<<" en la cola\n";
        }
         auxiliar = auxiliar->siguiente;
    }
    
}

int Cola::eliminar()
{
    Nodo *auxiliar;
    if (esta_vacia())
    {
        return -1;
    }
    else
    {
        auxiliar = inicio;
        inicio = inicio->siguiente;
        int tmp = auxiliar->dato;   
        delete auxiliar;
        tamaño --;
        return tmp;
    }
}

int Cola::vaciar()
{
    Nodo *auxiliar = inicio;

    while (inicio != NULL)
    {
        auxiliar = inicio->siguiente;
        delete(auxiliar);
    }
    
    fin = NULL;
    int tmp = tamaño;
    tamaño = 0;
    return tmp;
}

void Cola::mostrar_cola()
{
    Nodo *auxiliar = inicio;

    while (auxiliar != NULL)
    {
        cout<<auxiliar->dato<<"\n";
        auxiliar = auxiliar->siguiente;
    }
    
}

void Cola::comparar()
{
    Nodo *mayor;
    Nodo *auxiliar =  inicio;
    while (auxiliar != NULL)
    {
        if(inicio->dato > auxiliar->siguiente->dato)
        {
            mayor->dato = inicio->dato;
            auxiliar->dato = inicio->dato;
            inicio->dato = auxiliar->dato;
            auxiliar = auxiliar->siguiente;
        }
        else
        {
            inicio->siguiente;
        }
    }
}

Cola::~Cola()
{

}