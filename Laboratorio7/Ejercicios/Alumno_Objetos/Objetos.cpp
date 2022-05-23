#include "Objetos.h"
#include <iostream>

using namespace std;

Objeto::Objeto(Color _Obj__color,Material _Obj__material) : Color(_Obj__color), Material(_Obj__material)
{
    this->Obj_color = _Obj__color;
    this->Obj_material = _Obj__material;   
}

Objeto::~Objeto()
{

}

void Objeto::Imprimir_Objeto()
{
    Imprimir_Color();
    Imprimir_Material();
}