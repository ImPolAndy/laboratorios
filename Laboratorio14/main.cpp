#include <iostream>
#include "Tienda.h"

using namespace std;

int main()
{
    int opc;
    Tienda *tienda = new Tienda();
    Producto *nuevoProducto;
    char *codigo;
    char *nombre;
    double precio;
    int stock;
    char estado;

    do
    {
        cout<<" 1. Ingresar y dar de alta un nuevo producto "<<"\n";
        cout<<" 2. Eliminar un producto "<<"\n";
        cout<<" 3. Mostra producto "<<"\n";
        cout<<" 4. Buscar un producto por nombre o codigo: "<<"\n";
        cout<<" 5. Modificar un producto "<<"\n";
        cout<<" 6. Dar de baja un producto "<<"\n";
        cout<<" 9. Salir "<<"\n";
        cin>>opc;

        switch (opc)
        {
        case 1:
            codigo = new char[15];
            nombre = new char[20];
            cout<<" Ingrese un nuevo producto: "<<"\n";
            cin>>nombre;
            cout<<" Ingrese un codigo: "<<"\n";
            cin>>codigo;
            cout<<" Ingrese el precio del producto: "<<"\n";
            cin>>precio;
            cout<<" Ingrese el stock del producto: "<<"\n";
            cin>>stock;
            cout<<"El estado del nuevo producto es activo cuando esta en stock"<<"\n";
            estado = 'a';

            nuevoProducto = new Producto(nombre, codigo, precio, stock, estado);
            tienda->ingresar_producto(nuevoProducto);

            break;
        
        case 2:
            tienda->eliminar_producto();
            break;
        
        case 3:
            cout<<"Codigo \t Nombre \t Precio \t Stock \t Estado?"<<"\n";
            for (int i = 0; i < tienda->getIndice(); i++)
            {
                cout<<tienda->devolver_producto(i)->getNombre()<<"\t"<<tienda->devolver_producto(i)->getCodigo()
                <<"\t"<<tienda->devolver_producto(i)->getPrecio()<<"\t"<<tienda->devolver_producto(i)->getStock()
                <<"\t"<<tienda->devolver_producto(i)->getEstado()<<"\n";
            }
            break;
        case 4:
            char *nombre_buscado;
            char *codigo_buscado;
            codigo_buscado = new char[15];
            nombre_buscado = new char[20];
            char opc_buscar;

            cout<<" Ingrese 'n' si desea buscar por nombre "<<"\n";
            cout<<" Ingrese 'c' si desea buscar por codigo "<<"\n";
            cin>>opc_buscar;
            cout<<"Ingrese el nombre del producto a buscar "<<"\n";
            cin>>nombre_buscado;
            cout<<"Ingrese el codigo del producto a buscar "<<"\n";
            cin>>codigo_buscado;
            tienda->Buscar_Producto(nombre_buscado, codigo_buscado, opc_buscar);

            break;
        case 5:
            int pos;
            char opc_mod;
            cout<<" Ingrese la posicion del producto que desea modificar "<<"\n";
            cin>>pos;

            char *nombre_mod; 
            char *codigo_mod; 
            double precio_mod; 
            int stock_mod;
            nombre_mod = new char[15];
            codigo_mod = new char[20];

            cout<<"Indique 'n' para modificar nombre "<<"\n";
            cout<<"Indique 'c' para modificar codigo "<<"\n";
            cout<<"Indique 'p' para modificar precio "<<"\n";
            cout<<"Indique 's' para modificar stock "<<"\n";
            cin>>opc_mod;

            tienda->Modificar_producto(pos, opc_mod, nombre_mod, codigo_mod, precio_mod, stock_mod);
            break;

        case 6:
            for (int i = 0; i < tienda->getIndice(); i++)
            {
                if (tienda->devolver_producto(i)->getStock() == 0)
                {
                    cout<<" Stock agotado "<<"\n";
                    tienda->eliminar_producto();
                }
            }
            break;
        default:
            break;
        }
    } while (!(opc==9));
        cin.ignore();
        cin.get();
    return 0;
}