#pragma once
#include <iostream>

using namespace std;

class Color
{
    private:
        string _color;
    public:
        Color(); 
        Color(string _color);
        ~Color();
        void Imprimir_Color();
};