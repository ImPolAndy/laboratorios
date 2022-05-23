#pragma once
#include <iostream>

using namespace std;

class Ave
{
    private:
        int numero_patas;
        string sonido;
    
    public:
        Ave(int, string);
        void ImprimirAve();
        ~Ave();
};