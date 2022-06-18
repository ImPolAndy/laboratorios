#pragma once
#include <iostream>

using namespace std;

class Nodo
{
    private:
        int dato;
        Nodo *anterior;
        friend class Pila;
        
    public:
        Nodo(int _dato);
};
