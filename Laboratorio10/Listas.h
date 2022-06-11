#include <stdlib.h>
#include <string>
#include <iostream>

#include "Nodo.h"

using namespace std;

class Lista
{
    private:
        Nodo *inicio;
        int num_nodos;

    public:
        Lista();
        ~Lista();
        void Agregar_inicio(int);
        void Agregar_final(int);
        void Eliminar();
        void eliminar_elemento(int);
        void Agregar_por_teclado(int);
        void Agregar_random(int);
        void eliminar_por_posicion(int);
        void invertir();
        void ordenar_asec_desc(int orden);
        void imprimir();
};