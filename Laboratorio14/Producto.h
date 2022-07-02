#include <iostream>
#ifndef _Tienda_H_
#define _Tienda_

using namespace std;

class Producto
{
    private:
        char *codigo;
        char *nombre;
        double precio;
        int stock;
        char estado;

    public:
        Producto(char *codigo, char *nombre, double precio, int stock, char estado )
        {
            this->codigo = new char[15];
            this->nombre = new char[20];
            this->codigo = codigo;
            this->nombre = nombre;
            this->precio = precio;
            this->stock = stock;
            this->estado = estado;

        };

        ~Producto(){};
        char * getCodigo(){ return codigo;}
        char * getNombre(){ return nombre;}
        double  getPrecio(){ return precio;}
        int getStock(){return stock;}
        char getEstado(){return estado;}

        void setNombre(char *nuevoNombre){
            this->nombre = nuevoNombre;
        }

        void setCodigo(char *nuevoCodigo){
            this->codigo = nuevoCodigo;
        }

        void setPrecio(double nuevoPrecio){
            this->precio = nuevoPrecio;
        }

        void setStock(int nuevoStock){
            this->stock = nuevoStock;
        }

};

#endif