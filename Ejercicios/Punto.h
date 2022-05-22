#pragma once
#include <iostream>


using namespace std;

class Punto
{
    private:
        double x,y;
    
    public:
        Punto();
        Punto(double _x,double _y);
        void imprimirPunto();
        double getX();
        void setX(double);
        double getY();
        void setY(double);

};