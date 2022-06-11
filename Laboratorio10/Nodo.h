#include <iostream>

using namespace std;

class Nodo
{
    public:
        Nodo();
        Nodo(int);
        ~Nodo();
        
        Nodo *siguiente;
        int dato;
        void eliminar();
        void imprimir();
};