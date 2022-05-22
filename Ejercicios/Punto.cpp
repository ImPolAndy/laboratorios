#include "stdio.h"
#include "Punto.h"

Punto::Punto()
{
    this->x = 0.0;
    this->y = 0.0;
}
Punto::Punto(double _x,double _y)
{
    this->x = _x;
    this->y = _y;
}

void Punto::imprimirPunto()
{
    cout<<'('<<x<<','<<y<<')';
}
double Punto::getX()
{
    return this->x;
}   

void Punto::setX(double nueva_x)
{
    this->x = nueva_x;
}

double Punto::getY()
{
    return this->y;
}

void Punto::setY(double nueva_y)
{
    this->y = nueva_y;
}

