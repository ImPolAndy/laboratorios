#include "Color.h"
#include <iostream>

using namespace std;

Color::Color()
{
    _color = " ";
}

Color::Color(string __color)
{
    _color = __color;
}

Color::~Color()
{
    
}

void Color::Imprimir_Color()
{
    cout<<"El color es: "<<_color<<"\n";
}