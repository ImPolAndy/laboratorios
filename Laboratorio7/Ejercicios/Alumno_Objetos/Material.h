#pragma once
#include "Color.h"
#include <iostream>

using namespace std;

class Material
{
    private:
        string _Material;
    
    public:
        Material();
        Material(string __Material);
        ~Material();
        void Imprimir_Material();
};