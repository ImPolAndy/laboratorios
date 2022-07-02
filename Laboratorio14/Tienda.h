#ifndef _Tienda_
#define _Tienda_
#include "Producto.h"

using namespace std;

class Tienda
{
    private:
        Producto **productos;
        int indice;

    public:
        Tienda(){
            productos = new Producto*[10];
            indice = -1;
        };

        ~Tienda(){};

        void ingresar_producto(Producto *nuevoProducto){
            indice++;
            productos[indice] = nuevoProducto;
        };

        int getIndice(){return indice;}

        void eliminar_producto(){
            for (int i = 0; i <= indice; i++)
            {
                productos[i] = productos[i + 1];
            }
            indice--;
        }

        Producto *devolver_producto(int pos){
            return productos[pos];
        }

        void Buscar_Producto(char *nombre_buscado, char *codigo_buscado, char opc_buscar){
            
            if (opc_buscar == 'n')
            {
                for (int i = 0; i <= indice; i++)
                {
                    if (productos[i]->getNombre() == nombre_buscado)
                    {
                        cout<<"Si se encontro el producto "<<productos[i]->getNombre();
                    }
                    else{
                        cout<<"No se encontro el producto "<<"\n";
                    }
                
                }
            }
            else if (opc_buscar == 'c')
            {
                for (int i = 0; i <= indice; i++)
                {
                    if (productos[i]->getCodigo() == codigo_buscado)
                    {
                        cout<<"Si se encontro el producto "<<productos[i]->getCodigo();
                    }
                    else{
                        cout<<"No se encontro el producto "<<"\n";
                    }
                }
            }
        }

        void Modificar_producto(int pos,char opc_mod,char *nombre_mod, char *codigo_mod, double precio_mod, int stock_mod){

            if (indice == pos)
            {
                switch (opc_mod)
                {
                case 'n':
                    cout<<"Ingrese nuevo nombre "<<"\n";
                    cin>>nombre_mod;
                    productos[pos]->setNombre(nombre_mod);
                    break;
                
                case 'c':
                    cout<<"Ingrese nuevo codigo "<<"\n";
                    cin>>codigo_mod;
                    productos[pos]->setCodigo(codigo_mod);
                    break;
                case 'p':
                    cout<<"Ingrese nuevo precio "<<"\n";
                    cin>>precio_mod;
                    productos[pos]->setPrecio(precio_mod);
                    break;
                
                case 's':
                    cout<<"Ingrese nuevo stock "<<"\n";
                    cin>>stock_mod;
                    productos[pos]->setStock(stock_mod);
                    break;

                default:
                    break;
                }
            }
            
        }
};


#endif