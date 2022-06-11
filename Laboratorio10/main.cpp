#include "Listas.h"
#include <iostream>

using namespace std;

int main()
{
    Lista a,b;
    int elemento,dimension,poscicion;
    cout << "Ingresa la dimensión de la lista: " << endl;
    cin>>dimension;
    
    a.Agregar_por_teclado(dimension);
    a.imprimir();
    /*
    cout<<"Agrega un elemento al inicio: "<<"\n";
    cin>>elemento;
    a.Agregar_inicio(elemento);
    a.imprimir();

     cout << "Elimina un elemento por dato: " <<"\n";
     cin>>elemento;
     a.eliminar_elemento(elemento);
     a.imprimir();
    
    cout<<"Eliminar un elemento por poscicion: \n";
    cin>>poscicion;
    a.eliminar_por_posicion(poscicion);
    a.imprimir();
    cout<<"Lista a con 1omil valores random "<<"\n";
    b.Agregar_random(dimension);
    b.imprimir();
    */
    return 0;
}