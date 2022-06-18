#pragma once
#include "Nodo.h"
#include <iostream>

class Pila
{
    private:
        Nodo *tope;
        int tamaño;
    
    public:
        Pila();
        bool esta_vacia();
        int obtener_tope();
        void insertar_dato(int dato);
        void buscar_dato(int _dato);
        int eliminar();
        void mostrar();
        int vaciar();
        ~Pila();

};