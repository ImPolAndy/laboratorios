#include "Material.h"
#include <iostream>

using namespace std;

Material::Material()
{
    _Material = " ";
}

Material::Material(string __Material)
{
    _Material = __Material;
}

Material::~Material()
{
    
}

void Material::Imprimir_Material()
{
    cout<<"El material es: "<<_Material<<"\n";
}