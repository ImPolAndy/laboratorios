#pragma once
#include "Color.h"
#include "Material.h"
#include <iostream>

using namespace std;

class Objeto : public Color, Material
{
    Color Obj_color; 
    Material Obj_material;
    public:
    Objeto(Color,Material);
    ~Objeto();
    void Imprimir_Objeto();
};