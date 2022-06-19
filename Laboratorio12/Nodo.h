#pragma once
#include <iostream>

using namespace std;

class Nodo
{
    private:
        int dato;
        Nodo *siguiente;
        friend class Cola;

    public:
        Nodo(int _dato);
        ~Nodo();
};