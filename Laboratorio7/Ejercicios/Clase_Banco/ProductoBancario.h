#pragma once
#include <iostream>

using namespace std;

class ProductoBancario
{
    private:
        string cliente;
        double saldo;
        int numProductos;
    
    public:
        ProductoBancario();
        void AsignarPB();
        virtual void Imprimir();
        ~ProductoBancario(); 

};