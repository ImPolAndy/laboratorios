#pragma once
#include "Nodo.h"
#include <iostream>

using namespace std;

class Cola
{
    private:
        Nodo *inicio;
        Nodo *fin;
        int tamaño;

    public:
        Cola();
        bool esta_vacia();
        int obtener_inicio();
        int obtener_fin();
        int obtener_tamaño();
        void insertar_nodo(int dato);
        void buscar_dato(int dato);
        int eliminar();
        int vaciar();
        void mostrar_cola();
        void comparar();
        ~Cola();
};